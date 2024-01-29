#include <bits/stdc++.h>
using namespace std;
int main(){
    double n,k;
    cin>>n>>k;
    double a = ceil(n/2);
    if(k<=a)
    {
        cout<< 1 + (k-1)*2<<endl;
    }
    else cout<< 2 + (k-a-1)*2<<endl;

}