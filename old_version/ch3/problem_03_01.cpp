#include <bits/stdc++.h>

using namespace std;

struct Point{
    int ypos;
    int xpos;

    void MovePos(int y, int x);
    void AddPoint(const Point &pos);
    void ShowPosition();
};

int main(){
    Point pos1={12,4};
    Point pos2={20,30}; 

    pos1.MovePos(-7,10);
    pos1.ShowPosition();

    pos1.AddPoint(pos2);
    pos1.ShowPosition();
    return 0;
}

void Point::AddPoint(const Point &pos){ //원래 typedef로 Point_t 형식으로 했는데 매개변수로 넘길 때 잘 안돼서 struct Point로 바꿨다. 
    ypos += pos.ypos;
    xpos += pos.xpos;
}

void Point::MovePos(int y, int x){
    ypos += y;
    xpos += x;
}

void Point::ShowPosition(){
    cout << "[" << ypos << " " << xpos << "]" << '\n';
}