#include<stdio.h>
#include<math.h>
float f(float x)
{
    return (2*x*x+(3*x)-5);
}
int main(){
    double x,y,z,u;
    scanf("%lf %lf",&x,&z);
    y=f(x);
    u=f(z);
    double a=fabs(u-y);
    double r=a/y;
    double p=r*100;
    printf("Actual value: %lf\n",x);
    printf("Calaculated value: %lf\n",y);
    //printf("True value: %lf\n",z);
    printf("True Calaculated value: %lf\n",u);
    printf("Absolute Error: %lf\n",a);
    printf("Relative Error: %lf\n",r);
    printf("Percentage Error: %lf\n",p);
    return 0;
}