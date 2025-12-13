#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1, str2, temp;

    cout << "enter the first string:";
    cin >> str1;
    cout << "enter the second string:";
    cin >> str2;

    cout << "before swapping :";
    cout << "string1: " << str1 << endl;
    cout << "string2: " << str2 << endl;

    temp = str1;
    str1 = str2;
    str2 = temp;

    cout << "after swapping:";
    cout << "string1 " << str1 << endl;
    cout << "string2 " << str2 << endl;
    return 0;
}