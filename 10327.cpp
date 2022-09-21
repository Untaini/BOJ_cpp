#include <cstdio>

int f[45] = {0,1};
int n;
int main() {
    for(int i=2;i<45;++i)
        f[i] = f[i-1] + f[i-2];
    scanf("%d",&n);

    for(int i=0;i<n;++i) {
        int x;
        scanf("%d",&x);
        for(int j=44;j>0;--j) {
            if(f[j] > x) continue;
            for(int k=x/f[j];k>0;k--){
                int res = x-k*f[j];
                if(res%f[j-1] == 0) {
                    printf("%d %d\n", k, res/f[j-1]+k);
                    x=0;
                    break;
                }
            }
            if(!x) break;
        }
    }
}
