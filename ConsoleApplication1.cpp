// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CFeet {
	int feet;
	double inch;
public:
	CFeet()
	{
		feet = 0;
		inch = 0;
	}
	void setvalue(int F, int I)
	{
		feet = F;
		inch = I;
	}
	void display()
	{
		cout << feet << "  feet  " << inch << "  inch" << endl;
	}
	void meter(double M)
	{
		//3.2808Ft = 1M;
		feet = M * 3.2808;
		inch = (M * 3.2808 - feet)*12;
		if (inch > 12)
		{
			feet += inch / 12;
			inch = inch - (inch / 12) * 12;
		}
	}
	void equal(int F, double I)
	{
		feet += F;
		inch += I;
		if (inch > 12)
		{
			feet += inch / 12;
			inch = inch - (inch /12)*12 ;
		}
	}
};
int main()
{
	CFeet o1;
	o1.display();
	o1.meter(10);
	o1.display();
	o1.setvalue(1, 1);
	o1.display();
	o1.equal(1, 2.123);
	o1.display();
    return 0;
}