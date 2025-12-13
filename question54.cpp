#include<bits/stdtr1c++.h>
using namespace std;
int main(){
    int num;
    cout << "enter an integer:";
    cin >> num;
    if(num%3==0 && num%5==0){
        cout << "yes" << endl;
    }
    else
        cout << "no" << endl;
    return 0;
}