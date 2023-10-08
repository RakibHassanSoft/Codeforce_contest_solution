#include <iostream>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if((s[0]=='a'|| s[2]=='c')||(s[0]=='c' && s[2]=='a'))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
