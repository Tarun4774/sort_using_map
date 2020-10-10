#include <bits/stdc++.h>
using namespace std;
void CountingSort(int a[],int n){
    vector<pair<int,int>>v;
map<int,int>m;int sum=0;
for(int i=0;i<n;i++)
    m[a[i]]++;
for(auto it=m.begin();it!=m.end();it++)
{
   while(it->second)
   {
       cout<<it->first<<endl;
       it->second--;
   }
}

return;
}


int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
CountingSort(a,n);
return 0;
}
