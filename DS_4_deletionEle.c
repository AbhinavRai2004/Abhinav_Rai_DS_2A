#include<stdio.h>

int main(){
    int a[50],n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the elements of array a\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int loc;
    printf("Enter the location of element want to delete\n");
    scanf("%d",&loc);
        for(int i=loc-1;i<n;i++){
        a[i] = a[i+1];
    }
    n--;
    printf("The elements of array after deletion will be\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}