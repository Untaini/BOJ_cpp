#include <cstdio>

int f(int m){
    switch(m){
        case 1: case 3: case 5:
        case 7: case 8: case 10: case 12:
            return 31; break;
        case 2: return 28; break;
        case 4: case 6: case 9: case 11:
            return 30; break;
        default: return 0;
    }
}

const char* w(int n){
    switch(n){
    case 1: return "MON"; break;
    case 2: return "TUE"; break;
    case 3: return "WED"; break;
    case 4: return "THU"; break;
    case 5: return "FRI"; break;
    case 6: return "SAT"; break;
    default: return "SUN";
    }
}

int s,a;
int main(){
    scanf("%d%d",&a,&s);
    for(int i=1;i<a;i++)
        s+= f(i);
    printf("%s", w(s%7));
    return 0;
}
