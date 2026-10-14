# include <iostream>
# include <cmath>

using namespace std;

int factorial(int n){
    int ans=1;
    for (int i=1;i<=n;i+=1){
        ans*=i;
    }
    return  ans;
}

int combination(int n, int r){
    int ans=1;
    ans*=(factorial(n)/(factorial(n-r)*(factorial(r))));
    return ans;
}


int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;

    for (int i=0;i<=n;i+=1){
        for (int j=0;j<=n-i;j+=1){
            cout<<" ";
        }
        for (int j=0;j<=i;j+=1){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }

}