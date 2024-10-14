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

    void ShowCarState(){  
    cout << "---------" << '\n';
    cout << "소유자 ID : " << gameID << '\n';
    cout << "연료 게이지 : " << fuelGauge << "%" << '\n';
    cout << "현재 속도 : " << curSpeed << "km/h" << '\n';
    cout << "---------" << '\n';
    }

    void Accel()
    {
        if(fuelGauge <=0){
            return;
        }
        else{
          fuelGauge -= FUEL_STEP;
        }
        if(curSpeed+ACC_STEP >= MAX_SPD){
            curSpeed = MAX_SPD;
            return; 
        }
        curSpeed += ACC_STEP;
    }

    
    void Break(){
        if(curSpeed < BRK_STEP){
            curSpeed = 0;
            return; 
        }
        curSpeed -= BRK_STEP;
    }

}Car;



// ShowCarState , Accel , Break는 모두 Car 구조체에 종속적인 함수이다!!

int main(){
    Car run99 = {"run99", 100, 0};
    run99.Accel(); 
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();
    
    return 0;
}