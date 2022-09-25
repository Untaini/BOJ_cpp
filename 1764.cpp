#include <cstdio>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <string>
using namespace std;

vector<string> v;
unordered_map<string, int> um;
char d[21];
int n,m,i;
int main() {
    scanf("%d%d\n",&n,&m);
    for(i=0;i<n;++i){
        scanf("%s",d);
        um[string(d)]=1;
    }
    for(i=0;i<m;++i){
        scanf("%s",d);
        if(um[string(d)])
            v.push_back(string(d));
    }
    sort(v.begin(),v.end());
    printf("%d\n",v.size());
    for(auto s : v)
        printf("%s\n",s.c_str());
    return 0;
}
