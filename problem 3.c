// multiplication of matrix
#include <stdio.h>
int main() {
    int x[3][3];
    int y[3][3];
    int v;
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            printf("val matrix1 ");
            scanf("%d",&x[i][j]);
        }
    }
    printf("matrix1 \n");
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            printf("%d ",x[i][j]);
            if(j==2){
                printf("\n");
            }
        }
    }
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            printf("val matrix2 ");
            scanf("%d",&y[i][j]);
        }
    }
    printf("matrix 2\n");
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            printf("%d ",y[i][j]);
            if(j==2){
                printf("\n");
            }
        }
    }
    int h[3][3];
    int r[3][3];
     for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            r[i][j]=0;
            }
        }
     for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            for(int k=0;k<3;++k){
                r[i][j]+=x[i][k]*y[k][j];
                
            }
            }
        }
        printf("resultant multiplied matrix\n");
         for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            printf("%d ",r[i][j]);
            if(j==2){
                printf("\n");
            }
            }
        }
    
    return 0;
}
