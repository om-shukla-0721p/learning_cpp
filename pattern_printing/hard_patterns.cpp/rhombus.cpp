# include <iostream>
using namespace std;

int main(){
    cout<<"enter n:";
    int n;
    cin>>n;

    for (int i=1;i<=n;i+=1){
        for (int j=1;j<=(n*2)-1;j+=1){
            if ((i+j)>n and (i+j)<=n*2){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}