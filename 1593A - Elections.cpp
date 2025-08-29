#include <iostream>
#include <algorithm>
using namespace std;

void papa() {
    long long a, b, c;
    cin >> a >> b >> c;
    
    long long votesA = max(0LL, max(b, c) - a + 1);
    long long votesB = max(0LL, max(a, c) - b + 1);
    long long votesC = max(0LL, max(a, b) - c + 1);
    
    cout << votesA << " " << votesB << " " << votesC << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) papa();
    return 0;
}