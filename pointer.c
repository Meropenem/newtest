#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() {
//	int a = 10;
//	int* p = &a;//指针变量
//	return 0;
//}
//int main() {
////	printf("%d\n",sizeof(int*));
////	printf("%d\n",sizeof(char*));
////	printf("%d\n",sizeof(double*));
////	printf("%d\n",sizeof(short*));
////处于32位环境下，所有指针变量都为4字节
//	int a = 0x11223344;
//	int* pa = &a;
//	//*pa = 0;//会改变字节内所有内容
//	char* pc = &a;
//	*pc = 0;//仅仅改变一个字节的内容,解引用操作符同定义的有关，定义指针类型定义决定解引用操作时候能访问的空间大小
//	//char* pb = &a;
//	//printf("%p\n", pa);
//	//printf("%p\n", pb);//并不会出错
//	return 0;}
//int main() {
//	int a = 10;
//	int* pa = &a;
//	char* pb = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);//+四个字节
//	printf("%p\n", pb);
//	printf("%p\n", pb+1);//+一个字节
//	return 0;
//}
//int main() {
//	int arr[10] = { 0 };
//	char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		*(p + i) = 1;
//	}
//	return 0;
//}
//野指针
//int main() {
//	int a;//局部变量不初始化默认随机值
//	int* p;//指针不初始化给随机值，即野指针，尽量避免此情况出现
//	return 0;
//}
//int main() {
//	int arr[10] = { 0 };
//	int* p = &arr;
//	int i = 0;
//	for (i = 0; i < 11; i++) {
//		p++;
//	}
//	return 0;
//}//指针越界也会产生野指针
//int* test() {
//	int a = 10;
//	return &a;
//}
//int main() {
//	int *p = test();//传回a地址时，a变量被销毁，空间被释放，p指针变为野指针
//	return 0;
//}//tips 1.指针需初始化 2.防止指针越界 3.使用前检测指针有效性 4.空间释放即设为NULL
//int main() {
//	int a[10] = { 0 };
//	int i = 0;
//	int* p = &a;
//	for (i = 0; i <= 12; i++) {
//		*p = i;
//		i++;
//	}
//	return 0;//指针越界
//}
//int main() {
//	int a = 5;
//	int* pa = &a;
//	int *p = NULL;//实在无法存放地址，即将指针置空
//	return 0;
//}
//指针的运算：1.指针的加减整数 2.指针+-指针 3.指针关系运算
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++) {
//		printf("%d\n", *p);
//		p++;
//	}
//	return 0;
//}
//int main() {//指针相减（指向同一空间），得元素间的个数
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[5] - &arr[8]);
//}
//int my_strlen(char* str) {//注，标准中指针可以指向所在数组最后一个的内存后以为并比较，但是不允许指向所在数组第一个的内存的前一位进行比较
//	char* star = str;
//	char* end = str;
//	while (*end != '\0') {
//		end++;
//	}
//	return (end - star);
//}
//int main() {
//	char arr[] = "helloworld";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//int main() {
//	int arr[10] = { 0 };//一般取arr都是取数组首个元素的地址，但又两个例外
//	//1.sizeof取整个地址
//	//2.&数组名
//	printf("%p\n", arr);//取首地址
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr);//取整个元素的地址
//	printf("%p\n", &arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	return 0;
//}
//int main() {//用指针对数组的使用
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%p ======== %p\n", p + i, &arr[i]);
//		printf("%d\n", *(p + i));
//	}
//	return 0;
//}
//int main() {//二级指针
//	int a = 10;
//	int* p = &a;
//	int** pp = &p;//二级指针（存储指针位置的指针）（定义中**,后一颗*表示定义的类型为指针，前*表示所指向的类型为int*）
//	printf("%d\n", **pp);
//	return 0;
//}
//指针数组(存放指针的数组)
int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	int arr[10] = {0};
	int* arr2[3] = {&a,&b,&c};
	int i = 0;
	for (i = 0; i < 3; i++) {
		printf("%d", *(arr2[i]));
	}

	return 0;
}