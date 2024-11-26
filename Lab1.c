#include <stdio.h>

int main() {
	int x , y;
	scanf("%d", x);
	scanf("%d", y);
	
	if (x > y) {	
		printf("x is greater than y");
		printf("%d \n" , (x - y));
	}
	else {	
		printf("y is greater than x");
		printf("%d \n" , (y - x));
	}
	
	return 0;
}

