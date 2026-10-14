# include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter a:";
    cin>>a;

    int b;
    cout<<"Enter b:";
    cin>>b;

    int c;
    c=a;
    a=b;
    b=c;
    cout<<a<<" "<<b;


    // best way to do it 
    // think first store total and a vraible then
    // the x and y are just addition and substraction
    // x=x+y;
    // y=x-y;
    // x=x-y;
}