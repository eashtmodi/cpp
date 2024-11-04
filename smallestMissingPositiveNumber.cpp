#include<iostream>
using namespace std;
int smallestMissingNum(int arr[],int n){
    const int N = 1e6+2;
    int idx[N];
    for(int i=0;i<1e6+2;i++){
        idx[i]=0;
    }
    for(int i =0; i<n;i++){
        if(arr[i]>0){
            idx[arr[i]]=1;
        }
        
    }
    // for(int i=0;i<1e6+2;i++){
    //     cout<<idx[i];
    // }
    for(int i =1; i<N;i++){
        
        if(idx[i]!=1 ){
            cout<<i;
            break;
        }

    

    }

    return 0;
}
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    smallestMissingNum(arr,n);
}