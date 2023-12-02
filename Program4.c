#include<stdio.h>
#include<math.h>
float f(float x)
{
    return ((x*x*x*x)-x-10);
}
float df(float x)
{
    return ((4*x*x*x)-1);
}
int main()
{
    float xo,x1,x,aerror;
    int flag=0,itr=0;
    // do
    // {
    //   printf("enter the value of x0 and x1 :\n");
    //   scanf("%f   %f",&xo,&x1);
    //   if(f(xo)*f(x1)<0)
    //   {
    //     flag=1;
    //     printf("The root Lies between [%f - %f]\n",xo,x1);
    //   }
    //   else
    //   {
    //     printf("wrong Intervals, Try Again\n");
    //   }
    // }while(flag!=1);
    // x=(xo+x1)/2;
    scanf("%f",&x);
    printf("Enter allowed error\n");
    scanf("%f",&aerror);
    do
    {
        itr++;
        float a=f(x),b=df(x);
        if(b==0){
            printf("\nError : Method Fail");
        }
        x=x-(a/b);
        printf("%d Iteration, value of x is %f, value of f(%f) is %f\n",itr,x,x,f(x));
        if((fabs(a))<=aerror)
        {
            flag=0;
            printf("The root of the given equation is %f after %d iteration\n",x,itr);
        }
    }while(flag!=0);
    return 0;
}