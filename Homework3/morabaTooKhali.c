#include <stdio.h>

int main()
{
 	int a,b,i=0,j=0;
 	scanf("%d", &a);
 	scanf("%d", &b);
 	if(a<= b){
 		printf("Wrong order!");
	}else if ((a-b)%2 == 0){
		int k = (a-b)/2;
		for(i; i<a;i++){
			for(j = 0; j<a ;j++){
				if(j < k || j>= a-k){
					printf("* ");
				}else{	
					if(i>= k && i<a-k){
						printf("  ");
					}else{
						printf("* ");
					}
				}
			}
			printf("\n");
		}	
	}else{
		printf("Wrong difference!");
	}
    return 0;
}



