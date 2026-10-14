# include <iostream>
using namespace std;

int main(){
    // int n;
    // cout<<"Enter the number";
    // cin>>n;
    // int prev=3;
    // for (int i=1;i<=n;i+=1){
    //     cout<<prev<<" "                                                                                        ;
    //     prev=prev*4;
    // }

    // break statement
    // int n;
    // cout<<"Enter thr number :";
    // cin>>n;
    // int lowest_divisor=0;


    // for (int i=2;i<=n/2;i+=1){
    //     if(n%i==0){
    //         lowest_divisor=i;
    //         break;
    //     }
    // }

    // if (lowest_divisor==0){
    //     cout<<"Prime Number";
    // }
    // else{
    //     int ans=0;
    //     ans=n/lowest_divisor;
    //     cout<<ans;


    // }

    // cout<<"ENter the nu,ber";
    // int n;
    // cin>>n;
    // char ans=false;

// break usage
    // for (int i=2;i<=n/2;i+=1){
    //     if (n%i==0){
    //         cout<<"Composite number";
    //         ans=true;
    //         break;
    //     }
    // }
    // if (ans!=true){
    //     cout<<"Prime number";
    // }


    // continue usage
    // for (int i=1;i<=20;i+=1){
    //     if (i==3 or i==5 or i==6){
    //         continue;
    //     }
    //     else{
    //         cout<<i<<" ";
    //     }

    // }

    for (int i=1;i<=100;i+=1){
        if (i%2==0){
            continue;
        }
        cout<<i<<" ";
    }



}