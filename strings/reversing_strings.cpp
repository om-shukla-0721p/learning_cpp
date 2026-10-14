# include <iostream>
# include <string>
# include <algorithm>
using namespace std;

int main(){
    // string s="Reverse";
    // cout<<s<<endl;

    // reverse(s.begin(),s.end());

    // cout<<s<<endl;
    string s="Reverse";
    cout<<s<<endl;
    int i=0,j=(s.length()/2)-1;
    reverse(s.begin(),s.begin()+(s.length()/2));
    cout<<s;

}