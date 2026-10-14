# include <iostream>
using namespace std;

int swap(int* x,int*y){
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
    return 0;
}


int main(){
    // int x=12;
    // int* ptr=&x;
    // cout<<x<<endl;
    // cout<<*ptr<<endl;
    // // updating x value with its address
    // *ptr=23;

    // cout<<*ptr<<endl;
    // cout<<x<<endl;

    int x;
    int y;
    cout<<"Enter x:";
    cin>>x;
    cout<<"Enter y:";
    cin>>y;
    swap(&x,&y);

    cout<<x;
    cout<<y;





}