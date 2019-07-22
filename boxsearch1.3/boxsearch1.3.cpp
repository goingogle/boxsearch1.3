#include <iostream>
#include"ballnum.h"
using namespace std;

void boxsearch(double x[9], double y[9],double z[9],double r[9]);
/*球的数据是我手动输入，并不会生成填满整个盒子的球，暂时以10个球为样本。
10个球的参数规则为：x[1],y[1],z[1],r[1]为10组数据中最小的，x[10],y[10],z[10],r[10]为10组数据中最大的，其余的球的数据会介于
前面两组数据之间，随意输入*/
int main()
{
	//自己定义球的数据
	double x[9] = {};
	double y[9] = {};
	double z[9] = {};
	double r[9] = {};
	boxsearch( x[9], y[9],  z[9],  r[9]);
	
	return 0;
}

void boxsearch(double x[9], double y[9], double z[9], double r[9])
{
	//整理盒子信息
	double h_box = 2 * r[10];
	int m_layer = 2 + floor((z[10] - z[1]) / h_box);
	int m_row = 2 + floor((y[10] - y[1]) / h_box);
	int m_column = 2 + floor((x[10] - x[10]) / h_box);
	int m_Box = m_layer * m_row * m_column;
	cout << "***共有" << m_Box << "个盒子***" << endl;
	//有几层几行几列盒子，三者乘积即为盒子总数
	int ball[9][9][9];
		for (int layer = 0; layer < m_layer; ++layer)
		{
			for (int row = 0; row < m_row; ++row)
			{
				for (int column = 0,i=0; column < m_column; ++column,++i)
				{
					ball[layer][row][column] = { i };
				}
			}
		}//给盒子信息分配内存
	/*for (int layer = 0; layer < m_layer; ++layer)
	{
		for (int row = 0; row <m_row; ++row)
		{
			for (int column = 0, itemp = 1; column < m_column; ++itemp, ++column)
			{
				m_pBox[itemp].L = layer;
				m_pBox[itemp].R = row;
				m_pBox[itemp].C = column;
			}
		}
	}*/

	//整理球信息
	Ball* m_pBall = new Ball[10];
	for (int i = 0; i <10; ++i)
	{
		m_pBall[i].bx = x[i];
		m_pBall[i].by = y[i];
		m_pBall[i].bz = z[i];
		m_pBall[i].br = r[i];
	}

	//接触对
	boxANDball* m_pboxANDball = nullptr;

} 