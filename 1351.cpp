#include <cstdio>
#include <unordered_map>
using namespace std;
#define ll long long

unordered_map<ll, ll> m;
ll n,p,q,l;

ll gcd(ll a, ll b){
    return b?gcd(b,a%b):a;
}

int main() {
    scanf("%lld%lld%lld",&n,&p,&q);
    m[0]=1,l=p/gcd(p,q)*q;
    for(ll i=l;i<=n;i*=l){

    }
}
