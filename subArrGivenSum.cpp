#include<iostream>
using namespace std;
int subArrGivenSum(int arr[],int n,int sum){
    int sp=0,en=0,i=0,j=0,currSum=0;
    while(currSum<sum && j<n){
        currSum=currSum+arr[j];
        en=j;
        j++;
        cout<<currSum<<endl;
        if(currSum==sum){
            // cout<<sp<<" "<<en;
            break;
    }
    }
    
    while(j<n){
        while(currSum>sum){
            currSum=currSum-arr[i];
            sp=i;
            i++;

        
    }
    if (sum==currSum)
    {
       cout<<sp+1<<" "<<en+1;
       break;
    }
    

    }
    return 0;
}
int main(){
    int n; cin>>n;
    int sum; cin>>sum;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    subArrGivenSum(arr,n,sum);
}