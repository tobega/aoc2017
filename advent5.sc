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

(define (move-on steps distance head tail)
  (cond
    ((zero? distance) (move-on (1+ steps) (1+ distance) head tail))
    ((positive? distance) (let ((r (list-rump tail distance)))
      (if (null? r) (1+ steps) (move-on (1+ steps) (car r) (append head (list-head (append (list (1+ distance)) tail) distance)) (cdr r)))))
    (else (let* ((h (reverse head)) (d (abs distance)) (r (list-rump h d)))
      (if (null? r) (1+ steps) (move-on (1+ steps) (car r) (reverse (cdr r)) (append (reverse (list-head (append (list (1+ distance)) h) d)) tail)))))
  )
)

(define (jump-around file-name) (let ((l (read-list file-name))) (move-on 0 (car l) '() (cdr l))))

