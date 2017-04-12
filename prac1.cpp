#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;string s;string s1;

    int n=1;
    cin>>t;
    while(t--)
    {
        s1="";
        cin>>s;
        s1=s[0];
        for(int i=1;i<s.length();i++)
        {
        if(s[i]>=s1[0])
        s1=s[i]+s1;
        else
        s1=s1+s[i];
        }
        cout<<"Case #"<<n++<<": "<<s1<<endl;
    }
    return 0;
    }








