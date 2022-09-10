#include <cstdio>
int a,b,c;
bool t(int a,int b,int c){
    return a*a+b*b==c*c;
}

int main() {
    while(true){
        scanf("%d%d%d",&a,&b,&c);
        if(a==0) break;
        bool bo=false;
        printf("%s\n",t(a,b,c)||t(b,c,a)||t(a,c,b)?"right":"wrong");
    }
    return 0;
}
