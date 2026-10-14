# include <iostream>
using namespace std;

int main(){
    cout<<"Enter n:";
    int n;
    cin>>n;
    int a=1;
    
    for (int i=1;i<=n;i+=1){
        for (int j=1;j<=i;j+=1){
            if ((i+j)%2==0){
                cout<<1<<" "; 
            }
            else{
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
}