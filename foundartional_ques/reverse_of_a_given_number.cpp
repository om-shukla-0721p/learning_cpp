# include <iostream>
using namespace std;

int main(){
    cout<<"Enter the number:";
    int n;
    cin>>n;

    int rev=0;
    int summ=0;
    while (n>0){
        rev=(rev*10)+(n%10);
        summ+=n%10;
        n=n/10;
        
    }

    cout<<rev<<endl;
    cout<<summ*2;


}