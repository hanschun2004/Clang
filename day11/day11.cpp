#include <stdio.h>

int main() {

	//char coffee[3][20] = {};
	//printf("input menu: ");
	//scanf("%s", &coffee[0]);
	//for (int i = 0; i < 1; i++) {
	//	printf("%s",(*(*coffee + i)));
	//}
	//

	char coffee[3][20] = {};
	for (int i = 0; i < 3; i++) {
		printf("메뉴 입력:");
		scanf_s("%s", coffee[i]);

	}

	char(*pc)[20];
	for (int i = 0; i < 3; i++) {
		pc = &coffee[i];
		printf("%d번째 메뉴 : %s\n", i, pc);
	}

	int a = 10;
	int b = 20;
	int* pt;
	int** ppt;
	pt = &a;
	ppt = &pt;
	printf("**ppt: %d\n", **ppt);

	pt = &b;
	printf("**ppt: %d\n", **ppt);








	return 0;
}