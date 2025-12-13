#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1, num2, diff;
    cout << "enter the first number:";
    cin >> num1;
    cout << "enter the number:";
    cin >> num2;
    diff = num1 - num2;
    if(diff < 0){
        diff = diff * (-1);
        cout << "the difference of two number is:" << diff;
    }
}