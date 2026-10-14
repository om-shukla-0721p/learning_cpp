# include <iostream>
using namespace std;

int main(){
    // cout<<"Enter n";
    // int n;
    // cin>>n;

    // for (int i=1;i<=n;i+=1){
    //     for (int j=1;j<=n;j+=1){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    cout<<"Enter n:";
    int n;
    cin>>n;

    for (int i=1;i<=n;i+=1){
        for (int j=1;j<=n;j+=1){
            cout<<i;
        }
        cout<<endl;
    }
}