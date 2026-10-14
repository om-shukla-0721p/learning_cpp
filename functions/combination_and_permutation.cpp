# include <iostream>
# include <cmath>

using namespace std;

int factorial(int n){
    int ans=1;
    for (int i=1;i<=n;i+=1){
        ans*=i;}
    return ans;

}

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int r;
    cout<<"Enter r:";
    cin>>r;

    int ans=1;

    ans=factorial(n)/(factorial(r)*factorial(n-r));
    cout<<ans;


}