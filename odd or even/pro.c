#include <stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    if (n%2==0){
        printf("%d is a Even Number",n);
    }
    else{
        printf("%d is a Odd Number", n);
    }
    return 0;
}