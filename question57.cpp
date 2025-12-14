#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout << "enter the number:";
    cin >> num;

    if(num%10==0){
        cout << "the number is a multiple of 10" << endl;
    }
    else
    {
        cout << "the number is not a multiple of 10" << endl;
    }
    return 0;
}