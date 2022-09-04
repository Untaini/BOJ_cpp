#include <stdio.h>

int n, d[1000], s, c,m;
double e;
int main() {
    scanf("%d",&m);
    for(int j=0;j<m;j++){
        scanf("%d",&n);
        s=c=0;
        for(int i=0;i<n;i++){
            scanf("%d", &d[i]);
            s+=d[i];
        }

        e = s/double(n);

        for(int i=0;i<n;i++)
            if(double(d[i]) > e) c++;

        printf("%.3lf%%\n",double(c)/n*100);
    }
    return 0;
}
