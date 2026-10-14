# include <iostream>
using namespace std;

int main(){
    cout<<"Enter n:";
    int n;
    cin>>n;

    for (int i=1;i<=2*n-1;i+=1){
        for (int j=1;j<=2*n-1;j+=1){
            if (((i+j)>=n+1 and (j-i<=n-1) and i<=n) or ((i-j<=n-1) and (i+j<=3*n-1)and i>n )){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        
        }
        cout<<endl;
    }


}