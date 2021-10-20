#include<iostream>
#include<cmath>
using namespace std;
int  main()
{
    int m,i,k;
    cin >> m;
    if (m < 2) { cout << "N"; return 0; }
   

    k = (int)sqrt((double)m);
    for (i = 2; i <= k; i++)
        if (m % i == 0)  break;

    if (i > k)
        cout << "Y";
    else
        cout << "N";
    return 0;
}
