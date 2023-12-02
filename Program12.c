#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter number of points=\n");
    scanf("%d",&n);
    float x[n],y[n],u,l,sum=0,X;
    for(int i=0;i<n;i++){
        scanf("%f %f",&x[i],&y[i]);
    }
    printf("Enter value of X:\n");
    scanf("%f",&X);
    for(int i=0;i<n;i++){
        u=1;
        for(int j=0;j<n;j++){
            if(i==j) 
                continue;
            else{
            u*=((X-x[j])/(x[i]-x[j]));
            }
        } 
        //printf("%f\n",sum);
        sum=sum+(u*y[i]);
    }
    printf("Value of y for x=%f is %f",X,sum);
    return 0;
}