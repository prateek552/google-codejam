#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int check(string s)
{
    int ch=0;
    for(int i=0;i<((s.length())-1);i++)
        {
            if((s[i]-'0')>(s[i+1]-'0'))
              {ch=1;break;}

        }
    return ch;
}
long long int contostr(string s)
{
    long long int sum=0;
    for(int i=s.length()-1;i>=0;i--)
    {
        sum=sum+((s[i]-'0')*pow(10,s.length()-i-1));
    }
    return sum;
}
int main()
{
    int t;string s;int i;int k;
    cin>>t;int ch=0;
    while(t--)
    {
        cin>>s;
        string h=s;
        for(i=0;i<((s.length())-1);i++)
        {
            if((s[i]-'0')>(s[i+1]-'0'))
               ch=1;

        }
        if(ch==0)
            {cout<<s;return 0;}
        else
        {
            int l=s.length();
            s[l-1]='9';
            for(int j=i-1;j>=0;j--)
            {
                if(s[j]!='9')
                s[j]=((s[j]-'0')-1)+'0';
                if(j==0 && s[j]=='0')
                {
                    for(k=0;k<(s.length()-1);k++)
                    s[k]=s[k+1];
                s[k]='\0';
                }
                 if(check(s)==0)
                {
                    cout<<s;
                    return 0;
                }
                if(s[j]=='0' || (s[j]-'0')<=(j))
                    s[j]='9';

            }
        }
             cout<<s;
        return 0;
    }
}
