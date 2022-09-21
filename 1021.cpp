#include <cstdio>
#include <deque>
using namespace std;

deque<int> dq;
int n,m,c,i,j,k,x;
int main() {
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;++i) {
        dq.push_back(i);
    }
    for(i=0;i<m;++i){
        scanf("%d",&x);
        if(dq[0] == x)
            dq.pop_front();
        else{
            int sz = dq.size();
            for(j=1;j<=(sz>>1);++j){
                if(dq[j] == x){
                    for(k=0;k<j;++k){
                        dq.push_back(dq.front());
                        dq.pop_front();
                    }
                    break;
                }
                else if(dq[sz-j] == x){
                    for(k=0;k<j;++k){
                        dq.push_front(dq.back());
                        dq.pop_back();
                    }
                    break;
                }
            }
            dq.pop_front();
            c += j;
        }
    }
    printf("%d", c);

    return 0;
}
