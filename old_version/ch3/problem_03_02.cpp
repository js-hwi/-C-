#include <bits/stdc++.h>

using namespace std;


//문자열 저장, 출력 

class Printer{
private:
    char *name;
    int len;
public:
    Printer() : name(NULL), len(0) {};
    ~Printer(){
        delete[] name;
        len = 0;
    }
    Printer(const char *strData){
        len = strlen(strData);
        name = new char[len+1];
        strcpy(name, strData);
    }
    const char* ShowString() const{
        return name;
    }
};

int main(){
     Printer pnt("Hello, world");
     cout << pnt.ShowString();

    return 0;
}