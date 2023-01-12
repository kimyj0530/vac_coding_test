#include <stdio.h>
int main() {
	int a, b, sum = 0;
	scanf("%d %d", &a, &b);
	for(int i=a; i<b; i++){
		printf("%d + ", i);
		sum += i;
	}
	printf("%d = ", b);
	printf("%d", sum+b);
	
	return 0;
}
