#include <iostream>
using namespace std;

int get_1(char* a)//²¹Âë
{
	for (int i = 15; i >= 0; i--)
	{
		if (a[i] == '0') 	a[i] = '1';
		else   a[i] = '0';
	}
	a[15] += ('1' - '0');
	for (int i = 15; i >= 0; i--)
	{
		if (a[i] == '2')
		{   a[i] = '0';
			a[i - 1] += ('1' - '0');
		}
	}
	return 0;
}
int get_2(int a, int b)//Ãİ
{
	int c = 1;
	while (b--)
		c = c * a;
	return c;
}
int transport(char* a)
{
	int ve = 0;
	if (a[0]== '0')
	{
		for (int i = 15; i >= 0; i--)
		{
			if (a[i] == '1')
				ve += get_2(2, 15 - i);
		}
	}
	else
	{
		get_1(a);
		for (int i = 15; i > 0; i--)
		{
			if (a[i] == '1')
				ve += get_2(2, 15 - i);
		}
		ve = 0 - ve;
	}
	return ve;
}

int main()
{
	char a[17];

	cin.get(a, 17);

	cout << transport(a) << endl;
	return 0;
}
