      program Fibonacci
      implicit none
      integer i,n,F
      write (*, '(a)', advance='no') 'n = '
      read(*,*) n
      if(n<0) then
      	n=0
      end if
      
      write (*,*)
      
      do 100 i=0,n,1
      	write (*,'(i3,1x,a,1x,i0)') i,':',F(i)
  100 continue
      
      write (*,*)
      
      stop
      end program
      
      recursive function F(x) result(y)
      implicit none
      integer x,y
      if ( x .lt. 2 ) then
      	y = x
      else
      	y = F(x-1) + F(x-2)
      end if
      end function