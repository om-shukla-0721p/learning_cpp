# include <iostream>
using namespace std;

void rev_array(int arr[]){

}

int main(){
    int x[]={1,2,3,5,6,7,8};
    int summ=0;

    for (int i=0;i<sizeof(x)/4;i+=1){
        summ+=x[i];       
    }
    cout<<summ<<endl;


}