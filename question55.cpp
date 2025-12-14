#include<bits/stdc++.h>
using namespace std;
int main(){
    int num, sum = 0;
    cout << "enter 10 integers:" << endl;
    cin >> num;
    for (int i = 1; i <= 10; i++){
        sum = sum + num;
    }
    cout << "the sum of the 10 numbers is:" << sum << endl;
    return 0;
}