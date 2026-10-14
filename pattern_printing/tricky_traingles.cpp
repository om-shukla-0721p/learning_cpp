#include <iostream>
using namespace std;

int main(){
    cout<<"Enter n:";
    int n;
    cin>>n;

    for (int i=1;i<=n;i+=1){
        for (int j=1;j<=2*i;j+=2){
            cout<<j;
        }
        cout<<endl;
    }
}