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
    printf("Enter the number of data points: ");
    scanf("%d", &n);

    float a[n + 1][n + 2];

    printf("Enter the data points (x, y):\n");
    for(int i = 0; i < n; i++){
        scanf("%f %f", &a[i][0], &a[i][1]);
    }
    for(int i = 2; i <= n + 1; i++){
        for(int j = i-1; j<=n ; j++){
            a[j][i] = a[j][i - 1] - a[j-1][i - 1];
        }
        
    }
    int n1=1;
    printf("\nBackward Difference Table:\n");
    for(int i = 0; i <n; i++){
        for(int j = 0; j <= n1; j++){
            printf("%f ", a[i][j]);
        }
        n1++;
        printf("\n");
    }

    float h = a[n-1][0] - a[n-2][0];
    float s = a[n-1][0];
    float x, u;

    printf("\nEnter the value of x for interpolation: ");
    scanf("%f", &x);

    u = (x - s) / h;

    printf("h = %f, s = %f, x = %f, u = %f\n", h, s, x, u);

    float ans = a[n-1][1];
    for(int i = 2; i <= n; i++){
        float f = 1;
        for(int j = 0; j < i - 1; j++){
            f *= (u + j);
        }
        //printf("ans=%f\n",ans);
        ans += ((f * a[n-1][i]) / fact(i - 1));
    }

    printf("Value of y at x = %f is %f\n", x, ans);
    return 0;
}
// 1891 46
// 1901 66
// 1911 81
// 1921 93
// 1931 101
