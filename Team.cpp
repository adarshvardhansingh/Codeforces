#include <iostream>
using namespace std;
int main()
{
    int num, i, a, b, c;
    int sum = 0;
    cin >> num;
    for (i = 0; i < num; i++)
    {
        cin >> a >> b >> c;
        if ((a + b + c >= 2))
        {
            sum = sum + 1;
        }
    }
    cout << sum;
    return 0;
}