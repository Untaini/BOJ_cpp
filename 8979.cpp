#include <cstdio>
#include <algorithm>
#include <tuple>
#include <vector>
using namespace std;

#define con tuple<int,int,int,int>
int n,t,a,b,c,d,i,g=1;
vector<con> v;

int compare(con a, con b){
    if(get<1>(a)==get<1>(b))
        if(get<2>(a)==get<2>(b))
            if(get<3>(a)==get<3>(b)) return get<0>(a)<get<0>(b);
            else return get<3>(a)>get<3>(b);
        else return get<2>(a)>get<2>(b);
    else return get<1>(a)>get<1>(b);
}

int main(){
    scanf("%d%d",&n,&t);
    for(i=0;i<n;++i){
        scanf("%d%d%d%d",&a,&b,&c,&d);
        v.push_back(make_tuple(a,b,c,d));
    }

    sort(v.begin(), v.end(), compare);

    if(get<0>(v[0])==t) printf("1");
    for(i=1;i<v.size();++i){
        if(get<1>(v[i])!=get<1>(v[i-1])||get<2>(v[i])!=get<2>(v[i-1])||get<3>(v[i])!=get<3>(v[i-1])) g=i+1;
        if(get<0>(v[i])==t) printf("%d",g);
    }

    return 0;
}
