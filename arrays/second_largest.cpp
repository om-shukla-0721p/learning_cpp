# include <iostream>
using namespace std;

int main(){
    int largest = INT_MIN, sec_largest = INT_MIN;
    int arr[]={10,1,9,4,12,1,2};

    for (int i=0;i<sizeof(arr)/4;i+=1){
        if (largest<arr[i]){
            sec_largest=largest;
            largest=arr[i];
        }
        else{
            if (arr[i]>sec_largest and arr[i]!=largest){
                sec_largest=arr[i];
            }
        }
    }

    cout<<sec_largest;

}