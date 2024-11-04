#include <iostream>
using namespace std;
int c;
int reverseStr(int x){
    while(x>0){
    int a = x%10;
    c=c*10+a;
    x=x/10;
    }
    return c;
}

int n;
int main() {
    cin>>n;
    int r=reverseStr(n);
    cout << r;
    return 0;
}