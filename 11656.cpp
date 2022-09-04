#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

char s[1001];
vector<char*> v;

bool cmp(char* c1, char* c2) {
    int i;
    for(i=0;c1[i]!=0 && c2[i]!=0;++i)
        if(c1[i] == c2[i]) continue;
        else return c1[i]<c2[i];
    return c1[i]==0;
}


int main() {
    gets(s);
    for(int i=0;s[i]!=0;++i)
        v.push_back(s+i);

    sort(v.begin(), v.end(), cmp);

    for(int i=0;i<v.size();++i)
        printf("%s\n", v[i]);
    return 0;
}
