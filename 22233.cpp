#include <cstdio>
#include <string>
#include <unordered_set>
using namespace std;

unordered_set<string> st;
char keyword[11],nKeywords[120];
int n,m;

int main() {
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;++i){
        scanf("%s",keyword);
        st.insert(string(keyword));
    }
    for(int i=0;i<m;++i){
        scanf("%s",nKeywords);
        string s = string(nKeywords);
        int index=0, nIndex;
        while((nIndex = s.find(',',index)) != string::npos){
            st.erase(s.substr(index, nIndex-index));
            index = nIndex+1;
        }
        st.erase(s.substr(index));
        printf("%d\n",st.size());
    }

    return 0;
}
