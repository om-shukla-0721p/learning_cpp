# include <iostream>
using namespace std;

int main(){
    int x=1;
    cout<<&x<<endl;

    int* p=&x;
    cout<<p<<endl;

    cout<<*p<<endl;

}