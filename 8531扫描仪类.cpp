#include<iostream>
using namespace std;
class  PoweredDevice
{ static int p;
public:

	PoweredDevice();
};
int PoweredDevice::p = 0;
PoweredDevice::PoweredDevice()
{
	p++;
	cout << "A new PoweredDevice is constructed.\n";
	cout << "There are " << p << " PoweredDevices in total.\n";
}

class Scanner :virtual public PoweredDevice
{
	static int s;
public:
	Scanner();
};
int Scanner::s = 0;
Scanner::Scanner()
{
	s++;
	cout << "A new Scanner is constructed.\n";
	cout << "There are " << s << " Scanner in total.\n";
}
class Printer :virtual public PoweredDevice
{
	static int pr;
public:
	Printer();
};
int  Printer::pr = 0;
Printer::Printer()
{
	pr++;
	cout << "A new Printer is constructed.\n";
	cout << "There are " << pr << " Printer in total.\n";
}
class Copier :public Scanner, public Printer
{
	static int c;
public:
	
	Copier();
};
int Copier::c = 0;
Copier::Copier()
{
	c++;
	cout << "A new Copier is constructed.\n";
	cout << "There are " << c << " Copiers in total.\n";
}

int main()
{
	char a;
	cin >> a;
	int s[10] = {0};
	int i = 0;
	while (a != 'e')
	{
		switch (a)
		{
		case 's': {Scanner S; s[i] = 1; i++;
			break;
		}
		case 'c': {Copier C; s[i] = 2; i++;
			break;
		}
		case 'p': {Printer P; s[i] = 3; i++;
			break;
		}

		}
		cin >> a;
	}
	if (a == 'e')
	{
		cout << "The devices are:" << endl;
		for (i = 0; s[i] != 0; i++)
		{
			if (s[i] == 1)cout << "Scanner\n";
			if (s[i] == 2)cout << "Copier\n";
			if (s[i] == 3)cout << "Printer\n";
		}
	}

}
