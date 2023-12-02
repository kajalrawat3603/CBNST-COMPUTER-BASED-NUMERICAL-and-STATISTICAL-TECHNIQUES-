#include<stdio.h>
#include<math.h>
float f(float x)
{
    return ((x*x*x)-(7*x*x)-(14*x)-6);
}
int main()
{
    float xo,x1,x,aerror;
    int flag=0,itr=0;
    do
    {
      printf("enter the value of x1 and x2 :\n");
      scanf("%f   %f",&xo,&x1);
      if(f(xo)*f(x1)<0)
      {
        flag=1;
        printf("The root Lies between [%f - %f]\n",xo,x1);
      }
      else
      {
        printf("wrong Intervals, Try Again\n");
      }
    }while(flag!=1);
    printf("Enter allowed error\n");
    scanf("%f",&aerror);
    do
    {
        itr++;
        x=(xo+x1)/2;
        printf("%d Iteration, value of xo %f =%f and x1 %f =%f, x is %f, value of f(%f) is %f\n",itr,xo,f(xo),x1,f(x1),x,x,f(x));
        if((fabs(f(x)))<=aerror)
        {
            flag=0;
            printf("The root of the given equation is %f after %d iteration\n",x,itr);
        }
        else if(f(x)*f(xo)<0)
        {
           x1=x;
        }
        else
        {
            xo=x;
        }
    }while(flag!=0);
    return 0;
}