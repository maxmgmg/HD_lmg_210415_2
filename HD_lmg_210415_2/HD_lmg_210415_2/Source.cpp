#include<stdio.h>
void main() {

	int a = 0;

	while(1){
		printf("1~9�� ���� �Է��ϸ� �������� ��µ˴ϴ�.\n0�� �Է��ϸ� ���α׷��� ����˴ϴ�.\n");
		scanf_s("%d", &a);

		if (a == 0) {
			printf("\n���α׷� ����!\n");
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