#include <iostream>
using namespace std;

int main() {
    long t;
    cin>>t;
    while(t--)
    {
        long  D,d,p,q;
        long ans=0;
        cin >> D >> d >> p >> q;
        long n = D/d;
        ans = n*p*d + (q*(n*(n-1))/2)*d +(D%d)*(p+n*q);
        cout << ans << endl;
    }
    return 0;
}
