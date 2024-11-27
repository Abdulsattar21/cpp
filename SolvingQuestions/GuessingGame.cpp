#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int v1=0, guessNum, halfRightPoint=0, RightPoint=0;
    int sprGuessNum[4], sprV1[4];
    bool checkNum = false;
    v1= rand() %8853 + 1023; // 1023 - 9876 number
    sprV1[0]= v1 %10;
    sprV1[1]= v1 /10 %10;
    sprV1[2]= v1 /100 %10;
    sprV1[3]= v1 /1000 %10;
    cout << "Enter a number from 4 digits between [1023 - 9876]: ";
    cin >> guessNum;
    while (checkNum == false){
        if (guessNum > 1023 && guessNum < 9876){
            checkNum = true;
        }else{
            cout << "you enter a worng number, please enter a num between [1023 - 9876]: ";
            cin >> guessNum;
        }
    }
    sprGuessNum[0]= guessNum %10;
    sprGuessNum[1]= guessNum /10 %10;
    sprGuessNum[2]= guessNum /100 %10;
    sprGuessNum[3]= guessNum /1000 %10;
    while (RightPoint!=4){
        RightPoint=0;
        halfRightPoint=0;
        if(sprGuessNum[0] == sprV1[0]){
            RightPoint++;
        }else if(sprGuessNum[0] == sprV1[1]){
            halfRightPoint++;
        }else if(sprGuessNum[0] == sprV1[2]){
            halfRightPoint++;
        }else if(sprGuessNum[0] == sprV1[3]){
            halfRightPoint++;
        }
        if(sprGuessNum[1] == sprV1[1]){
            RightPoint++;
        }else if(sprGuessNum[1] == sprV1[0]){
            halfRightPoint++;
        }else if(sprGuessNum[1] == sprV1[2]){
            halfRightPoint++;
        }else if(sprGuessNum[1] == sprV1[3]){
            halfRightPoint++;
        }
        if(sprGuessNum[2] == sprV1[2]){
            RightPoint++;
        }else if(sprGuessNum[2] == sprV1[1]){
            halfRightPoint++;
        }else if(sprGuessNum[2] == sprV1[0]){
            halfRightPoint++;
        }else if(sprGuessNum[2] == sprV1[3]){
            halfRightPoint++;
        }
        if(sprGuessNum[3] == sprV1[3]){
            RightPoint++;
        }else if(sprGuessNum[3] == sprV1[1]){
            halfRightPoint++;
        }else if(sprGuessNum[3] == sprV1[2]){
            halfRightPoint++;
        }else if(sprGuessNum[3] == sprV1[0]){
            halfRightPoint++;
        }
        cout <<"-"<<halfRightPoint<<"  +"<< RightPoint<< endl;
        cout << "Enter another number: ";
        cin >> guessNum;
        checkNum= false;
            while (checkNum == false){
                if (guessNum > 1023 && guessNum < 9876){
                    checkNum = true;
                }else{
                    cout << "you enter a worng number, please enter a num between [1023 - 9876]: ";
                    cin >> guessNum;
                }
            }
        sprGuessNum[0]= guessNum %10;
        sprGuessNum[1]= guessNum /10 %10;
        sprGuessNum[2]= guessNum /100 %10;
        sprGuessNum[3]= guessNum /1000 %10;
    }
    cout <<"-"<<halfRightPoint<<endl;
    cout <<"+"<< RightPoint<< endl;
    return 0;
}
