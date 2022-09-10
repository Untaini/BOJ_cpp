#include <cstdio>

int isPrime(int number){
    if(number < 2) return 0;
    else if(number == 2) return 1;
    else if(number%2 == 0) return 0;

    for(int i = 3; i*i<=number; i+=2)
        if(number%i==0) return 0;

    return 1;
}

int n, temp, result;
int main() {
    scanf("%d", &n);
    for(int i=0; i<n; ++i){
        scanf("%d",&temp);

        if(isPrime(temp))
            result += 1;
    }

    printf("%d",result);

    return 0;
}
