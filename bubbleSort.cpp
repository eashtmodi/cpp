#include<iostream>
using namespace std;
int bubbleSort(int arr[],int n){
    int counter=1;
    while(counter<n){
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
int main(){
    int n,x;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>x;
        arr[i]=x;
    }
    bubbleSort(arr,n);
    return 0;
}