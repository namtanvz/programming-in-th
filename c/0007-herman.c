#include<stdio.h>
#include<math.h>
#define PI 3.14159265358979323846
const double square = 2.0;
int main(){
    
    double a=1;
    scanf("%lf",&a);
   
    double result1, result2;
    
    result1 = PI*pow(a, square);
    result2 = 2*pow(a, square);
    
    printf("%.6lf\n%.6lf",result1,result2);
    return 0;
}
