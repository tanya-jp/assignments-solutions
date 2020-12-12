#include <stdio.h>

int main() {
	int x;scanf("%d", &x);
	int i, j, n;
	while(x==1 || x==2 || x==3 || x==4){
		switch(x){
			case 1:
				scanf("%d", &n);
				for(i=1 ; i<=n-1 ; i++){
					for(j=1 ; j<=n-i ; j++)printf(" ");
					for(j=1 ; j<=i ; j++){
						printf("%d ", i);
					}
					printf("\n");
				}
				for(j=1 ; j<=n ; j++)
					printf("%d ", i);
				printf("\n");
				for(i=n-1 ; i>=1 ; i--){
					for(j=1 ; j<=n-i ; j++)printf(" ");
					for(j=1 ; j<=i ; j++){
						printf("%d ", i);
					}
					printf("\n");
				}
				printf("\n");
				break;
			case 2:
				scanf("%d", &n);
				for(i = 1 ; i<=n ; i++){
					for(j=1 ; j<=i ; j++)
						printf("%d ", i);
					printf("\n");
				}
				printf("\n");
				break;
			case 3:
				scanf("%d", &n);
				for(i=1 ; i<=n ; i++){
					for(j=1 ; j<=n-i ; j++)printf(" ");
					for(j=1 ; j<=i ; j++){
						printf("%d ", i);
					}
					printf("\n");
				}
				break;
			case 4:
				scanf("%d", &n);
				for(i=n ; i>=2 ; i--){
					for(j=1 ; j<=n-i ; j++)printf(" ");
					for(j=1 ; j<=i ; j++){
							printf("%d ", i);
					}
					printf("\n");
				}
				for(i=1 ; i<=n ; i++){
					for(j=1 ; j<=n-i ; j++)printf(" ");
					for(j=1 ; j<=i ; j++){
						printf("%d ", i);
					}
					printf("\n");
				}
				printf("\n");
				break;
		}
		scanf("%d", &x);
	}
	return 0;
}


