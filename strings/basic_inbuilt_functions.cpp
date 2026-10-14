# include <iostream>

using namespace std;

int main(){
    string s="Something";
    s.push_back('a');
    cout<<s<<endl;
    s.push_back('b');
    cout<<s<<endl;

    s.pop_back();
    cout<<s<<endl;                          

    s.append(" hello whats up");
    cout<<s<<endl;

    cout<<s.length()<<endl;

    s.clear();
    cout<<s.length()<<endl;
    

}