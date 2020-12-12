#include <stdio.h>

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int sum = 0;
    for(int i=-10;i<=m;i++){
        for(int j=1;j<=n;j++){
            sum += ((i+j)*(i+j)*(i+j))/(j*j);
        }

    }
    printf("%d",sum);
    return 0;
}
