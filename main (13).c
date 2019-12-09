/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
main()
{
      int i,n,sum=0;
      printf("\n enter a no:");
      scanf("%d",&n);
      printf("\n factors of %d are ",n);
      for(i=1;i<n;i++)
      {
            if(n%i==0)
            sum=sum+i;
      }
      if(sum==n)
   
            printf("\n perfect no");
      else
            printf("\n not a perfect no");
}
