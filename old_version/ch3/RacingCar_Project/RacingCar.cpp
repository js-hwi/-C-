/*
    C로 구현한 프로젝트
*/

#include <iostream>
using namespace std;

#define ID_LEN 20
#define MAX_SPD 200
#define FUEL_STEP 2
#define ACC_STEP 10
#define BRK_STEP 10

typedef struct{
    char gameID[ID_LEN];
    int fuelGauge;
    int curSpeed;
}Car;

void ShowCarState(const Car &car){  
    cout << "---------" << '\n';
    cout << "소유자 ID : " << car.gameID << '\n';
    cout << "연료 게이지 : " << car.fuelGauge << "%" << '\n';
    cout << "현재 속도 : " << car.curSpeed << "km/h" << '\n';
    cout << "---------" << '\n';
}

void Accel(Car &car){
    if(car.fuelGauge <=0){
        return;
    }
    else{
        car.fuelGauge -= FUEL_STEP;
    }
    if(car.curSpeed+ACC_STEP >= MAX_SPD){
        car.curSpeed = MAX_SPD;
        return; 
    }

    car.curSpeed += ACC_STEP;
}

void Break(Car &car){
    if(car.curSpeed < BRK_STEP){
        car.curSpeed = 0;
        return; 
    }

    car.curSpeed -= BRK_STEP;
}

// ShowCarState , Accel , Break는 모두 Car 구조체에 종속적인 함수이다!!

int main(){
    Car run99 = {"run99", 100, 0}; //초반 연료게이지 100에 현재속도는 0
    Accel(run99);
    Accel(run99);
    ShowCarState(run99);
    Break(run99);
    ShowCarState(run99);
    
    Car sped77 = {"sped77", 100,0};
    Accel(sped77);
    Break(sped77);
    ShowCarState(sped77);
    return 0;
}