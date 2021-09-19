#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() {
//	int a = 5 / 2;
//	printf("%d\n", a);
//	float b = 5 / 2.0;
//	printf("%lf\n", b);
//	//取模%左右操作符必须为整型
//
//	return 0;
//}
//int main() {
//	//右移操作符 >>
//	//移动的是二进制位
//	int a = 16;		//00000000000000000000000000100000
//	int b = a >> 1;	//00000000000000000000000000010000
//	printf("%d\n",b);
//	//算术右移 右边丢弃，左边补齐原符号位
//	//逻辑右移 右边丢弃，左边补0     最高位为符号位，正数为0负数为1
//	int i = -1;//100001>111111(补)>111111>100000>100001
//	//正数中补码补0，负数补码补1
//	int j = i >> 1;//算术右移
//	printf("%d\n", j);
//	return 0;
//
//}
//int main() {
//	//左移运算符<<
//	int i = 1;//000001>011110>011100>000011
//	int j = i << 1;//符号位不动，补码左边抛弃右边补符号位
//	int a = -1;//100001  > 111110 >111101>100010
//	int b = a << 1;//所有负移位操作符都是未定义的，视为error报错
//	printf("%d,%d\n",j, b);
//	return 0;
//}
//int main() {
//	//按位与& 或| 异或^
//	int a = 3;   //000011
//	int b = 5;	 //000101
//	printf("%d\n", a & b);//000001
//	printf("%d\n", a | b);//000111
//	printf("%d\n", a ^ b);//000110
//	return 0;
//}
//int main() {
//	int a = 10;//1010
//	int b = 5;//0101
//	//a = a ^ b;//1111
//	//b = a ^ b;//1010
//	//a = a ^ b;//0101
//	//a = a + b;//15   //加减法受整型范围限制可能会溢出
//	//b = a - b;//10
//	//a = a - b;//5
//	//printf("%d,%d\n",a, b);
//	//return 0;
//}
//int main() {
//	int i = 5;
//	int* p = &i;
//	printf("%d\n", *p);
//
//	return 0;
//}
//int main() {
//	int count = 0;
//	int num1 = 0;
//	scanf("%d", &num1);
//	//while (num1 != 0) {
//	//	count = count + num1 % 2;
//	//	num1 /= 2;
//	//}
//	int i = 0;
//	for (i = 0; i < 32; i++) {
//		count += (num1 >> i) & 1;
//	}
//	printf("%d\n", count);
//}
//双目操作符
// ! & sizeof - 
//int main() {
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = 5 + a));
//	printf("%d\n", s);
//	return 0;
//}
//int main() {
//	int a = 0;
//	//~按位取反     00000 >  00000(补码) >~ 11111 （补码按位取反）>  111110（全部取反） > 10001
// 	printf("%d\n", ~a);
//	return 0;
//}
//int main() {
//	//三目操作符
//	int a = 5;
//	int b = 10;
//	int max;
//	max = (a > b ? a:b);//将最大值给予max
//	//逗号表达式
//	int x = 5;
//	int y = 10;
//	int z = (x<y,x = x+10,y = y+5,x-y);//并且改变x y 的值
//	printf("%d\n", z);
//	return 0;
//}



//int get_max(int x,int y) {
//	return(x > y ?  x: y);
//
//}
//int main() {
//	int a = 5;
//	int b = 10;
//	int max = get_max(a, b);
//	//调用函数的()也是操作符，但定义函数的()不是,其中get_max,a,b皆为操作数
//
//}

//结构体
//Stu是一个创建出来的类型，需要用他创建变量
struct Stu
{
	char name[20];
	int age;
	char id[20];

};
//定义结构体时需要分号结束
//创建结构体类型 - struct Stu
//int main() {
//	struct Stu s1 = {"张三",20,"20210918"};//使用struct Stu创建类型为Stu的变量s1,定义其属性时候用{}填入
//	printf("%s\n", s1.name);//用.来标识结构体s1中的属性name (结构体变量.成员名)
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//	struct Stu* sp = &s1;//定义结构体指针 struct Stu* XXXX = &XXXX;
//	printf("%s\n", (*sp).name);//(*sp)是一个整体，进行运算的优先度不够，会将其定义成*(sp.name)，所以需要括号
//	printf("%d\n", (*sp).age);
//	printf("%d\n", sp->age);//指针sp指向age ，另一种表达形式且直观
//	return 0;
//}
//int main() {
//	//隐式类型转换
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011 因转换类型被截断
//	char b = 127;
//	//同理 01111111
//	char c = a + b;
//	//00000011
//	//01111111
//	//10000010
//	//当要打印%d时，打印整型
//	//11111111111111111111111110000010
//	//减一取反得源码
//	//10000000000000000000000001111110
//	printf("%d,%d,%d", a, b, c);
//	return 0;
//}
//int main() {
//	char a = 0xb6;//0x表示16位数 0开头表示8位
//	if (a == 0xb6) {//10110110
//		//a本来是char类型，在比较时会进行补位,因为最高位为1，故而会在后补1，而0xb600是int类型，不补位，两者不相等，下同理
//		printf("a");
//	}
//	short b = 0xb600;
//	if (b == 0xb600) {
//		printf("b");//
//	}
//	int c = 0xb60000;
//	if (c == 0xb60000) {
//		printf("c");
//	}
//	return 0;
//}

//int main() {
//	char c = 1;//%u以十进制数输出unsigned型数据(无符号数)
//	//00000001
//	printf("%d\n", sizeof(c));//1
//	printf("%d\n", sizeof(+c));//4  在此发生了类型提升，因为涉及到+（单目操作符）发生运算，变为int类型，输出4
//	printf("%d\n", sizeof(!c));//1  ！是逻辑操作符，不发生类型提升
//	return 0;
//}

//算数转换(寻常算数转换也发生隐式变换)
//操作符优先级/操作符结合性/非法表达式
//int main() {
//	float f = 5.1;
//	int a = f;//类型转换，精度损失
//	printf("%d\n", a);//5
//	int c = 5;
//	c = c + --c;//c先自减一变4，后相加
//	printf("%d\n", c);
//	return 0;
//}

int func() {
	static a = 1;//a不会被销毁
	return ++a;
}
int main() {
	int answer = func() - func() + func();//2-3+4
	printf("%d\n", answer);
	return 0;
}