#include<stdio.h>
int fact (int n){
    if(n==0)
    return 1;

    return n*fact(n-1);
}
int main(){
    int a;
    printf("Enter a value :-");
    scanf("%d",&a);
   printf("factorial :-%d",fact(a));
    return 0;
}