# include <iostream>
using namespace std;

int maxi(int arr[],int n){
    if (n==0){
        return 0;}
    int largest=arr[0];
    for (int i=0;i<n;i+=1){
        if (largest<arr[i]){
            largest=arr[i];
        }
    }
    return largest;
}


int main(){
    int arr[]={1,4,23,6,2,435,343,42,3,52,3,4};

    cout<<maxi(arr,sizeof(arr)/4)<<endl;


}