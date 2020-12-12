#include <stdio.h>

int main()
{
 	int n,i=0,j=1,x=0,y=0;
 	scanf("%d", &n);
 	for(i=0 ;i<n-1 ;i++){
 		int k = i%4;
 		switch(k){
		 	case 0:
 				x += j;
 				break;
 			case 1:
 				y += j;
 				break;
 			case 2:
 				x *= -1;
 				break;
 			case 3:
 				y *= -1;
 				j+=2;
		}
	 }
	 printf("%d %d",x,y);
    return 0;
}



