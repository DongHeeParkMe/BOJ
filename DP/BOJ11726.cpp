#include <iostream>

using namespace std;



int main(){
    int n,f[1001];
    cin>> n;
    f[1] = 1;
    f[2] = 2;

    for(int i=3;i<=n;i++){
        f[i]=(f[i-1]+f[i-2])%10007;

    }
    cout<<f[n]<<'\n';
}

//10007로 나눈 나머지를 출력하라고 했으므로 (f[i-1]+f[i-2])%10007에서 나눗셈을 해준다