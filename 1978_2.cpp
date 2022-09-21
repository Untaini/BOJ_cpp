#include <cstdio>

int arr[1001] = {1,1}, n, temp, result;
int main() {
    for(int i = 2; i*i <= 1000; ++i){
        if(arr[i] == 0) {
            for(int cnt =i*i; cnt <= 1000; cnt+=i)
                arr[cnt] = 1;
        }
    }

    scanf("%d",&n);
    for(int i=0; i<n; ++i){
        scanf("%d",&temp);
        if(arr[temp]==0){
            result += 1;
        }
    }

    printf("%d",result);

    return 0;
}
