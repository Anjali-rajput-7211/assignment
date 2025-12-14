#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1, s2;
    cout << "enter the first string:";
    cin >> s1;
    cout << "enter the second string :";
    cin >> s2;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    for (int i = 0; i < s1.size() || i < s2.size();i++){
        if(s1[i] != s2[i]){
            cout << "not anagram";
        }
        else
            cout << "anagram";
    }
    
}