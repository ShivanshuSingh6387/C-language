#include<stdio.h>
#include<conio.h>
#include<string.h>
int fact(int n){
    int f = 1;
    for(int i=1;i<=n;i++){
        f = f * i;
    }
    return f;
}
int ncr(int n, int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int main(){
    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);
    int r;
    printf("Enter the value of r :");
    scanf("%d",&r);
    int result = ncr(n,r);
    printf("The value of %dC%d is : %d",n,r,result  );
   
return 0;
}