#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
   int n;
   printf("Enter the side of square  :");
   scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
return 0;
}