#include<stdio.h>
#include<conio.h>
int main(){
   int arr[] = {8, 3, 6, 2, 5, 9, 1, 4}; // Example array
   int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array
   for(int i = 0; i < n; i++){
      printf("%d ", arr[i]); // Print each element of the array
   }
   printf("\n");
   
    for(int i=0;i<n;i++){
        if(i%2!=0)
        arr[i]=arr[i]*2; // Double the value of elements at odd indices
        else
        arr[i]=arr[i]+10; // Add 10 to the value of elements at even indices
    }
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]); // Print each element of the array
    }
return 0;
}