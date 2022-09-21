#include <cstdio>
#include <unordered_map>
using namespace std;

unordered_map<int, int> m;
int n,x;
int main() {
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        scanf("%d",&x);
        ++m[x];
    }
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        scanf("%d",&x);
        printf("%d ",m[x]);
    }
}
