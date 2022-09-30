#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int* test() {
	int a = 10;
	return &a;
}
int main() {
	//一个字节大小的指针只能访问一个
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

	//数组越界访问，程序会崩溃
	/*int arr[10] = { 0 };
	for (int i = 0; i <= 10; i++) {
		arr[i] = 6;
	}*/

	//指针指向的空间释放/销毁了
	//int* p = test();
	//*p = 20;
	//printf("%d", *p);//竟然没有报错没有警告？VS2022更新？

	//为了规避野指针，要检查指针有效性
	//if(p!=NULL){
	// *p=10;
	// }
	
	//指针运算
	//指针＋整数:表示指针存放的地址加几
	/*float values[5];
	float* vp=&values[0];
	for (vp = &values[0]; vp < &values[5]; ) {
		*(vp++) = 0;
	}
	for (size_t i = 0; i < 5; i++) {
		printf("%f\n", values[i]);
	}
	return 0;*/
	 
	//指针-指针：表示中间元素的个数
	//条件必须是都指着同一块连续的内存(同一个数组)
	/*float values[5];
	float* vp1 = &values[0];
	float* vp2 = &values[4];
	int z = vp2 - vp1;
	printf("%d", z);*/

	//指针与数组
	//一些等价的表示方式
	//*(p+2)=*(2+p)=*(arr+2)=*(2+arr)=2[arr]

	//一级指针，二级指针
	int a = 10;
	int* pa = &a;
	int** ppa = &pa;
	
	//指针数组：顾名思义就是存放指针的数组
	int* parr[5] = { pa };


}