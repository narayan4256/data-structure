/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>

struct Rectangle
{
    int length,breadth;
};

int Area(struct Rectangle r1)
{
    return r1.length*r1.breadth;
   
}

void main()
{
    struct Rectangle r={10,5};
    printf("%d",Area(r));
}

