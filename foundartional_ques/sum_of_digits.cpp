# include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;

    int summ=0;

    while (n>0){
        summ+=n%10;
        n=n/10;
    }
    cout<<summ;
}