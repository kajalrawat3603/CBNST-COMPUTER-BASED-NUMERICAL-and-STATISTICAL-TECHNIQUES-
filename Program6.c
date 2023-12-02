#include<stdio.h>
#include<math.h>
float f(float x)
{
    return (x*x*x-(5*x)+1);
}
int main()
{
    float xo,x1,x,aerror;
    int flag=0,itr=0,oyee=4;
    do
    {
      printf("enter the value of x0 and x1 :\n");
      scanf("%f   %f",&xo,&x1);
      if(f(xo)==f(x1)){
        printf("This method fails\n");
      }
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
        x=x1-((x1-xo)/(f(x1)-f(xo)))*f(x1);
        
        printf("%d Iteration, value of x is %f, value of f(%f) is %f\n",itr,x,x,f(x));
        if((fabs(f(x)))<=aerror)
        {
            printf("The root of the given equation is %f after %d iteration\n",x,itr);
            flag=0;
        }
        xo=x1;
        x1=x;    
    }while(flag);
    return 0;
}