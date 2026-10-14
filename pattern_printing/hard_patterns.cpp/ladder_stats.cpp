# include <iostream>
using namespace std;

int main(){
    // cout<<"Enter n:";
    // int n;
    // cin>>n;
    

    // for (int i=1;i<=n;i+=1){
    //     int a;
    //     a=1;
    //     for (int j=1;j<=2*n-1;j+=1){
    //         if ((i+j>=n+1) and (j-i<=n-1)){
    //             cout<<a;
    //             a+=1;
    //         } 
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    cout<<"Enter n:";
    int n;
    cin>>n;

    for (int i=1;i<=n;i+=1){
        for (int j=1;j<=2*n-1;j+=1){
            if ((i+j>=n+1) and (j-i<=n-1)){
                cout<<"*";
            } 
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}