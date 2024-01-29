#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int i;
        for(i=1;i<=n;i++)
        {
            if(n%i!=0)
            break;
        }
        if(n==1)
        cout<<1<<endl;
        else
        cout<<i-1<<endl;
    }
}