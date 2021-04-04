// Name:Ayush Srivastav
#include <bits/stdc++.h>
using namespace std;
//vector<int>p;
/*unordered_map<int,int>mp1;
int b[1000001];*/
typedef long long int ll;
ll min(ll x,ll y){
    if(x<y){
        return x;
    }
    return y;
}
long long int power(long long int x,long long int y)
{
    long long int res = 1;     // Initialize result
  // x=x;
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x);

        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x);  // Change x to x^2
    }
    return res;
}
long long int power(long long int x,long long int y,long long int m)
{
    long long int res = 1;     // Initialize result
   x=x%m;
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x)%m;

        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x)%m;  // Change x to x^2
    }
    return res;
}
void primeFactors(int n)
{
    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {

        //cout << 2 << " ";
        n = n/2;
    }

    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            cout << i << " ";
            n = n/i;
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        cout << n << " ";
}
/*
void SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p greater than or
            // equal to the square of it
            // numbers which are multiple of p and are
            // less than p^2 are already been marked.
            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    for (int p=2; p<=n; p++)
       if (prime[p])
       mp1[p]++;
          //cout << p << " ";
} */
long long int gcd(long long int a, long long int b){
    if (a == 0)
        return b;
    return gcd(b % a, a);
 }
 long long int lcm(long long int a, long long int b)
 {
     long long int temp;

    return (a*b)/gcd(a, b);
 }


// A function to print all prime
// factors of a given number n
int main() {

   // SieveOfEratosthenes(1000001);
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
long long int t,i=0;
/*SieveOfEratosthenes(1000000);
memset(b,0,sizeof(b));
for(i=3;i<=1000000;i++)
{
    if((2+i)<=1000000)
    {
        if(mp1[(2+i)]==1&&mp1[i]==1)
        {
            b[(2+i)]++;
        }
    }
}
for(i=2;i<=1000000;i++)
{
    b[i]=b[i]+b[i-1];
}
*/
cin>>t;


  // t=1;
    while(t--)
    {
   long long int j;
     long long int f=0,p=0,z,o=100000000,count=0;
       double pie=3.141592653589793238;
    long long int c=1,n,m,l=1,r=0,k,min1=10000000000000,max2=-100;
//   cin>>n;
   /*
   long long int a[n];
   for(i=0;i<n;i++)
   cin>>a[i];*/
    ll kk;
        cin>>n>>m>>kk;
        double Matrix[n+1][m+1];
        for(ll i=0;i<=n;i++){
            for(ll j=0;j<=m;j++){
                if(i==0 || j==0){
                    Matrix[i][j]=0;
                }
                else{
                    cin>>Matrix[i][j];
                }
            }
        }
        for(ll i=0;i<=n;i++){
            double pre=0;
            for(ll j=0;j<=m;j++){
                Matrix[i][j]+=pre;
                pre=Matrix[i][j];
            }
        }
        for(ll j=0;j<=m;j++){
            double pre=0;
            for(ll i=0;i<=n;i++){
                Matrix[i][j]+=pre;
                pre=Matrix[i][j];
            }
        }
        ll zz=min(n,m);
        ll ans=0;
        for(ll len=1;len<=zz;len++){
            for(ll i=len;i<=n;i++){
                for(ll j=len;j<=m;j++){
                    if((Matrix[i][j]+Matrix[i-len][j-len]-Matrix[i][j-len]-Matrix[i-len][j])/(len*len)>=kk){
                        ans++;
                    }
                }
            }
            
        }
        cout<<ans<<endl;
    }

    
 return 0;
}


