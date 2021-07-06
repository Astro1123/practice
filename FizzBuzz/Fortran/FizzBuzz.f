      program FizzBuzz
      implicit none
      integer i,n
      write (*, '(a)', advance='no') 'n = '
      read(*,*) n
      if(n<0) then
      	n=100
      end if
      
      write (*,*)
      
      do 100 i=1,n,1
      	if ( mod(i, 15) .eq. 0 ) then
      		write (*,*) 'Fizz Buzz'
      	else if ( mod(i, 5) .eq. 0 ) then
      		write (*,*) 'Buzz'
      	else if ( mod(i, 3) .eq. 0 ) then
      		write (*,*) 'Fizz'
      	else
      		write (*,'(1x, i0)') i
      	end if
  100 continue
      
      write (*,*)
      
      stop
      end program