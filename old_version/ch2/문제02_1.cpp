#include <bits/stdc++.h>

using namespace std;

void swap(int *(&pref1), int *(&pref2)){
    int *ptr = pref1; // pref1이 가리키는 포인터 값을 ptr에 저장
    pref1 = pref2;    // pref1에 pref2 값을 할당 (즉, 포인터를 교환)
    pref2 = ptr;      // pref2에 원래 pref1 값을 할당
}
//이 함수는 두 포인터의 주소값을 교환합니다. 예를 들어, p1과 p2가 각각 x와 y를 가리키고 있을 때, swap(p1, p2)를 호출하면 p1이 y를, p2가 x를 가리키게 됩니다

int main(){
    int x = 5;
    int *p1 = &x;
    int y = 10;
    int *p2 = &y;

    swap(p1, p2);
    cout << "*p1의 값은 : " << *p1 << '\n';
    cout << "*p2의 값은 : " << *p2 << '\n';
}