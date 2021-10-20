/*8557. 猴子选大王(链表)*/


#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int m;   
	int n; 
	int mon[1000] = { 0 };     
	
	
	cin >> m;
	cin >> n;
	int num = m;
	int k = 0;

	while (num != 1)
	{
		for (int i = 1; i <= n;)
		{
			if (i != n)
			{
				if (mon[k] == 1)	k++;
				else
				{
					i++; k++;}
			}
			else
			{
				if (mon[k] == 1)	k++;
				else
				{
					mon[k] = 1;
					break;	}
			}
			if (k >= m)
				k -= m;
		}
		num--;
	}


	for (int i = 0; i < m; i++)
	{
		if (mon[i] == 0)
			cout << i + 1;
	}

	return 0;
}
