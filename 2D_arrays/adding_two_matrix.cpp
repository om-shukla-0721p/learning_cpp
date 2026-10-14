# include <iostream>
using namespace std;

int main(){
    // can only add two matrices if their dimensions are same
    int arr[2][3]={{5,9,4},{5,1,7}},nums[2][3]={{2,3,6},{5,6,4}};
    int result[2][3];
    for (int i=0;i<2;i+=1){
        for (int j=0;j<3;j+=1){
            result[i][j]=nums[i][j]+arr[i][j];
            cout<<result[i][j]<<" ";
        }
        cout<<endl<<"\n";
    }

}