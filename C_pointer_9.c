#include <stdio.h>

int main(void)
{
	char name[30];
	char* a = name;

	printf("�̸��� �Է��ϼ���. : ");
	scanf_s("%s", name, sizeof(name));
	
	printf("����� �̸��� %s�Դϴ�.\n", a);

	return 0;
}