# include <iostream>
using namespace std;

int main(){
    string str="anuj";
    cout<<str<<endl;

    string s;

    cin>>s; // only takes str till first space occurs # not optimal
    // cout<<s;
    getline(cin,s);

    



}