#include <iostream>
using namespace std;

int c = 0; 

int DigCnt(int n)
{
    if (n == 0)
    return c;
    else
    {
        c++;
        DigCnt(n/10);
    }
}

int main()
{
    int num;
    cout << " Enter a number "<< endl;
    cin >> num;
    int cnt = DigCnt(num);
    cout << cnt;
    return 0;
}
