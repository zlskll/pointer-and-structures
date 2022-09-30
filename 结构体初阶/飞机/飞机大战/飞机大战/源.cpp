#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<easyx.h>
using namespace std;
class Sprite {
public:
	int x;
	int y;
	IMAGE* img;
	Sprite(int x, int y, int w, int h, const string& path)
	{
		this->x = x;
		this->y = y;
		width = w;
		height = h;
		loading(img, path.data(), w, h);
	}
};
class FightScene {
private:
	int width;
	int height;
public:
	FightScene(int w, int h) {
		width = w;
		height = h;
		//加载图片
		loadimage(&img, "Resourse/images/background.png");

}
	void draw() {
		putimage(0, 0, &img);
	}

};
int main() {
	//创建一个图形窗口
	initgraph(480,852, EX_SHOWCONSOLE);
	//输出图片
	IMAGE img;
	//加载图片
	//输出图片
	putimage(0, 0, &img);
	FightScene fScene(480, 850);
	fScene.draw();
	getchar();
	return 0;
}