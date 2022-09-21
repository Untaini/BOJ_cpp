#include <cstdio>
#include <string>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;

unordered_set<string> us;
char name[6], d[6];
int n;

int main() {
    scanf("%d\n",&n);
    for(int i=0;i<n;++i){
        scanf("%s%s",name,d);
        if(d[0]=='e')
            us.insert(string(name));
        else
            us.erase(string(name));
    }

    vector<string> v(us.begin(), us.end());
    sort(v.begin(), v.end(), greater<string>());

    for(auto elem : v)
        printf("%s\n",elem.c_str());

    return 0;
}


