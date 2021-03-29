//
//#ifdef _MSC_VER
//#define _CRT_SECURE_NO_WARNINGS
//#endif
//#include<stdio.h>
//#include<string.h>
//char msg[100];
//void report_error(const char* error_msg)
//{
//	char msg[80];
//	strncpy(msg, error_msg, sizeof(msg));
//	printf("report_error msg: %s", msg);
//}
//int main()
//{
//	char error_msg[80] = "eroor";
//	report_error(error_msg);
//	printf("main msg: %s", msg);
//}

//2.

//#ifdef _MSC_VER
//#define _CRT_SECURE_NO_WARNINGS
//#endif
//#include <stdio.h>
//#include<string.h>
//char system_msg[100];
//void report_error(const char* error_msg)
//{
//	char default_msg[80] = { 0, };
//	if (error_msg)
//		strncpy(system_msg, error_msg, sizeof(system_msg));
//	else
//		strncpy(system_msg, default_msg, sizeof(system_msg));
//}
//int main()
//{
//	char error_msg[80] = "error";
//	report_error(error_msg);
//	printf("main msg: %s", system_msg);
//}

//3

//#include <stdio.h>
//#include<assert.h>
//
//int diveide(int a, int b)
//{
//	assert(b != 0);
//	return a / b;
//}
//
//void main()
//{
//	printf("%d", diveide(6, 3));
//	printf("%d", diveide(1, 0));
//}

//4

//#include <stdio.h>
//#include <assert.h>
//
//#define StackSize 9
//
//int main()
//{
//	static_assert(StackSize >= 10, "Stack Size Error");
//}
//#include <stdio.h>
//#include <assert.h>
//#include <stddef.h>
//
//typedef struct timer {
//	unsigned char MODE;
//	unsigned long DATA;
//	unsigned long COUNG;
//}timer;
//
//void func(void){
//	assert(offsetof(timer, DATA) == 1);
//}
//
//void main()
//{
//	func();
//}
//
//#include <stdio.h>
//#include <assert.h>
//#include <stddef.h>
//
//typedef struct timer {
//    unsigned char MODE;
//    unsigned long DATA;
//    unsigned long COUNG;
//} timer;
//
//void func(void) {
//    static_assert(offsetof(timer, DATA) == 1,"error");
//}
//
//void main() {
//    func();
//}
//
//#include <stdio.h>
//
//void main()
//{
//
//	int age = 32;
//	if (age >= 18) {
//		printf("18이상입니다");
//	}
//
//	else
//	{
//		printf("18이하입니다");
//	}
//}
//
//#include <stdio.h>
//
//void main()
//{
//	enum { ADULT_AGE = 18 };
//	int age = 32;
//
//	if (age >= ADULT_AGE) {
//		printf("18이상입니다");
//	}
//
//	else {
//		printf("18이하입니다");
//	}
//}

//# include <stdio.h>
//
//int main()
//{
//	char buffer[256];
//
//	fgets(buffer, 256, stdin);
//
//	printf("읽어들인 문자열 %s \n", buffer);
//	return 0;
//}

//# include <stdio.h>
//
//int a, b;
//int  max(a, b)
//
//{
//	if (a > b)
//		printf("%d", a);
//	else
//		printf("%d", b);
//	return 0;
//}
//
//int main()
//{
//	max(1, 2);
//}

//# include <stdio.h>
//
//int  max(int a, int b)
//
//{
//	if (a > b)
//		printf("%d", a);
//
//	else
//		printf("%d", b);
//
//	return 0;
//}
//
//int main()
//{
//	max(1, 2);
//}
//
//# include <stdio.h>
//
//int add(int x, int y, int z) {
//	return x + y + z;
//}
//int main(int argc, char* argv[])
//{
//	int (*fn_ptr) (int, int);
//	fn_ptr = add;
//	printf("%d", fn_ptr(2, 3));
//	return 0;
//}

# include <stdio.h>

int add(int x, int y, int z) {
	return x + y + z;
}
int main(int argc, char* argv[])
{
	int (*fn_ptr) (int, int, int);
	fn_ptr = add;
	printf("%d", fn_ptr(2, 3, 4));
	return 0;
}