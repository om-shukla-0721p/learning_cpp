# include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;

    for (int i=1;i<=n;i+=1){
        for (int j=1;j<=n;j+=1){
            if (i==(n/2)+1 | j==(n/2)+1 ){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}