#include<stdio.h>

int main()
{
    int a[50][50],b[50][50];
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the elements of matrix\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
   
   printf("The Transpose Of Matrix will be\n");
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        b[i][j] = a[j][i];
        printf("%d ",b[i][j]);
        }
        printf("\n");
    }
       
    return 0;
}