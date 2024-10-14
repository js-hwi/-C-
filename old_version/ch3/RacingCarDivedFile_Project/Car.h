#ifndef __CAR_H__ 
//#ifndef는 "if not defined"의 약자로, __CAR_H__라는 매크로가 정의되지 않았는지를 확인합니다. 만약 __CAR_H__가 정의되지 않았다면, 다음 #endif까지의 코드를 포함시킵니다.
#define __CAR_H__
//이 지시어는 __CAR_H__라는 매크로를 정의합니다. 매크로가 정의되면, 이후에 이 헤더 파일이 다시 포함되었을 때, #ifndef __CAR_H__의 조건이 거짓으로 평가되어 이 블록의 코드가 포함되지 않습니다.
namespace CAR_CONST
{
    enum{
        ID_LEN = 20, MAX_SPD=200, FUEL_STEP=2, 
        ACC_STEP=10, BRK_STEP=10
    };
}

class Car{
private:
    char gameID[CAR_CONST::ID_LEN];
    int fuelGauge;
    int curSpeed;    
public:
    void InitMembers(char *ID , int fuel);
    void ShowState();
    void Accel();
    void Brake();
};

#endif
//#endif는 #ifndef 블록의 끝을 나타냅니다. 이 지시어는 조건부 포함 블록의 종료를 의미합니다.

/*
이들이 함께 작동하는 방식은 다음과 같습니다:

이 헤더 파일이 처음 포함될 때 __CAR_H__는 정의되지 않았으므로, 파일의 내용이 포함됩니다.
이후에 이 헤더 파일이 다시 포함될 때, __CAR_H__가 이미 정의되어 있기 때문에, #ifndef __CAR_H__ 블록의 내용은 포함되지 않습니다.
이렇게 해서 헤더 파일의 내용이 중복으로 포함되는 것을 방지할 수 있습니다.
*/