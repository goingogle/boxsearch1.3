#include<iostream>
using namespace std;

class Ball
{
public:
	double bx, by, bz,br;
	Ball()
	{
		bx = 0.0;
		by = 0.0;
		bz = 0.0;
		br = 0.0;
	}~Ball() { cout << "�������ڴ����ͷ�" << endl; }
};

class Box
{
public:
	int L, R, C;
	Box()
	{
		L = 0;
		R = 0;
		C = 0;
	}~Box() { cout << "������Ϣ�ڴ����ͷ�" << endl; }

};

class boxANDball
{
public:
	int ix, iy, iz;
	boxANDball* pNext;
	boxANDball()
	{
		ix = 0;
		iy = 0;
		iz = 0;
		pNext = nullptr;
	}~boxANDball() { cout << "�Ӵ�����Ϣ�ڴ����ͷ�" << endl; }
};