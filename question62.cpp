#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "enter number:";
    cin >> n;
    int temp = n;
    int rev = 0;
    while(n>0){
        int last = n % 10;
        rev = rev * 10 + last;
        n = n / 10;
    }
    if(temp==rev){
        cout << "palandrom";
    }
    else
        cout << "not palandrom";
    return 0;
}