#include <iostream>

int main(int argc, char* argv[]) {
	int i;
	printf("���� ���ڰ��� : %d\n", argc);
	for (i = 0;i < argc;i++) {
		printf("���� ���� : %c\n", argv[i]);
	}

	return 0;
}