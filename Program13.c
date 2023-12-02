#include<stdio.h>
#include<math.h>
float f(float i){
    return (1/(i*i*i+10));
}
int main(){
    int n;
    printf("Enter number of intervals:");
    scanf("%d",&n);
    float a,b,h,ans=0;
    printf("\nEnter range:");
    scanf("%f %f",&a,&b);
    h=(b-a)/n;
    ans=f(a)+f(b);
    for(float i=a+h;i<b;i+=h){
        //printf("Result if %f",ans);
        ans+=(2*f(i));
    }
    ans=(h/2)*ans;
    printf("Result if %f",ans);
    return 0;
}