#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
   int arr[] = {3,4,3,2};
   int n = sizeof(arr)/sizeof(arr[0]);
   int sum = 0;
   for (int i=0;i<n;i++){
   sum = sum + arr[i];
   }
   printf("%d ",sum);
return 0;
}