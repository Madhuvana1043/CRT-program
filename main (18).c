/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
main()
{
      int i,n;
      printf("\n enter no. to stop:");
      scanf("%d",&n);
      for(i=1;i<=20;i++)
      
      {
          printf("\n %d",i);
          if(i==n)
              break;
      }
      printf("\n hello");
      
      }
      
