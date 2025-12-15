#include<bits/stdc++.h>
using namespace std;
int main(){
    int num, sum = 0;
    cout << "enter 10 integers:";
    cin >> num;
    for (int i = 0; i < 10; i++){
        if(num%2==0){
            sum = sum + num;
        }
    }
    cout << "sum of even numbers=" << sum << endl;
    return 0;
}