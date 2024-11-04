#include<iostream>
using namespace std;

int linearSearch(int arrr[],int m,int x){
    for(int i=0;i<m;i++){
        if(arrr[i]==x){
            return i;
            break;
        }
    
    }
    return -1;
}



int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
    cout<<arr[i]<<" ";
}
int b;
cin>>b;
cout<<linearSearch(arr,sizeof(arr)/4,b);
return 0;
}