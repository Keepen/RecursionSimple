#include <stdio.h>
#include <stdlib.h>
//�ݹ���׳�
int fac(int num) {
	if (num == 1) {
		return 1;
	}
	return num * fac(num - 1);	
}

/*if (num != 1) {
		return num * fac(num - 1);
	}
	return 1;*/


int main() {
	int num = 5;
	fac(num);
	printf("%d\n", fac(num));
	system("pause");
	return 0;
}