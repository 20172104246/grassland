// kobe.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include<iostream>
using namespace std;
class CKOBE
{
private:
	int x;
	int y;
public:
	CKOBE()
	{
		x = 536785201;
		y = 175351730;
	}
	void init(int xx = 5555, int yy = 6666)
	{
		x = xx;
		y = yy;
		cout << "蓝蓝的天空" << endl;
	}
	void valvex(int val)
	{
		x = val;
		cout << "清清的湖水" << endl;
	}
	int valve()
	{
		return x;
		cout << "绿绿的草原" << endl;
	}
	void display()
	{
		cout << "这是我的家哎耶 " << endl;
	}
	int getx()
	{
		return x;
	}
	int gety()
	{
		return y;
	}
};
int main()
{
	int x, y;
	cin >> x >> y;
	CKOBE MAMBA;
	if (x < MAMBA.getx())
	{
		cout << "   天堂~" << endl;
	}
	MAMBA.init();
	MAMBA.valvex(123);
	MAMBA.valvex(5);
	MAMBA.display();
	return 0;
}
