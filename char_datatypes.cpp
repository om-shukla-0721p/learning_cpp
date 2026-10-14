# include <iostream>
using namespace std;
// ascii values
//  a-97
// b-98
// z-122
// A-65
// B-66
// Z-90
// '0'->48
// '1'->49
// '9'->57

int main(){
    char ch;
    cout<<"give your char whose ascii value you want;";
    cin>>ch;
    cout<<int(ch)<<endl;

    cout<<"give an integer which you want to cpnvert to char";
    int x;
    cin>>x;
    cout<<char(x);

    
}


