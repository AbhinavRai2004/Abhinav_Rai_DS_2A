#include<iostream>
using namespace std;

void mergeTwoSortedArray(int a[],int b[],int n,int m){
     int idx1 = 0;
     int idx2 = 0;
     int k = 0;
     int *res = new int[n+m];
     while(idx1 < n && idx2 < m){
        if(a[idx1] < b[idx2]){
            res[k] = a[idx1];
            k++;
            idx1++;
        }
        else{
            res[k] = b[idx2];
            k++;
            idx2++;
        }
     }

     while(idx1 < n){
        res[k] = a[idx1];
        idx1++;
        k++;
     }
     while(idx2 < m){
        res[k] = b[idx2];
        idx2++;
        k++;
     }
     for(int i=0;i<k;i++){
          cout<<res[i]<<" ";
    }
}
int main()
{
    int a[50],b[50];
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    mergeTwoSortedArray(a,b,n,m);
    return 0;
}