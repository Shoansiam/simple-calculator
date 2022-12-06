#include<iostream>
using namespace std;

int main(){
    // on there you can calcualate with two numbers.
    int a , b;
    int plus, del, mult, devid;
    
    cout<<"The first number:\n";
    cin>>a;

    cout<<"The sec number:\n";
    cin>>b;
    plus = a+b;
    del = a-b;
    mult = a*b;
    devid = a/b;

    
    cout<<"the plus of two numbers:"<<plus<<endl;
    cout<<"the del of two number is:"<<del<<endl;
    cout<<"the mult of two number is:"<<mult<<endl;
    cout<<"the devid of two number is:"<<devid<<endl;


    return 0;
}
