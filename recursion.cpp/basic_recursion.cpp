# include <iostream>
using namespace std;

void rec(int x){
    if (x==0){
        return;
    }
    cout<<"Recursion"<<x<<endl;
    rec(x-1);
    return ;
}

int main(){
    rec(5);
}