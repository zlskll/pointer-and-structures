#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//������һ����ͬ����Ԫ�صļ���
//���ṹ��Ҳ��һЩֵ�ļ��ϣ������Ϳ��Բ�ͬ

//�ṹ��Ķ��壺
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
}st = { {'c',6,6.0}, "�����", 6, "��" };

void print1(struct Stu st) {
	printf("%s %d %s\n", st.name, st.number, st.sex);
}
void print2(struct Stu* ps) {
	printf("%c %s %s\n", ps->sb.c, ps->name, ps->sex);
}
//���ʽṹ���Ա���õ������.
int main() {
	printf("%s %d %s\n", st.name, st.number, st.sex);
	//�ṹ��ָ�룺�ö���һ��ָ��ṹ���ָ��(ָ���С֮��4�ֽڻ�8�ֽ�)
	struct Stu* ps = &st;//psָ����st�������ͷֱ��ָ��Ա�Ϳ�����
	printf("%c %s %s\n", ps->sb.c,ps->name,ps->sex);
	
	//��ֵ���ã�
	print1(st);
	//��ַ���ã�����һ�㣬��Ϊָ���ʡ�ռ�ʱ��
	print2(ps);
}

