#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr,n,min=100,index;
    scanf("%d",&n);
    arr=(int*)malloc(n*(sizeof(int)));
    for(int i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    
    for(int i=0;i<n;i++)
    {
        if (min>*(arr+i))
        {
            min=*(arr+i);
            index=i;
        }
    }
     printf("the smallest is %d is at %d\n",min,index+1);
    
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(arr+i));
    }

    return 0;
}

#include <stdio.h>

float power(float x, int n) {
    if (n == 0) {
        return 1.0;
    } else if (n == 1) {
        return x;
    } else if (n < 0) {
        return 1.0 / power(x, -n);
    } else if (n % 2 == 0) {
        float y = power(x, n/2);
        return y * y;
    } else {
        return x * power(x, n-1);
    }
}

int main() {
    float x, y;
    int n;
    printf("Enter value for x: ");
    scanf("%f", &x);
    printf("Enter value for n: ");
    scanf("%d", &n);
    y = power(x, n);
    printf("%f^%d = %f\n", x, n, y);

    return 0;
}
