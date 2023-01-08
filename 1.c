#include<stdio.h>

int main(){
	int a, b, sum=0, i;
	scanf("%d %d", &a, &b);
	for(i=1; i<=a; i++){
		if(i%b==0) sum+=i;
	}
	printf("%d\n", sum);
	return 0;
}
