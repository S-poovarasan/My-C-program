#include<stdio.h>
int main()
{
    int n,sum=0;
    
    do
    {
        scanf("%d",&n);
        if(n==-1)
        break;
        sum+=n;
    }
    while(1);
    printf("%d",sum);
    //fill the code
    return 0;
}
