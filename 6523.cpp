#include <cstdio>
#include <unordered_map>
using namespace std;

unordered_map<long long, int> um;
long long n,a,b,t,c;
int main(){
    while(true){
        scanf("%lld",&n);
        if(!n) break;
        scanf("%lld%lld",&a,&b);
        um.clear();

        t=c=0;
        while(!um.count(t)){
            um.insert({t,c++});
            t=((t*t)%n*a+b)%n;
        }
        printf("%lld\n",n-um.size()+um[t]);
    }
    return 0;
}
