# include <iostream>
using namespace std;

int main(){
    int mini=INT_MIN;
    int arr[5][5];
    // values could be put here in this array
    for (int i=0;i<5;i+=1){
        for (int j=0;j<5;j+=1){
            mini=max(mini,arr[i][j]);
        }
    }
    cout<<mini;
}