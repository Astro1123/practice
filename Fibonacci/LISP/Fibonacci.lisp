; define
(defun Fibonacci (x) (if (< x 2) x (+ (Fibonacci (- x 2)) (Fibonacci (- x 1)))))


(format t "n = ")
(setq n (read))
(format t "~%")
(if (< n 0) (setq n 0))

(setq i 0)
(loop
	(if (> i n) (return 0))
	(format t "~d : ~d~%" i (Fibonacci i))
	(setq i (+ i 1))
)