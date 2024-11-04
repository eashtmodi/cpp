#include<iostream>
using namespace std;


int maxArr(int arr[],int n){
    long int max=-199999999;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr[i]=a;
    }
    for(int i=0;i<n;i++){
        int b=arr[i];
        cout<<b<<" ";

    }
    cout<<endl;

    cout<<maxArr(arr,n);

    return 0;
}