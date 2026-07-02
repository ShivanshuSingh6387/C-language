#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
   int arr[5]={8,3,6,2,5};
   int max=arr[0]; // Initialize max with the first element of the array
   for(int i=1;i<5;i++){
      if(arr[i]>max){ // Compare each element with max
         max=arr[i]; // Update max if current element is greater
      }
   }
   printf("Maximum element in the array is: %d",max);
return 0;
}