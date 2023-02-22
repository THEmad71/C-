//buuble sort
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    for(i=1;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
        {
            for(j=0;j<=n-i-1;j++)//n-i-1 lekar reason??if n=5
                                //eita bolte gele ek dhoroner formula. jdi i er value 0 hoi amra value pabo 4
                                //mane loop ta 4bar comparison korbe,4 bar compare korbe
            {   
                if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
            }
        }
          for(i=0;i<n;i++)
          {
            cout<<a[i]<<" ";
          }
}