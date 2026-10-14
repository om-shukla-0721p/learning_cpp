# include <iostream>
using namespace std;

int main(){
    int arr[3][4];
    for (int i=0;i<3;i+=1){
        for (int j=0;j<4;j+=1){
            arr[i][j]=i+j;                                     
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"transpose of a matrix"<<endl;
    for (int i=0;i<4;i+=1){
        for (int j=0;j<3;j+=1){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}