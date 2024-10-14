/*
    C로 구현한 프로젝트
*/

#include <iostream>
using namespace std;


namespace CAR_CONST{
    enum{
        ID_LEN = 20,
        MAX_SPD = 200,
        FUEL_STEP = 2,
        ACC_STEP = 10,
        BRK_STEP = 10
    };
}

typedef struct{
    char gameID[CAR_CONST::ID_LEN];
    int fuelGauge;
    int curSpeed;

    void ShowCarState();
    void Accel();
    void Break();

    

}Car;



// ShowCarState , Accel , Break는 모두 Car 구조체에 종속적인 함수이다!!

int main(){
    Car run99 = {"run99", 100, 0};
    run99.Accel(); 
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();
    
    return 0;
}

void Car::ShowCarState(){  
    cout << "---------" << '\n';
    cout << "소유자 ID : " << gameID << '\n';
    cout << "연료 게이지 : " << fuelGauge << "%" << '\n';
    cout << "현재 속도 : " << curSpeed << "km/h" << '\n';
    cout << "---------" << '\n';
    }

void Car::Accel()
    {
        if(fuelGauge <=0){
            return;
        }
        else{
          fuelGauge -= CAR_CONST::FUEL_STEP;
        }
        if(curSpeed+CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPD){
            curSpeed = CAR_CONST::MAX_SPD;
            return; 
        }
        curSpeed += CAR_CONST::ACC_STEP;
    }
    
void Car::Break(){
        if(curSpeed < CAR_CONST::BRK_STEP){
            curSpeed = 0;
            return; 
        }
        curSpeed -= CAR_CONST::BRK_STEP;
    }