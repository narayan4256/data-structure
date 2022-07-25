
#include <stdio.h>

int sum(int a,int b)
{
    int c=a+b;
    
    return c;
}
void main()
{
    int x,y,add;
    printf("enter 2 numbers\n");
    scanf("%d%d",&x,&y);
    
    add=sum(x,y);
    
    printf("sum=%d",add);
    
}