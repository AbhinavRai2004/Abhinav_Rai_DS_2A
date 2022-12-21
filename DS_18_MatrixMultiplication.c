#include<stdio.h>

int main()
{
    int a[50][50],b[50][50],c[50][50];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
       scanf("%d",&b[i][j]);
        }
    }
    printf("The Multiplication Of Matrix will be\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c[i][j] = 0;
           for(int k=0;k<n;k++){
            c[i][j] = c[i][j] + a[i][k]*b[k][j];
           }
           printf("%d",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}