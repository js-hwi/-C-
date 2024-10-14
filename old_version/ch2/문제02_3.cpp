#include <bits/stdc++.h>

using namespace std;

typedef struct {
    int xpos;
    int ypos;
}Point_t; //이렇게 하는 이유? C/C++ 호환해서 쓰려고 -> C에서는 typedef 안써주면 main문에 계속 struct 써주어야 한다. 

Point_t& PntAdder(const Point_t &p1, const Point_t &p2){
    Point_t * pptr = new Point_t;
    pptr->xpos = p1.xpos + p2.xpos;
    pptr->ypos = p1.ypos + p2.ypos;
    return *pptr;
}


 
int main(){
    Point_t *pptr1 = new Point_t;
    pptr1->xpos = 3;
    pptr1->ypos = 30;

    Point_t *pptr2 = new Point_t;
    pptr2->xpos = 70;
    pptr2->ypos = 7;

    Point_t &ref1 = PntAdder(*pptr1 , *pptr2);
    cout << ref1.xpos << " " << ref1.ypos << '\n';
    delete pptr1;
    delete pptr2; 
    delete &ref1; //주의. 참조자가 동적할당을 한 주체이므로 얘를 메모리 해제해주어야 한다. 
    return 0;

}