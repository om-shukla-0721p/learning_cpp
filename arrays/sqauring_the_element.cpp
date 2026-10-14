# include <iostream>
using namespace std;

int main(){
    cout<<"Enter n:";
    int n;
    cin>>n;

    int arr[n+1];

    for (int i=0;i<=n;i+=1){
        arr[i]=i*i;
        cout<<arr[i]<<" ";

    }
}