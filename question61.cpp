#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout << "enter an integer:";
    cin >> num;
    int count = 0;
    int p = 2;

    while(p<num){
        if (num % p == 0){
            count++;
        }
        p++;
    }
    if(count==0){
        cout << "prime";
    } 
    else
        cout << "not prime";
}