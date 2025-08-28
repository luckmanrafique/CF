#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
void papa(){
    vector<int>a(3);
    cin>>a[0]>>a[1]>>a[2];
    sort(a.begin(),a.end());
    int m=a[1];
    int sum=abs(a[0]-m)+abs(a[1]-m)+abs(a[2]-m);
    cout<<sum<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--) papa();
    return 0;
}