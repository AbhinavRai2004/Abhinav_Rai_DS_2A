#include<stdio.h>

int main()
{
    int a[50];
    int n,m,loc;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the element want to insert\n");
    scanf("%d",&m);
    printf("Enter the location at which you want to enter element\n");
    scanf("%d",&loc);
    printf("Enter the elements of array\n");
    for(int i=0;i<n;i++){
       scanf("%d",&a[i]);
    }
    for(int i=n-1;i>=loc-1;i--){
        a[i+1] = a[i];
    }
    a[loc-1] = m;
    n++;
  for(int i=0;i<n;i++){
    printf("%d ",a[i]);
  }
    return 0;
}