(define-library (scheme inexact)
  (export 
    acos 
    asin
    atan 
    cos
    exp 
    ;finite?
    ;infinite? 
    log
    ;nan? 
    sin
    sqrt 
    tan
  )
  (begin
    (define-c acos
      "(void *data, int argc, closure _, object k, object z)"
      " return_inexact_double_op(data, k, acos, z);")
    (define-c asin
      "(void *data, int argc, closure _, object k, object z)"
      " return_inexact_double_op(data, k, asin, z);")
    (define-c atan
      "(void *data, int argc, closure _, object k, object z)"
      " return_inexact_double_op(data, k, atan, z);")
    (define-c cos
      "(void *data, int argc, closure _, object k, object z)"
      " return_inexact_double_op(data, k, cos, z);")
    (define-c exp
      "(void *data, int argc, closure _, object k, object z)"
      " return_inexact_double_op(data, k, exp, z);")
    (define (log z1 . z2)
      (if (null? z2)
          (c-log z1)
          (let ((z2* (car z2)))
            (/ (c-log z1) (c-log z2*)))))
    (define-c c-log
      "(void *data, int argc, closure _, object k, object z)"
      " return_inexact_double_op(data, k, log, z);")
    (define-c sin
      "(void *data, int argc, closure _, object k, object z)"
      " return_inexact_double_op(data, k, sin, z);")
    (define-c sqrt
      "(void *data, int argc, closure _, object k, object z)"
      " return_inexact_double_op(data, k, sqrt, z);")
    (define-c tan
      "(void *data, int argc, closure _, object k, object z)"
      " return_inexact_double_op(data, k, tan, z);")
))