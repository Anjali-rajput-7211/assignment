#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i<6; i++){
        if(n%2!=0){
            sum = sum + n;
        }
    }
    cout << sum;
    return 0;
}