//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//int main()
//{
//	int a = 2;
//	int b = -1;
//	//b:
//	//10000000000000000000000000000001 - 原码
//	//11111111111111111111111111111110 - 反码
//	//11111111111111111111111111111111 - 补码
//	//16进制为 ff ff ff ff 16进制的1位相当于二进制的4位
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//
// 	return 0;
//}\

//int check_sys()
//{
//	int i = 1;
//	//16进制 00 00 00 01
//	//我们只需要知道它存储在内存中的第一个字节，就可以判断。
//	//1、如果是小端存储 低地址处的第一个字节位01  -低地址  01 00 00 00  高地址
//	//2、如果是大端存储 低地址处的第一个字节位00  -低地址  00 00 00 01  高地址
//	//怎样只取第一个字节呢？
//	//可以使用指针，什么类型的指针就只能访问该类型大小的空间
//	//char类型指针只能访问一个字节
//
//	char* p = (char*)&i;//将i的地址强转并赋值给p
//
//	return *p;//对p解引用，访问第一个字节，然后返回其取到的值
//}
//
//
////精简
////int check_sys()
////{
////	int i = 1;
////	return *((char*)&i);
////}
//
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端存储\n");
//	}
//	else
//	{
//		printf("大端存储\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int n = 9;
//	float* pf = (float*)&n;
//	printf("n的值为：%d\n", n);
//	printf("*pf的值为：%f\n", *pf);
//	*pf = 9.0;
//	printf("n的值为：%d\n", n);
//	printf("*pf的值为：%f\n", *pf);
//	return 0;
//}