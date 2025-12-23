#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "enter the number:";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n / 2; i++){
        if(n%i==0){
            sum = sum + i;
        }
    }
    if(sum==n && n!=0){
        cout << "perfect number";
    }
    else
        cout << "not perfect number";
    return 0;
}