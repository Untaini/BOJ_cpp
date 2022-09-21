#include <cstdio>
#include <queue>
using namespace std;

queue<int> q;
int n,k,c=0;

int main(){
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;++i)
        q.push(i);
    printf("<");
    while(!q.empty()){
        int x=q.front(); q.pop();
        if(++c%k==0) printf("%d%s",x,q.empty()?">":", ");
        else q.push(x);
    }
    return 0;
}


