# include <iostream>
using namespace std;

int main(){
    // cout<<"Enter n:";
    // int n;
    // cin>>n;
    // int a=1;
    // for (int i=1;i<=n;i+=1){
    //     for (int j=1;j<=i;j+=1){
    //         cout<<a<<" ";
    //         a+=1;
    //     }
    //     cout<<endl;
        
    // }

    cout<<"Enter n:";
    int n;
    cin>>n;
    // int a=1;
    for (int i=1;i<=n;i+=1){
        for (int j=1;j<=i;j+=1){
            cout<<(i+j-1)
            <<" ";
            // a+=1;
        }
        cout<<endl;
        
    }
}