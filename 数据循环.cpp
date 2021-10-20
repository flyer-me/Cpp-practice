#include<iostream>
using namespace std;
void move(int* arry, int n, int m)
{
	int b[10] = {0};
	
	for (int i = 0; i < 7; i++) b[i + 3] = *(arry+i);

	for (int i = 7; i < 10; i++) b[i - 7] = *(arry+i);

	for (int i = 0; i < 10; i++) *(arry + i) = b[i];
}

int main()
{
	int a[10];
	for (int i = 0; i < 10; i++) cin >> a[i];
	move(a, 10, 3);
	for (int i = 0; i < 10; i++)
		cout << a[i]<<" ";
}
