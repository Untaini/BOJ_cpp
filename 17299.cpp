#include <cstdio>
#include <stack>
using namespace std;

int d[1000001], r[1000001], f[1000001], n;
stack<int> s;
int main() {
    scanf("%d", &n);
    for(int i=0;i<n;++i) {
        scanf("%d",&d[i]);
        ++f[d[i]];
        r[i]=-1;
    }

    for(int i=0;i<n;++i) {
        while(!s.empty() && f[d[s.top()]] < f[d[i]]) {
            r[s.top()] = d[i];
            s.pop();
        }
        s.push(i);
    }

    for(int i=0;i<n;++i)
        printf("%d ",r[i]);
    return 0;
}
