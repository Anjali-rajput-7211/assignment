#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cout << "enter the two number:";
    cin >> n >> m;
    int i = 2;
    int ans = 1;
    while(m>1 && n>1){
        if(m%i==0 && n%i==0){
            m = m / i;
            n = m / i;
            ans = ans * i;
        }
        else{
            if(m%i==0 || n%i==0){
                if(m%i==0) m = m / i;
                if(n%i==0)n = n / i;
            }
            else
                i++;
        }
    }
    cout << ans;
}
