#include<iostream>
using namespace std;

int insertionSort(int arr[],int n){
    for(int i =1; i<n;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    for(int i=0;i<n;i++){
        int a=arr[i];
        cout<<a<<" ";
    }
    return 0;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i]=x;
    }
    for(int i=0;i<n;i++){
        int a=arr[i];
        cout<<a<<" ";

        
    }
    cout<<endl;

    insertionSort(arr,n);
    

   return 0; 
}