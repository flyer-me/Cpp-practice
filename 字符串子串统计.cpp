#include<iostream>
using namespace std;
int main()
{
    int A[200];
    int Func(int* A, int nSize);

    int i = 0;
    char c;
    cin >> A[i++];
    while ((c = getchar()) != '\n')
    {
        cin >> A[i++];
    }
    for (int j = 0; j < i; j++)
    {
        cout << "a[" << j << "]:" << A[j] << endl;
    }


}
int Func(int* A, int nSize)
{

}