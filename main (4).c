#include <stdio.h>
#include <math.h>
int main() {
    int b, c;
printf("Enter b:");
scanf("%d", &b);
printf("Enter c:");
scanf("%d", &c);
if(b==1){
    int res = 4*b-9*c;
    printf("Result is %d", res);
}else if(b==2) {
      if(2-b*c>=0) {
            float         res         =         sqrt (( float )) (    2    -    b    *    c ); -
            printf ( "Результат: %f" , res );
        }else{
            printf("Don't exist(because 2-b*c<0)");
        }
    }else if(b==3) {
        if(c!=0) {
            float res = (b*1.0)/(c*c*1.0);
            printf("Result is %f", res);
        }else {
            printf("Don't exist(because c=0)");
        }
    }else{
            printf("Don't exist(because b is not in {1; 2; 3})");
    }
    return 0;
}
