#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Input two numbers";
    cin>> a>>b;
    int temp=a;
    a=b;
    b=temp;
    cout<<a<<endl;
    cout<<b;

}
