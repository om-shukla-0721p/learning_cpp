# include <iostream>
using namespace std;

void change(int arr[]){
    arr[0]=100;
// in arrays values pass by reference
// in normal variables values pass by value
}
int main(){
    int arr[]={1,2,34,5};
    for (int i=0;i<4;i+=1){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    change(arr);
    for (int i=0;i<=3;i+=1){
        cout<<arr[i]<<" ";
    }
    
}