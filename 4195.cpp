#include <cstdio>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;

unordered_map<string, int> um;
unordered_map<string, string> uf;
int t,n;
char n1[21], n2[21];
string f1, f2;

string& find(string& name){
    if(uf[name] == name) return name;
    else return uf[name] = find(uf[name]);
}

int main(){
    scanf("%d",&t);
    for(int i=0;i<t;++i){
        scanf("%d",&n);
        for(int j=0;j<n;++j){
            scanf("%s %s",n1,n2);
            f1=n1,f2=n2;
            if(!um.count(f1)) um[f1]=1,uf[f1]=f1;
            if(!um.count(f2)) um[f2]=1,uf[f2]=f2;

            if(find(f1) != find(f2)){
                um[find(f1)]+=um[find(f2)];
                uf[find(f2)]=uf[find(f1)];
            }
            printf("%d\n", um[find(f1)]);
        }
        um.clear(); uf.clear();
    }
    return 0;
}
