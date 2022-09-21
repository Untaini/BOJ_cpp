#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;
int n,temp,sum,p;
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        scanf("%d",&temp);
        v.push_back(temp);
    }

    sort(v.begin(), v.end());

    for(int elem : v){
        p+=elem;
        sum+=p;
    }

    printf("%d", sum);
    return 0;
}
