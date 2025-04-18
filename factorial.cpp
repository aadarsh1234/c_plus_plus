#include <stdio.h>

int main()
{
    int n;
    printf("Hello World");
    scanf("%d",&n);
   int  fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
        printf("factorial of this %d\n",fact);

    return 0;
}