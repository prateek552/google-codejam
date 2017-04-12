#include <iostream>
#include <string>
using namespace std;
int main()
{
int s,k;
cin>>s;
cin>>k;int c=0;
int i;
for(i=0;i<(s.length()-k);i++)
{
    if(s[i]=='+')
    continue;
    else
    {
    c++;
        int k=i;
        while(k--)
        {
            if(s[k]=='-')
            s[k++]='+';
            else
            s[k++]='-';
        }
    }
    }
    for(i=0;i<s.length();i++)
    {
    if(s[i]=='-')
    cout<<"N";return 0;
    }
    cout<<s;
    return0;


}
