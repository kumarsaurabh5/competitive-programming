#include<stdio.h>
#include<string.h>

int main(){
    int inp;
    scanf("%i",&inp);
    int arr[inp];
    memset(arr, 0, inp);
    for(int i=0;i<inp;i++){
        int k=0;
        int arrtmp[i+1];
        for(int j=0;j<10-i;j++) printf(" ");

        printf("11 ");
        arrtmp[k++]=11;
        int l=0;
        for(int j=0;j<(i-1);j++)
        {
            int tmp = arr[l] + arr[++l];
            printf("%i ",tmp);
            arrtmp[k++]=tmp;
        }
        if(i>0)
        {
            arrtmp[k]=11;
            printf("11");
        }
        for(int j=0;j<i+1;j++)
            arr[j]=arrtmp[j];
        printf("\n");
    }
}