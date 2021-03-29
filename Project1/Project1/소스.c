#include<stdio.h>
//#define CUBE(x) ((x)*(x)*(x))
//int main()
//{
//	int i = 2;
//	int a = 81 / CUBE(++i);
//	printf("%d", a);
//}

////2번
//inline int cube(int x) 
//{
//	return x * x * x;
//}
//
//int main()
//{
//	int i = 2;
//	int a = 81 / cube(++i);
//	printf("%d", a);
//}
//int count = 5;
//
//#define EXEC_BUMP(func)(func(),++count)
//#include<stdio.h>
//void g(void)
//{
//	printf("Called g, count =%d\n", count);
//}
//
//void aFunc(void)
//{
//	int count = 0;
//	while (count++ < 10)
//	{
//		printf("%d", count);
//		EXEC_BUMP(g);
//
//	}
//}
//int main(int argc, char* argv[])
//{
//	aFunc();
//	return 0;
//}
////4번
//int count = 0;
//
//#include<stdio.h>
//void g(void)
//{
//	printf("Called g, count =%d\n", count);
//}
//typedef void(*exec_func)(void);
//inline void exec_bump(exec_func f)
//{
//	f();
//	++count;
//}
//void aFunc(void)
//{
//	int count = 0;
//	while (count++ < 10)
//	{
//		printf("%d", count);
//		exec_bump(g);
//
//	}
//}
//int main(int argc, char* argv[])
//{
//	aFunc();
//	return 0;
//}
////5번
//#include<stdio.h>
//#define CUBE(i) ( i *i*i )
//int main()
//{
//	int a = 81 / CUBE(2 + 1);
//	printf("%d",a);
//}
////6번
//#include<stdio.h>
//#define CUBE(i) ( (i) *(i)*(i) )
//int main()
//{
//	int a = 81 / CUBE(2 + 1);
//	printf("%d", a);
//}
//#include <stdio.h>
//#define CUBE(X) (X)*(X)*(X)
//int main()
//{
//	int i = 3;
//
//	int a = 81 / CUBE(i);
//	printf("%d", a);
//}
//7번
#include<stdio.h>
#define EOF -1
int main()
{
	if (getchar() EOF) 
	{
		
	}
}
