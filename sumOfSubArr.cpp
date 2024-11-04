#include<iostream>
using namespace std;

int sum=0;


int sumOfSubArr(int arr[],int n){
    for(int i =0;i<n-1;i++){
        for(int j=i;j<n-1;j++){
            sum=sum+arr[j];
        }
    }
    cout<< sum;
    return 0;
}


int main (){
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

    sumOfSubArr(arr,n);

    return 0;


}