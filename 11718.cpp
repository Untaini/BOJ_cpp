#include <cstdio>

char d[100][101];
int n=0;
int main() {
    while(true){
        gets(d[n++]);
        if(d[n-1][0] == '\0') break;
    }
    n--;
    for(int i=0;i<n;i++)
        printf("%s\n", d[i]);
    return 0;
}
