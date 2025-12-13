#include<bits/stdc++.h>
using namespace std;
int main(){
        int a, b, temp;
        cout << "enter the first number:";
        cin >> a;
        cout << "enter the second number :";
        cin >> b;
        cout << "before swapping:a=" << a << "b=" << b << endl;
        temp = a;
        a = b;
        b=temp;
        cout << "after swapping:a=" << a << ",b=" << b << endl;
        return 0;
}   