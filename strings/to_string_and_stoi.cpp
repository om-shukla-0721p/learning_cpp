# include <iostream>
# include <string>
using namespace std;

int main(){
    int x=1234;
    string s=to_string(x);
    s+="dd";
    cout<<s<<endl;

    int y=stoi(s); // if any char in s then they get removed on their own
    cout<<y<<endl;
    y+=3;
    cout<<y;



    
}