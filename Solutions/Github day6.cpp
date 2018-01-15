#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n,l,r,i,p;
    cin>>t;
    while(t--)
    {
        cin>>n>>l>>r;
        p=1;
        i=1;
        while(i!=l)
        {
            p=p<<1;
            i++;
        }
        while(i<=r)
        {
            n=n|p;
           p= p<<1;
           i++;
        }
        cout<<n<<'\n';

    }
    return 0;
}
