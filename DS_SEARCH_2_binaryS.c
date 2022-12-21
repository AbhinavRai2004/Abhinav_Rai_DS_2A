#include<stdio.h>

int main(){
    int a[50],n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the elements of an array a\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int num;
    printf("Enter the elment want to search\n");
    scanf("%d",&num);

    int lw=0;
    int up=n-1;
    int count = 0;
    int mid = (lw+up)/2;
    while(lw<=up){
      
      if(num == a[mid]){
        count++;
        break;
        }

      if(num>a[mid])
        lw = mid+1;

      else
       up = mid-1;

       mid = (lw+up)/2;
   }
    if(count==0)
    printf("Element is not founded");

    else
    printf("Element is founded");
}