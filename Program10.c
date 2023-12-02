#include<stdio.h>
#include<math.h>
float fact(int i){
    if(i==0 || i==1){
        return 1.0;
    }
    return i*fact(i-1);
}
int main(){
    int n;
    printf("enter no. of x:");
    scanf("%d",&n);
    float a[n+1][n+2];
    for(int i=0;i<n;i++){
        scanf("%f",&a[i][0]);
        scanf("%f",&a[i][1]);
    }
    int n1=n;
    for(int i=2;i<=n+1;i++){
        for(int j=1;j<=n1;j++){
            a[j-1][i]=a[j][i-1]-a[j-1][i-1];
        }
        n1--;
    }
    printf("\nforward table:\n");
    n1=n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=n1;j++){
            printf("%f ",a[i][j]);
        }
        n1--;
        printf("\n");
    }
    float h=a[1][0]-a[0][0];
    float s=a[0][0];
    float x;
    float u;
    printf("enter value of x:\n");
    scanf("%f",&x);
    u=(x-s)/h;
    printf("h=%f a=%f x=%f u=%f\n",h,s,x,u);
    float ans=a[0][1];
    for(int i=2;i<n+1;i++){
        float f=1;
        for(int j=0;j<i-1;j++){
            f*=(u-j);
        }
        ans+=((f*a[0][i])/fact(i-1));
        //printf("ans=%f\n",ans);
    }
    printf("value of y at x=%f is %f",x,ans);
    return 0;
}

// 2 8
// 4 64
// 6 216
// 8 512
// 10 1000
// 12 1728