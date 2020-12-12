#include<stdio.h>
#include<math.h>

int main(){
	int i=0, num, newNum=0;
	scanf("%d",&num);
	while(num != 0){
		int x = num%10;
		num /= 10;
		if(x%2 == 0){
			newNum += x*pow(10,i); 
			i++;
		}	
	}
	printf("%d",newNum);	
}

