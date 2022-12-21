#include<stdio.h>

void main(){
    int arr1[20],arr2[20],arr3[40],arr4[40],m,n;
    printf("How many element in A\n");
    scanf("%d",&m);
    printf("How many element in B\n");
    scanf("%d",&n);
    int k = 0;
    int p = 0;
    int i,j;
    printf("Enter the element of A\n");
    for(i =0;i<m;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter the element of b\n");
    for(i =0;i<n;i++){
        scanf("%d",&arr2[i]);
    }
    printf("Symmetric Difference is\n");
    for(i = 0;i<m;i++){
        int found = 0;
        for(j = 0;j<n;j++){
            if(arr1[i] == arr2[j]){
                found++;
            }
        }
        if(found == 0){
            arr3[k] = arr1[i];
            k++;
        }
    }
    for(i=0;i<k;i++){
        printf("%d ",arr3[i]);
    }
    for(j=0;j<n;j++){
        int c=0;
        for(i = 0;i<m;i++){
            if(arr2[j] == arr1[i]){
                c++;
            }
        }
        if(c == 0){
            arr4[p] = arr2[j];
            p++;
        }
    }
    for(i =0;i<p;i++){
        printf("%d ",arr4[i]);
    }
}