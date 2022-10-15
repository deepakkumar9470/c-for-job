#include<iostream>

using namespace std;


int main(){
    int a = 1;
    int b = 2;
     
    int k = ++a;
    int j = a++ + ++a + a++;

    cout<<a<<" "<<b<<" "<<k<<" "<<j<<endl;

    return 0;
}