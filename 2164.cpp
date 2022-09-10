#include <cstdio>
#include <queue>
using namespace std;

int n;
queue<int> q;

int main() {
    scanf("%d", &n);
    for(int i=1;i<=n;++i)
        q.push(i);

    int x=0;
    while(q.size() != 1){
        if((x&1) == 0)
            q.pop();
        else{
            int temp = q.front(); q.pop();
            q.push(temp);
        }
        ++x;
    }
    printf("%d", q.front());
    return 0;
}
