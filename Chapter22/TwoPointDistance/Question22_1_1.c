#include <stdio.h>

struct employee
{
	char name[20];
	char personNum[16];
	int salary;
};

int main(void)
{
	struct employee emp;

	puts("다음의 내용을 입력 하세요");
	printf("종업원 이름: ");
	scanf_s("%s", emp.name, sizeof(emp.name));
	printf("주민등록번호: ");
	scanf_s("%s", emp.personNum, sizeof(emp.personNum));
	printf("급여정보: ");
	scanf_s("%d", &(emp.salary));

	puts("결과");
	printf("종업원 이름: %s \n", emp.name);
	printf("주민등록번호: %s \n", emp.personNum);
	printf("급여정보: %d \n", emp.salary);
	return 0;
}
