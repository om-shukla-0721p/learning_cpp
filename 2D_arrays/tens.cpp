# include <iostream>
using namespace std;

int main(){
    int nums[5][5];
    for (int i=0;i<5;i+=1){
        for (int j=0;j<5;j+=1){
            nums[i][j]=10;
            cout<<nums[i][j]<<" ";
        }
        cout<<endl;
    }
}