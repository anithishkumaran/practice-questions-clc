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
// fib
#include<stdio.h>    
int main()    
{    
 int n1=0,n2=1,n3,i,number;    
 printf("Enter the number of elements:");    
 scanf("%d",&number);    
 printf("\n%d %d",n1,n2);//printing 0 and 1    
 for(i=2;i<number;++i)//loop starts from 2 because 0 and 1 are already printed    
 {    
  n3=n1+n2;    
  printf(" %d",n3);    
  n1=n2;    
  n2=n3;    
 }  
  return 0;  
 }    
