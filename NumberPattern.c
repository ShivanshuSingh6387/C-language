#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
   int m,n;
   printf("Enter no of rows :");
   scanf("%d",&m);
   printf("Enter no of columns :");
    scanf("%d",&n);
     for(int i=1;i<=m;i++)
     {
          for(int j=1;j<=n;j++)
          {
                printf("%c ",j+64);
          }
          printf("\n");
     }
return 0;
}