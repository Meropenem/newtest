#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() {
//	int a = 10;
//	int* p = &a;//ָ�����
//	return 0;
//}
//int main() {
////	printf("%d\n",sizeof(int*));
////	printf("%d\n",sizeof(char*));
////	printf("%d\n",sizeof(double*));
////	printf("%d\n",sizeof(short*));
////����32λ�����£�����ָ�������Ϊ4�ֽ�
//	int a = 0x11223344;
//	int* pa = &a;
//	//*pa = 0;//��ı��ֽ�����������
//	char* pc = &a;
//	*pc = 0;//�����ı�һ���ֽڵ�����,�����ò�����ͬ������йأ�����ָ�����Ͷ�����������ò���ʱ���ܷ��ʵĿռ��С
//	//char* pb = &a;
//	//printf("%p\n", pa);
//	//printf("%p\n", pb);//���������
//	return 0;}
//int main() {
//	int a = 10;
//	int* pa = &a;
//	char* pb = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);//+�ĸ��ֽ�
//	printf("%p\n", pb);
//	printf("%p\n", pb+1);//+һ���ֽ�
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
//Ұָ��
//int main() {
//	int a;//�ֲ���������ʼ��Ĭ�����ֵ
//	int* p;//ָ�벻��ʼ�������ֵ����Ұָ�룬����������������
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
//}//ָ��Խ��Ҳ�����Ұָ��
//int* test() {
//	int a = 10;
//	return &a;
//}
//int main() {
//	int *p = test();//����a��ַʱ��a���������٣��ռ䱻�ͷţ�pָ���ΪҰָ��
//	return 0;
//}//tips 1.ָ�����ʼ�� 2.��ָֹ��Խ�� 3.ʹ��ǰ���ָ����Ч�� 4.�ռ��ͷż���ΪNULL
//int main() {
//	int a[10] = { 0 };
//	int i = 0;
//	int* p = &a;
//	for (i = 0; i <= 12; i++) {
//		*p = i;
//		i++;
//	}
//	return 0;//ָ��Խ��
//}
//int main() {
//	int a = 5;
//	int* pa = &a;
//	int *p = NULL;//ʵ���޷���ŵ�ַ������ָ���ÿ�
//	return 0;
//}
//ָ������㣺1.ָ��ļӼ����� 2.ָ��+-ָ�� 3.ָ���ϵ����
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
//int main() {//ָ�������ָ��ͬһ�ռ䣩����Ԫ�ؼ�ĸ���
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[5] - &arr[8]);
//}
//int my_strlen(char* str) {//ע����׼��ָ�����ָ�������������һ�����ڴ����Ϊ���Ƚϣ����ǲ�����ָ�����������һ�����ڴ��ǰһλ���бȽ�
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
//	int arr[10] = { 0 };//һ��ȡarr����ȡ�����׸�Ԫ�صĵ�ַ��������������
//	//1.sizeofȡ������ַ
//	//2.&������
//	printf("%p\n", arr);//ȡ�׵�ַ
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr);//ȡ����Ԫ�صĵ�ַ
//	printf("%p\n", &arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	return 0;
//}
//int main() {//��ָ��������ʹ��
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%p ======== %p\n", p + i, &arr[i]);
//		printf("%d\n", *(p + i));
//	}
//	return 0;
//}
//int main() {//����ָ��
//	int a = 10;
//	int* p = &a;
//	int** pp = &p;//����ָ�루�洢ָ��λ�õ�ָ�룩��������**,��һ��*��ʾ���������Ϊָ�룬ǰ*��ʾ��ָ�������Ϊint*��
//	printf("%d\n", **pp);
//	return 0;
//}
//ָ������(���ָ�������)
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