#include <iostream>

using namespace std;

int n;
int fibbonacci(int x){
    int num1=0;
    int num2=1;
    int nextTerm;
    for(int i =0;i<x;i++){
        cout<<num1<<endl;
        // cout<<num2<<endl;
        nextTerm=num1+num2;
        num1=num2;
        num2=nextTerm;

    }
    return 0;

}
int main(){
    cin>>n;
    fibbonacci(n);
    return 0;
}