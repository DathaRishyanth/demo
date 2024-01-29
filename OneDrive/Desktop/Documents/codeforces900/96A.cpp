#include <bits/stdc++.h>
using namespace std;
 
// function to get the index of s2 in s1
int isSubstring(string s1, string s2)
{
    // using find method to check if s1 is
    // a substring of s2
    if (s2.find(s1) != string::npos)
        return s2.find(s1);
    return -1;
}
 
// Driver code
int main()
{
   string s;
   cin>>s;
 
    // Function Call
    int res = isSubstring( "1111111",s);
    int res1 = isSubstring("0000000",s);
    if (res == -1 && res1 == -1)
        cout << "NO"<<endl;
    else
        cout << "YES " << endl;
    return 0;
}