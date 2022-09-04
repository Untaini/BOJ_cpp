#include <cstdio>
#include <stack>
using namespace std;

int n, d[1000001], r[1000001];
stack<int> s;
int main() {
    scanf("%d",&n);
    for(int i=0;i<n;++i) {
        scanf("%d",&d[i]);
        while(!s.empty() && d[s.top()]<d[i]){
            r[s.top()] = d[i];
            s.pop();
        }
        s.push(i);
    }

    for(int i=0;i<n;++i)
        printf("%d ", r[i]==0?-1:r[i]);
    return 0;
}
