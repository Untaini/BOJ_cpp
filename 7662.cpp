#include <cstdio>
#include <queue>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;

unordered_map<int, int> um;
priority_queue<int> xpq;
priority_queue<int, vector<int>, greater<int>> npq;
int t,k,i,j,x;
char c[3];
int main() {
    scanf("%d",&t);
    for(i=0;i<t;++i){
        scanf("%d\n",&k);
        while(!xpq.empty()) xpq.pop();
        while(!npq.empty()) npq.pop();
        um.clear();

        for(j=0;j<k;++j){
            scanf("%s%d",c,&x);
            if(c[0]=='I'){
                ++um[x];
                xpq.push(x);
                npq.push(x);
            }
            else{
                if(!xpq.size()) continue;
                if(x>0){
                    --um[xpq.top()];
                    xpq.pop();
                }
                else{
                    --um[npq.top()];
                    npq.pop();
                }

                while(!xpq.empty() && !um[xpq.top()]) xpq.pop();
                while(!npq.empty() && !um[npq.top()]) npq.pop();
            }
        }

        xpq.size()?printf("%d %d\n",xpq.top(),npq.top()):printf("EMPTY\n");
    }
    return 0;
}
