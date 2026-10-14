# include <iostream>
using namespace std;

int main(){
    int arr[]={1,32,5,23,5,2,35,23,42,34,23,42,4,23,543,42,42,42,};
    // 23
    int even=0,odd=0;

    for (int i=0;i<sizeof(arr)/4;i+=1){
        if (i%2==0){
            even+=arr[i];
        }
        else{
            odd+=arr[i];
        }

    }
    
    cout<<even-odd;

}