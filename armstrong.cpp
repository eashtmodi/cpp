#include<iostream>
#include<math.h>
using namespace std;

bool armstrong(int x){
    int h=x;
    int sum=0;
    while(x>0){
        int lastDigit=x%10;
        sum=sum+pow(lastDigit,3);
        // cout<<sum<<endl;
        x=x/10;
    
    }
    if(sum==h){
        return true;
    }
    else{
        return false;
    }
}
int n;
int main(){
    cin>>n;

    bool a=armstrong(n);
    cout<<a;
    return 0;
}