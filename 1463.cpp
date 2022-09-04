#include <cstdio>


int d[1000001]= {1,},n;
int main() {
    for(int i=2;i<=1000000;++i)
        d[i] = 10000001;

    for(int i=1;i<1000000;++i) {
        if(3*i<=1000000) d[3*i] = d[3*i]<d[i]+1?d[3*i]:d[i]+1;
        if(2*i<=1000000) d[2*i] = d[2*i]<d[i]+1?d[2*i]:d[i]+1;
        d[i+1] = d[i+1]<d[i]+1?d[i+1]:d[i]+1;
    }
    scanf("%d", &n);
    printf("%d",d[n]);
    return 0;
}
