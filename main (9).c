#include <stdio.h>

int main() {
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    int a = n%10;
    switch (a){
      case 0:
        printf("rokiv");
      break;
      case 1:
        printf("rik");
      break;
      case 2:
        printf("roku");
      break;
      case 3:
        printf("roku");
      break;
      case 4:
        printf("roku");
      break;
      case 5:
        printf("rokiv");
      break;
      case 6:
        printf("rokiv");
      break;
      case 7:
        printf("rokiv");
      break;
      case 8:
        printf("rokiv");
      break;
      case 9:
        printf("rokiv");
      break;
    }
    return 0;
}