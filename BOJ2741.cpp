#include <iostream>
using namespace std;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;

    cin>>n;
    for(int i=1;i<=n;i++){

        cout<<i<<'\n';
    }

}

//endl보다 '\n'이 더 빠르다, endl은 버퍼를 비우기 때문이다. endl은 buffer flush

//ios_base::sync_with_stdio(0);
//cin.tie(0);
//stdio와 동기화하는 함수인데 동기화를 끊음으로 속도향상이 있다
