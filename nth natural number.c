#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter nth natural number:");
    scanf("%d",&n);
    for(i= 1;i<=n;i++)
    {
        printf("%d ",i);
    }
    getch();
}
