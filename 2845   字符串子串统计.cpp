#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char total[20000];
	char sub[20000];
	gets_s(total);
	gets_s(sub);
	char* s = total;
	char* ss = sub;

	int i, j,num=0;
	int total_len = strlen(total) - 1;
	int sub_len = strlen(sub) - 1;

	for (i = 0; i < total_len - sub_len + 1; i++)
	{
		for (j = 0; j < sub_len; j++)
		{
			if (*(ss+j) != *(s+i+j))
			break;
		}
		if (j == sub_len)
		{num++;}
	}
	cout<< num;
	return 0;
}