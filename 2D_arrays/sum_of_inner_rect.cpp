# include <iostream>
using namespace std;

int main(){
    int arr[5][4]={1,2,3,4,5,9,10,11,6,12,15,16,7,13,17,19,8,14,18,20};
    int summ=0;

    for (int i=1;i<5;i+=1){
        for (int j=1;j<3;j+=1){
            summ+=arr[i][j];
        }
    }

    cout<<summ;


}