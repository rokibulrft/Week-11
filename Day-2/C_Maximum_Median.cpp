#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,k;
    cin>>n>>k;
    vector<long long int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());

    auto ok=[&](long long median){
        long long cnt=0;
        for(int i=n/2;i<n;i++){
            if(v[i]<median){
                cnt+=median-v[i];
            }
        }
        return cnt<=k;
    };

    long long l=1,r=2e9,ans;
    while(l<=r){
        long long mid=(l+r)/2;
        if(ok(mid)){
            ans=mid;
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    cout<<ans<<'\n';
}