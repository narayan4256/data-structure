#include <stdio.h>

struct rectangle
{
    int length,breadth;
};

void changeLength(struct rectangle *p,int l)
{
    (*p).length=l;
}

void main()
{
    struct rectangle r={10,5};
     changeLength(&r,20);
    printf("length=%d",r.length);
    
    
}
