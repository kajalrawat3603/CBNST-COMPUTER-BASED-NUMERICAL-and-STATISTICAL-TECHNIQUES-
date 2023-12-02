#include <stdio.h>
#include <math.h>
#define f(x) (x*x*x-2*x*x-4)
#define g(x) (4/(x*x)+2)
#define h(x) (-8/(x*x*x))

int main()
{
    int iter = 1, flag=0;
    float x0, x1, aerror;
    do
    {
        printf("enter the value of xo :\n");
        scanf("%f",&x0);
        if(fabs(h(x0))<1)
        {
           flag=1;
        }
        else
        {
            printf("Change the value of function");
        }
    } while (flag != 1);
    printf("Enter Allowed error: ");
    scanf("%f", &aerror);
    do
    {
        x1 = g(x0);
        printf("%d Iteration, value of x is %f, value of f(%f) is %f\n", iter, x1, x1, g(x1));
        iter = iter + 1;
        x0 = x1;

    } while (fabs(f(x1)) > aerror);

    printf("\nRoot is %f", x1);
    return (0);
}