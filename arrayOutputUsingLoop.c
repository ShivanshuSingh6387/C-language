#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
  int arr[5] = {4,3,1,7,9}; // Declaration and initialization of an array of size 5
  // printf("%d\n",arr[0]); // Printing array
  // printf("%d\n",arr[1]);
  // printf("%d\n",arr[2]);
  // printf("%d\n",arr[3]);
  // printf("%d\n",arr[4]);
  for (int i=0;i<=4;i++){
    printf("%d ",arr[i]);
  }
  return 0;
}