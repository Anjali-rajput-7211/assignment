#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "enter the number";
    cin >> n;
    if(n==0){
        cout << "zero";
    }
    else if(n%2==0){
        cout << "even";
    }
    else
        cout << "odd";
    return 0;
}