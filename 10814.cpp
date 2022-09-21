#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

#define pis pair<int, string>

vector<pis> v;
int n,a;
char name[101];
bool cmp(pis a, pis b){
    return a.first<b.first;
}


int main() {
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        scanf("%d %s",&a,name);
        v.push_back(make_pair(a,string(name)));
    }
    stable_sort(v.begin(), v.end(), cmp);
    for(auto e : v)
        printf("%d %s\n",e.first,e.second.c_str());
}
