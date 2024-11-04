#include<iostream>
using namespace std;

int recordBreakingDay(int arr[],int n){
    int temp=0;
    int finalAns=0;
    
    for(int i=0;i<n-1;i++){
        if(i==0){
            if (arr[i]>arr[i+1])
            {
                temp=arr[i];
            }
            

        }
        else{
            if (arr[i]>arr[i+1] && arr[i]>arr[i-1])
            {
                temp=arr[i];
            }

            
        }
        finalAns=max(temp,finalAns);
    }
    cout<<finalAns;
    return 0;
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

    recordBreakingDay(arr,n);

    return 0;
}