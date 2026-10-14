# include <iostream>
using namespace std;

int main(){
    cout<<"Enter n:";
    int n;
    cin>>n;

    for (int i=1;i<=n;i+=1){
        for (int j=1;j<=n;j+=1){
            if (i==1 or j==1 or j==n or i==n){
               cout<<"* ";

            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}