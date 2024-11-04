#include<iostream>
using namespace std;
#include<math.h>
int factorial(int x){
    int fact=1;
    for(int i=x;i>1;i--){
        fact*=i;
    }
    return fact;
}
int n;
int main(){
    cin>>n;
    int a= factorial(n);
    cout<<a;
    return 0;
}