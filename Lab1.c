#include <stdio.h>

int main() {
	int x , y;
	scanf("%d", &x);
	scanf("%d", &y);
	
	if (x > y) {	
		printf("x is greater than y\n");
		printf("%d" , (x - y));
	}
	else {	
		printf("y is greater than x\n");
		printf("%d" , (y - x));
	}
	
	return 0;
}

