/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

struct Rectangle
{
    int length,breadth;
};

int Area(struct Rectangle &r1)
{
    r1.length++;
    return r1.length*r1.breadth;
   
}

int main()
{
    struct Rectangle r={11,5};
    
    cout<<Area(r);
    return 0;
}
