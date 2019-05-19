#include <iostream>
using namespace std;
int main(){
    int n,f[11],T;

    cin>> T;

for(int i=0;i<T;i++){
    cin>>n;
    f[1] = 1;
    f[2] = 2;
    f[3] = 4;

    for(int j=4;j<=n;j++){

        f[j]=f[j-3]+f[j-2]+f[j-1];
    }
    cout<<f[n]<<'\n';
}


}

//테스트 케이스 입력 방법 알아두기