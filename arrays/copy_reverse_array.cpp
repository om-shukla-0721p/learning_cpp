# include <iostream>
using namespace std;

int main(){
    int nums[]={1,2,42,3,53,423,323,3223,12,23,2,32};
    int n=sizeof(nums)/4;

    int nums_rev[n];

    for (int i=0;i<n;i+=1){
        nums_rev[n-i-1]=nums[i];
    }

    for (int i=0;i<n;i+=1){
        // cout<<nums[i];
        cout<<nums_rev[i]<<" ";
    }

}