#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
   int arr[] = {3,4,3,2};
   int n = sizeof(arr)/sizeof(arr[0]);
   int Product = 1;
   for (int i=0;i<n;i++){
   Product = Product * arr[i];
   }
   printf("%d ",Product);
return 0;
}