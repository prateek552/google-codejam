#include <iostream>
#include <string>
using namespace std;
int main()
{
string s;int k;
cin>>s;
cin>>k;
int c=0;
int i;
for(i=0;i<(s.length()-k);i++)
{
    if(s[i]=='+')
    continue;
    else
    {
    c++;cout<<s.length();
    cout<<i;
        int m=i;
        int t=k;
        while(t--)
        {
            if(s[m]=='-'){
            s[m++]='+';}
            else
            s[m++]='-';
        }
    }
}
    for(i=0;i<s.length();i++)
    {
    if(s[i]=='-')
   {

    cout<<"N";return 0;}
    }
    cout<<c;
    return 0;
}
