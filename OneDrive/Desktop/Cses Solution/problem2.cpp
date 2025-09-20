#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void solve() {
  ll n;
  cin>>n;
  ll d=5;
  ll a=n;
  ll res=a;
  ll count=0;
  while(res>0){
  res=(a/d);
  if(res==0){
  	break;
  }
  d*=5;
  count+=res;
  }
  cout<<count;


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}