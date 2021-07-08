      program Prime
      implicit none
      integer i,n,Func,f
  100 write (*, '(a)', advance='no') 'number : '
      read(*,*) n
      if(n<0) then
      	n=0
      end if
      
      f = Func(n)
      if (f .eq. 0) then
          write (*,*) 'Composite number'
      else if (f . eq. 1) then
          write (*,*) 'Prime number'
      else
          write (*,*) 'Error'
      end if
      write (*,*)
      write (*, '(a)', advance='no') 'Continue? (Yes : 1 / No : 0) : '
      read(*,*) i
      
      write (*,*)
      
      if (i .ne. 0) then
          goto 100
      end if
      
      stop
      end program
      
      function Func(x)
      implicit none
      integer x,i,Func
      if (x .lt. 2) then
          Func = -1
      else if (x .eq. 2) then
          Func = 1
      else if (mod(x,2) .eq. 0) then
          Func = 0
      else
          Func = 1
          i = 3
          do 200 i=3,int(sqrt(real(x))),2
              if (mod(x,i) .eq. 0) then
                  Func = 0
                  goto 200
              end if
  200     continue
      end if
      end function