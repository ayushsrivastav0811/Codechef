#include <bits/stdc++.h>
#define lli long long int
    using namespace std;
    int main() {
    	int t;
    	cin>>t;
    	while(t--)
    	{
            int n,k;
            string s;
            cin>>n>>k;
            cin>>s;
            int c = 0, max=0;
            for(int i=0;i<n;i++)
            {
               if(s[i]=='*'){
               c++;
               max=c>=max?c:max;
               
               }
               else
               c=0;
               
            }
            if(max>=k)
            cout<<"YES\n";
            else
            cout<<"NO\n";
    	}
    	return 0;
    }
