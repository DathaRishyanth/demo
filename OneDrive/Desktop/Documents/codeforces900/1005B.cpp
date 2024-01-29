    #include <bits/stdc++.h>
    using namespace std;
    int main(){
        string s1,s2;
        cin>>s1>>s2;
        int right1 = s1.length()-1;
        int right2 = s2.length()-1;
        int a  = 0;
        while(s1[right1] == s2[right2] && right1>=0 && right2 >=0)
        {
            a++;
            right1--;
            right2--;
        }
        cout<<s1.length()+s2.length()-2*a<<endl;

    }