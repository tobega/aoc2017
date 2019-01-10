(define input "1122")
(define charlist (string->list input))
(define intlist (map (lambda(c) (- (char->integer c) (char->integer #\0))) charlist))
(define shiftedlist (append (cdr intlist) (cons (car intlist) '())))
(define mappedlist (map (lambda(a b) (if (eqv? a b) a 0)) intlist shiftedlist))
(reduce + 0 mappedlist)

(let ((input "1122"))
  (let ((intlist (map (lambda(c) (- (char->integer c) (char->integer #\0))) (string->list input))))
    (reduce + 0 (map (lambda(a b) (if (eqv? a b) a 0)) intlist (append (cdr intlist) (cons (car intlist) '()))))
  )
)

(define (digit ch) (- (char->integer ch) (char->integer #\0)))
(define (dupValue first next) (if (eqv? first next) (digit first) 0))
(define (dupsum first sum prev remaining)
  (if (null? remaining) (+ sum (dupValue prev first))
    (let ((newsum (+ sum (dupValue prev (car remaining)))))
      (dupsum first newsum (car remaining) (cdr remaining))
    )
  )
)
(define (solution input) (let ((arr (string->list input))) (dupsum (car arr) 0 (car arr) (cdr arr))))
