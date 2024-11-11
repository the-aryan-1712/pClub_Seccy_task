#include<bits/stdc++.h>

using namespace std;

#define test(t) int t;cin>>t;while(t--)
#define int(t) int t;cin>>t
#define MOD 1000000007
#define vi vector<int>
#define endl '\n' 
#define PI 3.141592653589793238460
#define ll(t) long long t;cin>>t
#define fori(i, a, b) for (int i = a; i < b; i++)
#define ford(i, a, b) for (int i = a; i > b; i--)

int main()
{   
    ll(n);
    
    cout<<n<<endl;
    unordered_map<long long,int> mp;
    for(long long i=n;i>0;i--){
        int count=0,flag=1;
        for( int j=2;    ;j++){
            
            if(mp.find(i*j) == mp.end()){
                
                if(flag){mp.insert({i,1});}
                break;
            }
            else{
                if(mp[i*j]==1) count++;
                flag=0;
            }

        }
        if(count%2==0){
            mp[i]=1;
        }
        else{
            mp[i]=0;
        }
    }

    for(int i=1;i<=n;i++){
        if(mp.find(i)!=mp.end() && (*mp.find(i)).second==1){
            cout<<(*mp.find(i)).first<<" ";
        }
    }
    return 0;
}
