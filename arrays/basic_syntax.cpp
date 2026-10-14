# include <iostream>
using namespace std;

int main(){
    // to store integer
    int arr[5];
    // arr[0]=6;
    // arr[1]=2; // manually filling the array
    // arr[3]=4;
    // arr[2]=2;
    // arr[4]=1;

    for (int i=0;i<=4;i+=1){
        cout<<"Enter the "<<i<<" "<<"Element:";
        cin>>arr[i];
        cout<<" ";
    }


    
    for (int i=0;i<=4;i+=1){
        cout<<arr[i]<<" ";
    }
    
    }