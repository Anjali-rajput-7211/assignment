#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "enter the number:";
    cin >> n;
    if(n%4==0 && n%8!=0){
        cout << "the number is the divisible by 4 but not by 8";
    }
    else{
        cout << "the number does not satisfy the condition";
    }
}