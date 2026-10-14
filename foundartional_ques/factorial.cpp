# include <iostream>
using namespace std;

int main(){
    // cout<<"Enter the number n:";
    // int n;
    // cin>>n;

    // int summ=0;

    // for (int i=0;i<=n+1;i+=1){
    //     summ+=i;
    // }
    // cout<<summ;

    cout<<"enter your number";
    int n;
    cin>>n;
    int factorial=1;

    for (int i=1;i<=n;i+=1){
        factorial*=i;
    }
    cout<<factorial;


}