#include <stdio.h>

int main(void)
{
	char name[30];
	char* a = name;

	printf("이름을 입력하세요. : ");
	scanf_s("%s", name, sizeof(name)); // 이름 입력받기
	
	printf("당신의 이름은 %s입니다.\n", a); // 이름 출력하기

	return 0;
}
