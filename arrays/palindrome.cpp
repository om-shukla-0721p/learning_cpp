# include <iostream>
using namespace std;

int main(){
    int nums[]={1,2,3,4,5,4,3,2,1};

    int i=0,j=(sizeof(nums)/4)-1;
    int flag=false;


    while (j>i){
        if (nums[i]!=nums[j]){
            cout<<"Not a palindrome";
            flag=true;
            break;
        }
        j-=1;
        i+=1;
        
    }
    if (flag==false){
        cout<<"Palindrom";
    }
    



}