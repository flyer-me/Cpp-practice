#include<iostream>
using namespace std;
class  PoweredDevice
{static int p=0;
	public: 
	
		PoweredDevice();
};
PoweredDevice::PoweredDevice()
{    p++;
cout<<"A new PoweredDevice is constructed.\n";
cout<<"There are "<<p<<" PoweredDevices in total.\n";}

class Scanner:virtual public PoweredDevice
{
	public:
		int s=0;
		Scanner();
};
Scanner::Scanner()
{		s++;
	cout<<"A new Scanner is constructed.\n";
	cout<<"There are "<<s<<" Scanner in total.\n";}
class Printer:virtual public PoweredDevice
{
	public:
		int pr=0;
		Printer();
};
Printer::Printer()
{	pr++;
	cout<<"A new Printer is constructed.\n";
	cout<<"There are "<<pr<<" Printer in total.\n";}
class Copier:public Scanner,public Printer
{
	public:
		int c=0;
		Copier();
};
Copier::Copier()
{	c++;	
cout<<"A new Copier is constructed.\n";
cout<<"There are "<<c<<" Copiers in total.\n";}

int main()
{
	char a;
	cin>>a;
	int s,c,p;
	s=0;c=0;p=0;
	while(a!='e')
	{
		switch(a)
		{
			case 's':{Scanner S;s++;
				break;
			}
			case 'c':{Copier C;c++;
				break;
			}	
			case 'p':{Printer P;p++;
				break;
			}		
				
		}
		cin>>a;
	}
	if(a='e')
	{
		cout<<"The devices are:"<<endl;
		if(s!=0)cout<<"Scanner\n";
		if(c!=0)cout<<"Copier\n";
		if(p!=0)cout<<"Printer\n";
		
	}
	
}
