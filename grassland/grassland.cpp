// kobe.cpp : �������̨Ӧ�ó������ڵ㡣
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
		cout << "���������" << endl;
	}
	void valvex(int val)
	{
		x = val;
		cout << "����ĺ�ˮ" << endl;
	}
	int valve()
	{
		return x;
		cout << "���̵Ĳ�ԭ" << endl;
	}
	void display()
	{
		cout << "�����ҵļҰ�Ү " << endl;
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
		cout << "   ����~" << endl;
	}
	MAMBA.init();
	MAMBA.valvex(123);
	MAMBA.valvex(5);
	MAMBA.display();
	return 0;
}
