#include<bits/stdc++.h>
using namespace std;

int main(){

    
    int a=10;
    int  b;
    int *p=&a;
    b=*p;

    cout<<"The address of a is : "<<&a<<endl;
    cout<<"The address of b is : "<<&b<<endl;
    cout<<"The address of p is : "<<p<<endl;
    cout<<"Value of a is : "<<a<< endl;
    cout<<"Value of b is : "<<b<< endl;


    return 0;
}