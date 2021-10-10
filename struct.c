#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
/*
struct XXX //(所写变量名)
{
member-list   //(成员列表)


}variable-list   //变量列表
*/
//struct结构体关键字	Stu结构体标签	struct Stu结构体类型

//struct Stu {
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];//成员变量
//}s1, s2, s3;//全局变量，不宜写
//typedef struct Stu {//typedef重新将struct Stu 取名为Stu
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];//成员变量
//}Stu;//使用此方法可以直接用Stu创建结构体//Stu是类型
//int main() {
//	struct Stu s;//局部变量	
//	s.age = 50;
//	Stu s2 = { "张三",20,"12345678912","nan" };
//	return 0;
//}
//typedef struct S
//{
//	int a;
//	int b;
//	char s[5];
//}S;
//struct T
//{
//	int s;
//	S n;//结构体的成员可以是结构体S
//	char* pc;
//};
//int main() {
//	char k = '5';
//	struct T t = { 10,{1,2,"哈哈"},&k};
//	printf("%d\n", t.n.b);
//	return 0;
//}
typedef struct Stu {
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;
//void print1(Stu tmp) {//传参，将下方sl的结构体成员变量给予tmp
//	printf("name :%s\n", tmp.name);
//	printf("age :%d\n", tmp.age);
//}
//void print2(Stu* tem_p) {//传址
//	printf("name :%s\n", tem_p->name);//指向name
//}
//int main() {
//	Stu sl = {"张三",20,"18888888888","男"};
//	print1(sl);
//	print2(&sl);//此方法不需要另外开辟临时空间，更好
//	return 0;
//}
int add(int x, int y) {
	return (x + y);
}
int main() {
	int a = 5;
	int b = 10;
	int ret = add(a, b);//传参时先传B再传A//函数栈帧的创建与销毁

	return 0;
}
//栈区：局部变量，函数形式参数，函数调用
//堆区：动态内存分配，free/malloc,realloc,calloc
//静态区：全局变量，静态变量
