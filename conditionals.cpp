# include <iostream>
using namespace std;

int main(){
    // float x,y;
    // cout<<"Enter the lenght";
    // cin>>x;
    // cout<<"Enter breadth";
    // cin>>y;
    
    // if ((x*y)>(x+y)){
    //     cout<<"Area is greater than perimeter";
    // }
    // else if ((x*y)<(x+y)){
    //     cout<<"Area is lesser than perimeter";

    // }
    // else{
    //     cout<<"Both Area and perimeter are equal";
    // }

    // 
    
    int x;
    cout<<"Enter your number";
    cin>>x;

    if ((x%3==0) or x%5==0 ){
        cout<<"Divisible by  3 or 5";
    }
    else{
        cout<<"Not divisible by either";
    }

}