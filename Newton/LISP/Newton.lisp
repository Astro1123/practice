; input
(format t "x = ")
(setq x (read))

(format t "eps = ")
(setq eps (read))
(if (>= eps 1) (setq eps 0.0000000001) (if (<= eps 0) (setq eps 0.0000000001)))

(format t "h = ")
(setq h (read))
(if (>  h 1) (setq h 1) (if (<= h 0) (setq h 0.01)))

(format t "count = ")
(setq count (read))
(if (<= count 0) (setq count 1000))
(format t "~%")

; define
(defun f (x) (- (expt x 2) 2))		; Function f(x)

(defun fd (x h) (/ (- (f (+ x (/ h 2))) (f (- x (/ h 2)))) h))	; Derivative f'(x)

(defun Newton (x h) (- x (/ (f x) (fd x h))))

; calculation
(loop
	(if (= count 0) (return 0))
	(if (< (abs (f x)) eps) (return 0))
	(setq x (Newton x h))
	(setq count (- count 1))
)

(format t "x=~f~%" x)
(format t "f(x)=~f~%" (f x))

(read-char)

(quit)