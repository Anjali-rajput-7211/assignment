#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "enter the number:";
    cin >> n;

    if (n % 7 == 0 || n % 11 == 0)
        cout << "Yes";
    else
        cout << "No";

    return 0;
    
}