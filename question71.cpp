#include <bits/stdc++.h>
using namespace std;

int main()
{
    double num, sum = 0;

    cout << "Enter the float number: ";
    cin >> num;

    for (int i = 0; i < 7; i++)
    {
        sum += num;
    }

    double average = sum / 7;

    cout << fixed << setprecision(2) << average << endl;

    return 0;
}
