#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
/*
struct XXX //(��д������)
{
member-list   //(��Ա�б�)


}variable-list   //�����б�
*/
//struct�ṹ��ؼ���	Stu�ṹ���ǩ	struct Stu�ṹ������

//struct Stu {
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];//��Ա����
//}s1, s2, s3;//ȫ�ֱ���������д
//typedef struct Stu {//typedef���½�struct Stu ȡ��ΪStu
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];//��Ա����
//}Stu;//ʹ�ô˷�������ֱ����Stu�����ṹ��//Stu������
//int main() {
//	struct Stu s;//�ֲ�����	
//	s.age = 50;
//	Stu s2 = { "����",20,"12345678912","nan" };
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
//	S n;//�ṹ��ĳ�Ա�����ǽṹ��S
//	char* pc;
//};
//int main() {
//	char k = '5';
//	struct T t = { 10,{1,2,"����"},&k};
//	printf("%d\n", t.n.b);
//	return 0;
//}
typedef struct Stu {
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;
//void print1(Stu tmp) {//���Σ����·�sl�Ľṹ���Ա��������tmp
//	printf("name :%s\n", tmp.name);
//	printf("age :%d\n", tmp.age);
//}
//void print2(Stu* tem_p) {//��ַ
//	printf("name :%s\n", tem_p->name);//ָ��name
//}
//int main() {
//	Stu sl = {"����",20,"18888888888","��"};
//	print1(sl);
//	print2(&sl);//�˷�������Ҫ���⿪����ʱ�ռ䣬����
//	return 0;
//}
int add(int x, int y) {
	return (x + y);
}
int main() {
	int a = 5;
	int b = 10;
	int ret = add(a, b);//����ʱ�ȴ�B�ٴ�A//����ջ֡�Ĵ���������

	return 0;
}
//ջ�����ֲ�������������ʽ��������������
//��������̬�ڴ���䣬free/malloc,realloc,calloc
//��̬����ȫ�ֱ�������̬����
