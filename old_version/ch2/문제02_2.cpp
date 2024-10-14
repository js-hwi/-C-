#include <bits/stdc++.h>

using namespace std;

int Adder(const int &ref1, const int &ref2){
    return ref1 + ref2;
}

int main(){
    // const int num = 5;
    // const int &ref = num;    //const 로 상수화 한 것은 이렇게 참조 가능

    const int n1=12;
    const int *ptr = &n1;
    const int *(&pref) = ptr; //ptr이 가리키는 곳의 주소에 별칭을 붙여주는 것

    cout << *pref << '\n';
    cout << *ptr << '\n';

    //cout << Adder(3,4) << '\n';
    // 이렇게 쓰려고 const int & 을 쓰는 것이다. 


}