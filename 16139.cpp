#include <cstdio>

int ps[26][200001], q, i, j, l, r;
char s[200001], c;
int main() {
    scanf("%s",s);
    scanf("%d",&q); getchar();

    ++ps[s[0]-'a'][0];
    for(i=1;s[i];++i){
        ++ps[s[i]-'a'][i];
        for(j=0;j<26;++j)
            ps[j][i]+=ps[j][i-1];
    }

    for(i=0;i<q;++i){
        scanf("%c%d%d",&c,&l,&r); getchar();
        printf("%d\n",ps[c-'a'][r]-(l?ps[c-'a'][l-1]:0));
    }
    return 0;
}
