(setq i 0)
(format t "n = ")
(setq n (read))
(if (< n 1) (setq n 100))
(format t "~%")
(loop
	(if (>= i n) (return 0))
	(cond	((= (mod (+ i 1) 15) 0) (format t "Fizz Buzz~%"))
		((= (mod (+ i 1)  5) 0) (format t "Buzz~%"))
		((= (mod (+ i 1)  3) 0) (format t "Fizz~%"))
		(t (format t "~d~%" (+ i 1)))
	)
	(setq i (+ i 1))
)