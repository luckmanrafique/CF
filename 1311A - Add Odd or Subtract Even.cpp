#include<iostream>
using namespace std;
void papa(){
    int a,b;
    cin>>a>>b;
    if(a==b){
        cout<<0<<endl;
        exit;
    }
    else if(a<b){
        int d=b-a;
        if(d%2==1) cout<<1<<endl;
        else cout<<2<<endl;
    }
    else{
        int d=a-b;
        if(d%2==0) cout<<1<<endl;
        else cout<<2<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--) papa();
    return 0;
}