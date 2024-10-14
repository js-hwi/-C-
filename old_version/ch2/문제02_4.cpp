#include <bits/stdc++.h>

using namespace std;


 
int main(){
    const char *str1 = "ABC";
    char *str2 = "DEF";
    char str3[50];
    cout << strlen(str1) << '\n';
    cout << strlen(str2) << '\n';
    strcpy(str3, str1);
    strcat(str3, str2);
    cout << str3 << '\n';

    if(strcmp(str1, str2)){
        cout << "길이가 같습니다" << '\n';
    }
    else{
        cout << "길이가 같지 않습니다" << '\n';
    }
    return 0;
}