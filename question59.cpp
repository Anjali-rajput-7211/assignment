#include<bits/stdc++.h>
using namespace std;
int main(){
    int numbers[5];
    cout << "enter 5 numbers:" << endl;

    for (int i = 0; i < 5; i++){
        cin >> numbers[i];
    }
    cout << "the numbers you entered are:" << endl;

    for (int i = 0; i < 5; i++){
        cout << numbers[i];
    }
        cout << endl;
    return 0;
}