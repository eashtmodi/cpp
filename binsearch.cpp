#include<iostream>
#include <cmath>
using namespace std;

int binsearch(int arr[],int m,int x){
    int s=0;
    int e=m;
    int key=x;
    int mid=(s+e)/2;
    while(s<=e){
    
    if(arr[mid]==key){
        return mid;
        break;
    }
    else if (arr[mid]<key)
    {
        mid+=1;
    }
    else if (arr[mid]>key)
    {
        mid-=1;
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
cout<<endl;
cout<<binsearch(arr,sizeof(arr)/4,b);
return 0;
}