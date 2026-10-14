# include <iostream>
using namespace std;

int main(){
    cout<<"Enter Lenth:";
    int l,b;
    cin>>l;
    cout<<"Enter breadth:";
    cin>>b;

    for (int i=1;i<=l;i+=1){
        for (int j=1;j<=b;j+=1){
            cout<<"*";

        }
        cout<<endl;
    } 


}