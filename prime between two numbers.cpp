#include<iostream>
#include<math.h>
using namespace std;
int n1;
int n2;
bool primeRange(int i){
    for(int j=2;j<sqrt(i);j++){
        // cout<<j<<endl;
        if(i%j==0){
            return false;
            // break;
        } 
    }
    return true;
    
}
int main(){
    cin>>n1>>n2;
    for(int i=n1;i<=n2;i++){
        if(primeRange(i)){
            cout<<i<<endl;
        }
        
    }
    // cout<<a;
    return 0;
}