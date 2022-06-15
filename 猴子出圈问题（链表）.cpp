#include<iostream>
#include<iomanip>
using namespace std;
struct J
{
	int code;
	J* next;
};
J* Create(int);
void Out(J*, int, int);
/*
*/
int main()
{
	J* head;
	int num, val;
	cin >> num;
	head = Create(num);
	/**/
	cin >> val;
	Out(head, 1, val);
}
J* Create(int n) {
	J* h, * p;
	int i;
	h = new J;
	p = h;
	for (i = 1; i <= n; i++)
	{
		p->code = 1;
		if (i < n)
		{
			p->next = new J; p = p->next;
		}
	}
	p->next = h;
	return h;
}

void Out(J* h, int i, int d)
{
	J* p, * q;
	int k;
	p = h;
	for (q = h; q->next != h; q = q->next);
	for (k = 1; k < i; k++)
	{
		q = p;
		p = p->next;
	}
	while (p != p->next)
	{
		for (k = 1; k < d; k++)
		{
			q = p;
			p = p->next;
		}
		q->next = p->next;
		delete p;
		p = NULL;
		p = q->next;
	}
	cout << p->code;
}

