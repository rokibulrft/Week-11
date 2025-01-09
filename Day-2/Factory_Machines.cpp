#include<bits/stdc++.h>
using namespace std;

int n,t;

bool valid(long long seconds,vector<int> v){
    long long int cnt=0;
    for(int i=0;i<n;i++){
        cnt+=(seconds)/v[i];
        if(cnt>=t){
            return true;
        }
    }
    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>t;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    long long int l=1,r=1e18+1,ans;
    while(l<=r){
        long long mid=(l+r)/2;
        if(valid(mid,v)){
            ans=mid;
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
    cout<<ans<<'\n';
}