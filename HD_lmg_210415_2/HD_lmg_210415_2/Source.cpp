#include<stdio.h>
void main() {

	int a = 0;

	while(1){
		printf("1~9의 수를 입력하면 구구단이 출력됩니다.\n0을 입력하면 프로그램이 종료됩니다.\n");
		scanf_s("%d", &a);

		if (a == 0) {
			printf("\n프로그램 종료!\n");
			break;
		}

		else if (a >= 1 && a <= 9) {
			int i = 1;
			while (i < 10) {
				printf("%d * %d = %d\n", a, i, a * i);
					i++;
			}
			printf("\n\n");
		}

		else {
			printf("\nError\n");
			continue;
		}

	}

	fgetc(stdin);
}