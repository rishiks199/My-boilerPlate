#include<bits/stdc++.h>
using namespace std;
#define int      long long
#define pii     pair<int,int>
#define pb      push_back
#define mod     10000007
#define N       1000005
#define mod1     1e9
#define mem0(a)    memset(a,0,sizeof(a))
#define mem1(a)   memset(a,-1,sizeof(a))
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std::chrono;

//4-direction
int x8[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int y8[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };

//4-direction
int x4[4]={0,0,-1,1};
int y4[4]={1,-1,0,0};

void precompute(){
    fact[0] = fact[1] = 1 ; invFact[0] = invFact[1] = 1 ;
     for(ll i = 2 ; i < N ; i++) {
      fact[i] = (fact[i-1] * i)%mod ;
  }
  for(ll i = 2 ; i < N ; i++) {
      invFact[i] = (mod - mod/i) * invFact[mod%i] % mod ;
  }
  for(ll i = 1 ; i < N ; i++) {
      invFact[i] = (invFact[i-1] * invFact[i])%mod ; 
  }
}

int power(int a,int b)
{
    int res=1;
    if(a==0){
        return a;
    }
    if(b==0){
        return 1;
    }
    a=a%mod;
    while(b>0){
        if(b&1){
            res=(res*a)%mod;
        }
         a=(a*a)%mod;
        b>>=1;
    }
    return res;
}



void solve(){


}



signed main(){

    fastio;
  int test=1;
    cin>>test;
    while(test--){
           solve();
    }

}
