#include <stdio.h>

int main()
{
    int n1,n2,*p1,*p2,res;
    scanf("%d %d",&n1,&n2);
    p1=&n1;
    p2=&n2;
    res=*p1 + *p2;
    printf("Sum of pointer is:%d",res);
    return 0;
}
