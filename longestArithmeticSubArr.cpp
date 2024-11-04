#include<iostream>
using namespace std;

int longestArthSArr(int arr[],int n){
    int currAns=2;
    int pd=0;
    int count=0;
    int ans=0;
    
    for(int i=0;i<n-1;i++){
        int diff=arr[i+1]-arr[i];
        // cout<<pd<<" ";
        if(diff==pd){
            currAns+=1;
        }
        if(diff!=pd){
            currAns=2;
        }
        ans=max(ans,currAns);

        pd=diff;
    }
    
    cout<<ans;
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

    longestArthSArr(arr,n);

    return 0;
}