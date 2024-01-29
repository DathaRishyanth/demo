#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n,k;
    cin>>n>>k;
    long long int a = ceil((double)n/2);
    if(k<=a)
    {
        cout<< 1 + (k-1)*2<<endl;
    }
    else cout<< 2 + (k-a-1)*2<<endl;

}