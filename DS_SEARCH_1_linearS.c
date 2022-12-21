#include<stdio.h>

int main(){
    int a[50];
    int n,m;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the elements of array a\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element want to search\n");
    scanf("%d",&m);
    int count = 0;
    for(int i=0;i<n;i++){
        if(a[i]==m)
        count++;
        break;
    }
    if(count >0)
    printf("The element is found");

    else
    printf("The element is not found");
}