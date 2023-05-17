#include <stdio.h>

int main() {
    int n1, n2;
    printf("Enter n1:");
    scanf("%d", &n1);
    printf("Enter n2:");
    scanf("%d", &n2);
    int a1 = n1/100;
    int b1 = (n1/10)%10;
    int c1 = n1%10;
    int a2 = n2/100;
    int b2 = (n2/10)%10;
    int c2 = n2%10;
    int sum1 = a1+b1+c1;
    int sum2 = a2+b2+c2;
    if(sum1>sum2){
        printf("First is greater");
    }else if(sum1<sum2){
        printf("First is lower");
    }else{
        printf("First equals second");
    }
    return 0;
}