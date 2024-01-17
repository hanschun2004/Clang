#include <stdio.h>

int add(int x, int y) {
	return x + y;
}

int minus(int x, int y) {
	return x - y;
}

int mul(int x, int y) {
	return x * y;
}

void print_Array(int x[]) {
	for (int i = 0; i < 10; i++) {
		printf("%d", x[i]);
	}
	
}

void swap(int *x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

void swap_char(char* x, char* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}
// tq whssk glaemfdj

int main() {
	//int a = add(10, 20);
	//printf("%d", a);

	//int b = minus(10, 20);
	//printf("%d", b);

	//int c = mul(10, 20);
	//printf("%d", c);

	/*int a[10] = { 1,2,3,4,5,6,7 };
	int b[10] = { 1,2,3,4,5,6,7 };
	print_Array(a);*/

	//int a = 5;
	//int b = 8;
	//printf("a:%d b:%d\n", a, b);
	//swap(&a, &b);
	//printf("a:%d b:%d", a, b);
	

	char a='c';
	char b='d';
	printf("a:%c b:%c\n", a, b);
	swap_char(&a, &b);
	printf("a:%c b:%c", a, b);
	

	return 0;
}





