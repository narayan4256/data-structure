/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
int *fun(int n)
{
  int *p;
  
  p=(int *)malloc(n*sizeof(int));
  
  for(int i=0;i<n;i++)
  {
    p[i]=i+1;
  }
  return p;
}
void main()
{
  int size=10,*A;
  
  A=fun(size);
  
  for(int i=0;i<size;i++)
  printf("%d",A[i]);
}


