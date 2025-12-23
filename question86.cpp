#include<bits/stdc++.h>
using namespace std;
int main(){
    float n;
    cout << "enter the number:";
    cin >> n;
    float sqrt = n / 2;

    for (int i = 0; i < 10; i++){
        sqrt = (sqrt + n / sqrt) / 2;
    }
    cout << sqrt;
    return 0;
}