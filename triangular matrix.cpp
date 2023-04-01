#include<iostream>
using namespace std;
int main(){
    int n,flagl=0,flagu=0,c ;
    printf("enter the order of matrix: ");
    scanf("%d",&n);
    int ar[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("enter element of %d row %d column:\n",i,j);
            scanf("%d",&ar[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        printf("| ");
        for(int j=0;j<n;j++){
            printf("%d ",ar[i][j]);

        }
        printf("|\n");
    }
    if(ar[0][0]!=0 && ar[n-1][n-1]!=0){ 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>j){
                if(ar[i][j]==0)
                flagl++;
            }
            else if(j>i){
                if(ar[i][j]==0)
                flagu++;
            }
        }
    }
    if(flagu>flagl)
        printf("it is lower triangular matrix.");
    else if(flagl>flagu)
        printf("it is upper triangular matrix.");
    else
        printf("it is a triangular matrix.");}
    
    else if(ar[0][0]==0 || ar[n-1][n-1]!=0){
    printf("this is of non principle axis type:\n") ;
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i+j)<(n-1)){
                if (ar[i][j]==0)
                flagu++;
            }
            else if((i+j)>(n-1)){
                if (ar[i][j]==0)
                flagl++;
            }

        }
    }
    if(flagu>flagl)
    printf("it is a lower triangular matrix");
    else if(flagu<flagl)
    printf("it is a lower triangular matrix");
    else 
    printf("it is a triangular matrix");

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ar[i][j]=ar[j][i];
        }
    }
    for(int i=0;i<n;i++){
         printf("the new matrix is;");
        printf("| ");
        for(int j=0;j<n;j++){
            printf("%d ",ar[i][j]);

        }
        printf("|\n");

    return 0;
}
}