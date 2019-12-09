/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
main()
{
      int n;
      printf("\n enter a number:");
      scanf("%d",&n);
      if(n%2==0)
            goto even;
      else
            goto odd;
      even:printf("\n even");exit(0);
      odd:printf("\n odd");
}         
    