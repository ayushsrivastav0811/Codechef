#include <bits/stdc++.h>
using namespace std;

int main() {
	
	float speed,a,b,c,k,t;
	cin>>t;
	while(t--){
	std::cin >> a>>b>>c>>k;
	speed=a*b*c*k;
   speed=100/speed;
   float ans = round(speed*100.0)/100.0;
   if(ans<9.58)
   {
       cout<<"YES"<<endl;
   }
   else{
       cout<<"NO"<<endl;
   }
	}
	return 0;
}

