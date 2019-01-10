(define (read-list file-name) (with-input-from-file file-name
  (lambda ()
    (let loop((ls '()) (s (read)))
      (if (eof-object? s)
          (reverse ls)
          (loop (cons s ls) (read))
      )
    )
  )
))

(define (list-rump l d) (cond
  ((null? l) l)
  ((eqv? 1 d) l)
  (else (list-rump (cdr l) (-1+ d)))
))

(define (updated distance) (if (>= distance 3) (-1+ distance) (1+ distance)))

(define (move-on steps distance rhead tail)
  (cond
    ((zero? distance) (move-on (1+ steps) (updated distance) rhead tail))
    ((positive? distance) (let ((r (list-rump tail distance)))
      (if (null? r) (1+ steps) (move-on (1+ steps) (car r) (append (reverse (list-head (append (list (updated distance)) tail) distance)) rhead) (cdr r)))))
    (else (let* ((d (abs distance)) (r (list-rump rhead d)))
      (if (null? r) (1+ steps) (move-on (1+ steps) (car r) (cdr r) (append (reverse (list-head (append (list (updated distance)) rhead) d)) tail)))))
  )
)

(define (jump-around file-name) (let ((l (read-list file-name))) (move-on 0 (car l) '() (cdr l))))

