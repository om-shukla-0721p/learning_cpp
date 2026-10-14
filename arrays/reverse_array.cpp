# include <iostream>
using namespace std;

int main(){
    int arr[]={1,3,123,12,1,33,1234,23,2};
    
    int n=sizeof(arr)/4;

    for (int i=0;i<=n/2;i+=1){
        if (i==n-1-i){
            continue;
        }
        arr[i]=arr[i]+arr[n-1-i];
        arr[n-1-i]=arr[i]-arr[n-1-i];
        arr[i]=arr[i]-arr[n-1-i];

    }

    for (int i=0;i<n;i+=1){
        cout<<arr[i]<<" ";
    }


}