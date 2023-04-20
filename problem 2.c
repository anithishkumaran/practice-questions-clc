//transpose of a matrix
#include <stdio.h>

int main() {
    int x[3][3];
    int y[3][3];
    int v;
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            printf("val");
            scanf("%d",&x[i][j]);
        }
    }
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
            y[i][j]=0;
        }
    }
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            int b;
            b=x[j][i];
            y[i][j]=b;
        }
    }
    printf("transpose\n");
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            printf("%d ",y[i][j]);
            if(j==2){
                printf("\n");
            }
        }
    }
    
    return 0;
}
