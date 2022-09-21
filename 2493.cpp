#include <cstdio>
#include <stack>
using namespace std;

stack<int> s;
int d[500001]={1<<27},n,x;
int main(){
    scanf("%d",&n);
    s.push(0);
    for(int i=1;i<=n;++i) {
        scanf("%d",&d[i]);
        while(d[s.top()]<d[i]) s.pop();
        printf("%d ", s.top());
        s.push(i);
    }
}

