#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int* test() {
	int a = 10;
	return &a;
}
int main() {
	//һ���ֽڴ�С��ָ��ֻ�ܷ���һ��
	/*int a = 0x11223344;
	int i = 0;
	char* pa = &a;
	for (i = 0; i < 4; i++) {
		*(pa+i) = 0;
	}*/

	//
	/*int arr[10] = { 0 };
	int* p = arr;
	char* pa = arr;
	printf("%p\n", p + 1);
	printf("%p\n", pa + 1);*/

	//����Խ����ʣ���������
	/*int arr[10] = { 0 };
	for (int i = 0; i <= 10; i++) {
		arr[i] = 6;
	}*/

	//ָ��ָ��Ŀռ��ͷ�/������
	//int* p = test();
	//*p = 20;
	//printf("%d", *p);//��Ȼû�б���û�о��棿VS2022���£�

	//Ϊ�˹��Ұָ�룬Ҫ���ָ����Ч��
	//if(p!=NULL){
	// *p=10;
	// }
	
	//ָ������
	//ָ�룫����:��ʾָ���ŵĵ�ַ�Ӽ�
	/*float values[5];
	float* vp=&values[0];
	for (vp = &values[0]; vp < &values[5]; ) {
		*(vp++) = 0;
	}
	for (size_t i = 0; i < 5; i++) {
		printf("%f\n", values[i]);
	}
	return 0;*/
	 
	//ָ��-ָ�룺��ʾ�м�Ԫ�صĸ���
	//���������Ƕ�ָ��ͬһ���������ڴ�(ͬһ������)
	/*float values[5];
	float* vp1 = &values[0];
	float* vp2 = &values[4];
	int z = vp2 - vp1;
	printf("%d", z);*/

	//ָ��������
	//һЩ�ȼ۵ı�ʾ��ʽ
	//*(p+2)=*(2+p)=*(arr+2)=*(2+arr)=2[arr]

	//һ��ָ�룬����ָ��
	int a = 10;
	int* pa = &a;
	int** ppa = &pa;
	
	//ָ�����飺����˼����Ǵ��ָ�������
	int* parr[5] = { pa };


}