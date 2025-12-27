#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout << "enter the string:";
    cin >> s;
    int count = 0;
    for (auto i :s){
        if(i=='a' || i=='e'|| i=='i' || i=='o' || i=='u'){
            count++;
        }
    }
    cout << count;
}