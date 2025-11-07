#include<stdio.h>
int sumOFarr(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++)
        sum+=arr[i];
    
    return sum;
}
int main (){
    int n;
    printf("Enter the size of an array :-");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element of an array :-");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The sum of array is :- %d",sumOFarr(arr,n));
    return 0;
}