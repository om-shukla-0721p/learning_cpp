# include <iostream>
using namespace std;

int power(int a,int b){
    if (b==0){
        return 1;
    }
    if (b>0){
        return a*(power(a,b-1));
    }
    else{
        return a*(power(a,b+1));
    }

}

int power2(int a, int b){
    if (b==0){
        return 1;
    }
    if (b%2!=0){
        return (a*power2(a,b/2)*power2(a,b/2));
    }
    else{
        return (power2(a,b/2)*power2(a,b/2));
    }

}

int main(){
    int a,b;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    if (b>=0){
        cout<<power(a,b)<<endl;
    }
    else{
        cout<<1/power(a,b)<<endl;
    }

    cout<<power2(a,b)<<endl;
}