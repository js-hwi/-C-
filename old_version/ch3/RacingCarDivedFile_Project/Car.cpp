#include <bits/stdc++.h>
#include "Car.h"

using namespace std;

void Car::InitMembers(char *ID , int fuel){
    strcpy(gameID, ID);
    fuelGauge = fuel;
    curSpeed = 0;
}

void Car::ShowState(){  
    cout << "---------" << '\n';
    cout << "소유자 ID : " << gameID << '\n';
    cout << "연료 게이지 : " << fuelGauge << "%" << '\n';
    cout << "현재 속도 : " << curSpeed << "km/h" << '\n';
    cout << "---------" << '\n';
}

void Car::Accel(){
    if(fuelGauge <=0){
        return; 
    }
    else{
        fuelGauge -= CAR_CONST::FUEL_STEP;
        
    }
    if((curSpeed+CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD){
        curSpeed = CAR_CONST::MAX_SPD;
        return;
    }
    curSpeed += CAR_CONST::ACC_STEP;
}

void Car::Brake(){
    if(curSpeed < CAR_CONST::BRK_STEP){
        curSpeed = 0;
        return;
    }
    curSpeed -= CAR_CONST::BRK_STEP;
}


