#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    for(int i=n;i>0;i--)
    {
        cout<<i<<'\n';
    }
}

//자주 쓰는 for(int i=0 ; i< ; i++)형식이 아니라 조건식에 대해서 생각해봐야한다