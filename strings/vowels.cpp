# include <iostream>
using namespace std;

int main(){
    // string s="Anuj"; // has '\0' in the last 
    // cout<<s.length()<<endl;
    // // \0 is null character
    // cout<<int('\0');
    // // cout<<char('\0') prints nothing

    string s;
    getline(cin,s);

    int len=s.length();
    int count=0;


    for (int i=0;i<len;i+=1){
        if (s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u'){
            count+=1;
        } 
    }

    cout<<count;


}