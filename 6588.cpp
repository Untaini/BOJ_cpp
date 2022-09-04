#include <cstdio>

bool d[1000010];

int n;
int main() {

    for(int i=2;i*i<1000001;i++) {
        if(d[i]) continue;
        for(int j=i*i; j<1000001;j+=i)
            d[j] = true;
    }

    while(true){
        scanf("%d",&n);
        if(!n) break;

        bool c = false;
        int s = n/2;
        for(int i=3;i<=s;i+=2)
            if(!d[i] && !d[n-i]){
                c = true;
                printf("%d = %d + %d\n", n, i, n-i);
                break;
            }

        if(!c)
            printf("Goldbach's conjecture is wrong.\n");

    }
    return 0;
}
