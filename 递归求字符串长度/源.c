#include <stdio.h>
#include <stdlib.h>
//递归求字符串的长度：


int lenth(const char* str){
	if (*str == '\0') {
		return 0;
	}
	return 1+lenth(str + 1);
}

int main() {
	char* str = "abcde ghjg";
	int len = lenth(str);
	printf("字符串长度为%d\n", len);
	system("pause");
	return 0;
}