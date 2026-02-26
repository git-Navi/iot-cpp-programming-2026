#include <stdio.h>

int a;
int global_C = 100;
int func() {
	return 1;
}

int main() {
	int b;
	static int c;
	const int d = 10;
	char arr[20] = "hi";
	char* parr = "hong";

	printf("func     : %p\n", &func);
	printf("global a : %p\n", &a);
	printf("local b  : %p\n", &b);
	printf("global_C : %p\n", &global_C);
	printf("static c : %p\n", &c);
	printf("const d  : %p\n", &d);
	printf("array    : %p\n", arr);
	printf("parr     : %p\n", parr);

	return 0;
}

/*-- 메모리 구조 --*/

/*

	data segment : stack, heap, data
	code segment : s

*/