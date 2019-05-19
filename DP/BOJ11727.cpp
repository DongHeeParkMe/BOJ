#include <iostream>
using namespace std;

    int main(){
        int n,f[1001];
        cin>>n;

        f[1]=1;
        f[2]=3;

        for(int i=3;i<=n; i++){
            f[i]=(f[i-1]+f[i-2]*2)%10007;
        }
        cout<<f[n]<<'\n';
    }

// cin>> n; 을 안썼다..