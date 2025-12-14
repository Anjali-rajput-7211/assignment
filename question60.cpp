#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1, n2, n3, n4, n5, n6;
    cout << "enter the number:";
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6;
    int largest = n1;
    if(n2>largest){
        largest = n2;
    }
    if(n3>largest){
        largest = n3;
    }
    if(n4>largest){
        largest = n4;
    }
    if(n5>largest){
        largest = n5;
    }
    else
        largest = n6;
    cout <<"largest"<< largest;
}