#include <stdio.h>
#include <stdlib.h>
//�ݹ����ַ����ĳ��ȣ�


int lenth(const char* str){
	if (*str == '\0') {
		return 0;
	}
	return 1+lenth(str + 1);
}

int main() {
	char* str = "abcde ghjg";
	int len = lenth(str);
	printf("�ַ�������Ϊ%d\n", len);
	system("pause");
	return 0;
}