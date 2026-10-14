# include <iostream>
using namespace std;

void iter(int x){
    if (x==0){
        return ;
    }
    else{
        cout<<x<<endl;
        iter(x-1);
    }
    return ;
}

void one_to_n(int n){
    if (n==0){
        return; 
    }
    one_to_n(n-1);
    cout<<n<<endl;
}


int main(){
    iter(10);
    one_to_n(10);

}