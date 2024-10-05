BIT PLAY
Question link-https://www.codechef.com/problems/BITPLAY?tab=statement
 Solution 
.................................................................................................................
#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
  int ans=1;
   const int mod = 1000000007; 
  
  for(int i=2;i<n;i+=2){
      int cnt=0;
  char res;
   if(s[i-1]=='1' && s[i-2]=='1' ) 
   res='1';
   else res='0';
   if(s[i]==res){
       cnt++;
   }
   
  
//   or
 if(s[i-1]=='1' || s[i-2]=='1') 
   res='1';
   else res='0';
   if(s[i]==res){
       cnt++;
   }
   
  
//   xor

if((s[i-1]=='0') && (s[i-2]=='1') || (s[i-2]=='0') && (s[i-1]=='1'))
    res='1';
else
    res='0';

if(s[i]==res){
    cnt++;

}
ans=(1LL * ans *cnt)%mod;
}
cout<<ans<<endl;
}

return 0;
}

