#include <cstdio>
#include <unordered_map>
using namespace std;

unordered_map<int,int> m;
int n,d[2001],r;
int main() {
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        scanf("%d",&d[i]);
        ++m[d[i]];
    }
    printf("%d",r);
}
