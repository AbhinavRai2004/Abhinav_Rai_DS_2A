#include<iostream>
using namespace std;

int partion(int a[],int lb,int ub){
    int pivot = a[lb];
    int start = lb;
    int end = ub;
    while(start<end){
        while(start<=pivot){
            start++;
        }
        while(end>pivot){
            end--;
        }
        swap(a[start],a[end]);
    }
    swap(pivot,a[end]);
    return end;
}
int QuickSort(int a[],int lb,int ub,int n){
    if(lb<ub){
      int loc = partion(a,&lb,&ub);
      QuickSort(a,lb,loc-1,n);
      QuickSort(a,loc+1,ub,n);
    }
return a[n];
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    QuickSort(a,0,n-1,n);
    for(int i=0;i<n;i++){
       cout<<a[i]<<" ";
    }
    return 0;
}