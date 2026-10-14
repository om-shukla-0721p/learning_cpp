# include <iostream>
using namespace std;

int main(){
    // cout<<"Enter n:";
    // int n;
    // cin>>n;

    // for (int i=1;i<=n;i+=1){
    //     for (int j=1;j<=i;j+=1){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // cout<<"Enter n:";
    // int n;
    // cin>>n;

    // for (int i=1;i<=n;i+=1){
    //     for (int j=1;j<=i;j+=1){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    // cout<<"Enter n";
    // int n;
    // cin>>n;

    // for (int i=1;i<=n;i+=1){
    //     for (int j=1;j<=i;j+=1){
    //         cout<<char(j+64);
    //     }
    //     cout<<endl;
    // }
    
    cout<<"Enter n:";
    int n;
    cin>>n;

    for (int i=1;i<=n;i+=1){
        for (int j=1;j<=i;j+=1){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}