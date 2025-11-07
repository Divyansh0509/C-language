#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the size of an array :-");
    scanf("%d",&n);

    int arr1[n];
     int arr2[n];
    int resultarr[n];
    printf("Enter the element of arr1 :-");
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }

    printf("Enter the element of arr2 :-");
    for(int i=0;i<n;i++){
        scanf("%d",&arr2[i]);
    }

   
    for(int i=0;i<n;i++){
       resultarr[i]=arr1[i]+arr2[i];
    }
    for(int i=0;i<n;i++){
     printf("%d  ",resultarr[i]);
    }

   
    return 0;
}