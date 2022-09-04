#include <cstdio>
#include <algorithm>
using namespace std;

int d[1000], mx, n;
double s;
int main() {
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &d[i]);
        mx = max(mx,d[i]);
    }

    for(int i=0;i<n;i++) s+= (d[i]/double(mx))*100;

    printf("%lf", s/n);
    return 0;
}
