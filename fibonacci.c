//fibonacci sequence

#include <stdio.h>

int main()
{
    int n,a=0,b=1,c,i;
    printf("Enter the number of terms you want: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}