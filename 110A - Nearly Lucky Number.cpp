#include<bits/stdc++.h>
using namespace std;
bool isLuckyDigit(char c){
    return c=='4' || c=='7';
}
void tomarAbbu()
{
    string n;
    cin>>n;
    int luckyCount =0;
    for(char c:n){
        if(isLuckyDigit(c)) luckyCount++;
    }
    string countStr= to_string(luckyCount);
    bool isNearlyLucky= true;
    for(char c: countStr){
        if(!isLuckyDigit(c)){
            isNearlyLucky= false;
            break;
        }
    }
    cout<<(isNearlyLucky? "YES":"NO")<<endl;
}
int main()
{
    tomarAbbu();
    return 0;
}
