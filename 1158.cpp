#include <cstdio>
#include <queue>
using namespace std;

int k,n;
queue<int> q;
int main() {
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;++i)
        q.push(i);

    printf("<");
    for(int i=1;i<=n*k;++i){
        if(i%k) q.push(q.front());
        else printf("%d%s",q.front(),q.size()==1?">":", ");
        q.pop();
    }
    return 0;
}
