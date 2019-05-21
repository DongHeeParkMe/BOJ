#include <iostream>

using namespace std;

int main() {
    int x, y;
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string day[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};


    cin >> x;
    cin >> y;


    for (int i = 0; i < x-1; i++) {
        y += month[i];

    }
    cout << day[y% 7] << '\n';

}

// 다른사람 코딩을 봤는데 되게 깔끔한 코드들이 많았다
