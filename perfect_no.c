#include <stdio.h>
int main() {
    int sum=0,n,i;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    printf("perfect number");
    else
    printf("not perfect number");
    return 0;
}
//time complexity = o(n-1)
