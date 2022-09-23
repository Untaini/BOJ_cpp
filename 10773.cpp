#include <cstdio>
#include <stack>
using namespace std;

stack<int> s;
int n,x,i;
long long r;
int main() {
    scanf("%d",&n);
    for(i=0;i<n;++i){
        scanf("%d",&x);
        x?s.push(x):s.pop();
    }
    while(!s.empty()){
        r+=s.top();
        s.pop();
    }
    printf("%lld",r);
    return 0;
}
