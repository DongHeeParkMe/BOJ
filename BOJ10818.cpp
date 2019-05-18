#include <iostream>
using namespace std;

int main(){
    int n;
    int max = -1000000; //최대값의 초기값
    int min = 1000000; //최소값의 초기값
    int temp=0;
    cin>>n;

    for(int i=1;i<=n;i++){


        cin>>temp;

        if(temp<min){
            min=temp;
        }

        if(temp>max){
            max =temp;
        }
    }

    cout<<min<<' '<<max<<'\n';
}

//min = temp 와 temp = min 은 다르다

//min = temp는 temp에 있는 값을 min에 할당하는 거고,
//temp = min은 min에 있는 값을 temp에 할당하는겁니다