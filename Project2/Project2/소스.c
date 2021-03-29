//#include<stdio.h>
//#define quoteme(x) #x
//int main()
//{
//	printf("%s\n", quoteme(1 + 2));
//	printf("%s \n", "1 + 2");
//}
//#include<stdio.h>
//#define CATTOK(x,y) x##y
//
//int main()
//{
//	int manage;
//	manage = 10;
//	printf("%d \n", CATTOK(1, 2));
//	printf("%d \n", manage);
//}

//#include<stdio.h>
//#define str(s) #s
//#define foo 4
//
//int main()
//{
//	printf("%s \n", str(foo));
//}

//#include<stdio.h>
//#define xstr(s) str(s)
//#define str(s) #s
//#define foo 4
//
//int main()
//{
//	printf("%s \n", xstr(foo));
//}
//#include<stdio.h>
//#define SWAP(x,y) tmp = x; x=y; y=tmp;
//int main()
//{
//	int x = 1, y = 2, z = 0, tmp = 0;
//	if (z != 0)
//	
//		SWAP(x, y);
//	
//	printf("%d %d", x, y);
//}

//#include<stdio.h>
//#define SWAP(x, y) \
//do{\
//tmp = x; \
//x = y; \
//y = tmp; \
//}while(0)
//int main()
//{
//	int x = 1, y = 2, z = 0, tmp = 0;
//	if (z != 0)
//
//		SWAP(x, y);
//
//	printf("%d %d", x, y);
//}

//#include <stdio.h>
//#define ABS(x) (((x)<0)? -(x) : (x))
//
//int main()
//{
//	int n = 0, m = 0;
//	printf("m : %d\n", m);
//	m = ABS(++n);
//	printf("abs(m) : %d", m);
//}

#include <stdio.h>
inline int ABS(int x)
{
	return (((x) < 0) ? -(x) : (x));
}

int main()
{
	int n = 0, m = 0;
	printf("m : %d\n", m);
	m = ABS(++n);
	printf("abs(m) : %d", m);
}