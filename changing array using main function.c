/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void fun(int X[],int n)
{
    X[0]=1;
}
int main()
{
  int A[]={2,3,4};
  int n=3;
  fun(A,n);
  for(int i=0;i<3;i++)
  printf("%d",A[i]);
  
}


