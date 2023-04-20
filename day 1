
#include <stdio.h>
void func(int n)
{
    if(n%2==1)
    printf("Weird");
    else
    {
        if(n>=2 && n<=5)
            printf("Not Weird");
        else if(n>=6 && n<=20)
            printf("Weird");
        else
            printf("Not Weird");
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    func(a);
    return 0;
}
#code 2
#include <stdio.h>
int sort(int arr[],int m)
{
    int k=0;
    for(int i=0;i<m-1;i++)
    {
        for(int j=i+1;j<m;j++)
        {
            if(arr[j]<arr[i])
            {
                k=arr[i];
                arr[i]=arr[j];
                arr[j]=k;
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        printf("%d\n",arr[i]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
}
#code 3
#include <stdio.h>
int main()
{
    int n;int k=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] == a[j])
                printf("%d\n", a[j]);
        }
    }
    for(int i=0;i<n;i++){
   for(int j = i+1; j < n; j++){
      if(a[i] == a[j]){
         for(k = j; k <n; k++){
            a[k] = a[k+1];
         }
         j--;
         n--;
      }
   }
}
for(int i=0;i<n;i++){
   printf("%d ",a[i]);
}
}

//code 4
#include <stdio.h>
int main()
{
    int n;int k=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = 0; i < n; i++) {
            if(a[i]>k)
                k=a[i];
        }
for(int i=0;i<n;i++){
   printf("%d\n",a[i]);
}
printf("\n%d",k);
}
#code 5
#include<stdio.h>
#include<stdlib.h>
int main(){
int n;
scanf("%d",&n);
int a[n][n],b[n][n],mul[n][n];
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
scanf("%d",&b[i][j]);
}
}
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
mul[i][j]=0;
for(int k=0;k<n;k++)
{
mul[i][j]+=a[i][k]*b[k][j];
}
}
}

for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
printf("%d\t",mul[i][j]);
}
printf("\n");
}
return 0;
}
