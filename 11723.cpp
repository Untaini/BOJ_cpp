#include <cstdio>

int d,x,m,i;
char s[10];
int main(){
    scanf("%d\n",&m);
    for(i=0;i<m;++i){
        scanf("%s",s);
        switch(s[0]){
            case 'a':
                if(s[1]=='l') d=(1<<21)-1;
                else {
                    scanf("%d",&x);
                    d|=1<<x;
                }
                break;
            case 'c':
                scanf("%d",&x);
                printf("%d\n",(d>>x)&1);
                break;
            case 'e':
                d=0;
                break;
            case 'r':
                scanf("%d",&x);
                d-=(((d>>x)&1)<<x);
                break;
            case 't':
                scanf("%d",&x);
                int t=(d>>x)&1;
                d-=t<<x;
                d+=(t^1)<<x;
                break;
        }
    }
    return 0;
}
