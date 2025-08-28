#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void papa(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    bool increasing=true;
    for(int i=0;i<n;i++){
        if(a[i]==a[i-1]){
            increasing=false;
            break;
        }
    }
    cout<<(increasing ? "YES":"NO")<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--) papa();
    return 0;
}