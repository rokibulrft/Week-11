#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        for(int i=0;i<7;i++){
            x=x-(1<<i);
        }
        if(x>=0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}