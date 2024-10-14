#include "Car.h"

int main(){
    Car run99;
    run99.InitMembers("run99", 100);
    run99.Accel();
    run99.Accel();
    run99.Accel();
    run99.ShowState();
    run99.Brake();
    run99.ShowState();
    return 0;
}    
