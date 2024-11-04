#include<iostream>
using namespace std;
int factorial(int x){
    int fact=1;
    for(int i=x;i>0;i--){
        fact=fact*i;
    }
    return fact;
}
int ncr(int n,int r){
    int e= factorial(n)/(factorial(r)*factorial((n-r)));
    return(e);
}
int n;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
    
}