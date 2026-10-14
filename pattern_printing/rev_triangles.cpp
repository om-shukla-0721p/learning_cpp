# include <iostream>
using namespace std;

int main(){
    // cout<<"Enter n:";
    // int n;
    // cin>>n;

    // for (int i=n;i>=1;i-=1){
    //     for (int j=i;j>=1;j-=1){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // cout<<"Enter n:";
    // int n;
    // cin>>n;

    // for (int i=n;i>=1;i-=1){
    //     for (int j=1;j<=i;j+=1){
    //         cout<<char(j+64)<<" ";
    //     }
    //     cout<<endl;
    // }

    // cout<<"Enter n:";
    // int n;
    // cin>>n;

    // for (int i=1;i<=n;i+=1){
    //     for (int j=1;j<=i;j+=1){
    //         cout<<n-j+1<<" ";
    //     }cout<<endl;
    // }

    cout<<"Enter n:";
    int n;
    cin>>n;

    for (int i=1;i<=n;i+=1){
        for (int j=1;j<=n-i+1;j+=1){
            cout<<char(64+j)<<" ";
        }
        cout<<endl;
    }

}