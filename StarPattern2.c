#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
   int i,j,m,n;
   printf("Enter no of rows :");
   scanf("%d",&m);
   printf("Enter no of columns :");
   scanf("%d",&n);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
return 0;
}