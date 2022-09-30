#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//数组是一组相同类型元素的集合
//而结构体也是一些值的集合，但类型可以不同

//结构体的定义：
struct B {
	char c;
	short s;
	double d;
};
struct Stu {
	struct B sb;
	char name[20];
	int  number;
	char sex[10];
}st = { {'c',6,6.0}, "吴炳锐", 6, "男" };

void print1(struct Stu st) {
	printf("%s %d %s\n", st.name, st.number, st.sex);
}
void print2(struct Stu* ps) {
	printf("%c %s %s\n", ps->sb.c, ps->name, ps->sex);
}
//访问结构体成员：用点操作符.
int main() {
	printf("%s %d %s\n", st.name, st.number, st.sex);
	//结构体指针：用定义一个指向结构体的指针(指针大小之有4字节或8字节)
	struct Stu* ps = &st;//ps指向了st，下面箭头直接指成员就可以了
	printf("%c %s %s\n", ps->sb.c,ps->name,ps->sex);
	
	//传值调用：
	print1(st);
	//传址调用：更好一点，因为指针节省空间时间
	print2(ps);
}

