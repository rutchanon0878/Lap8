#include<iostream>
using namespace std;

int main(){
    int age;
    int h;
    int b;
    cout << "Enter your age: ";
    cin >> age;
    
    if (age <= 25){
        cout << "Enter your height: ";
        cin >> h;
        if (h < 100){
            cout << "Your character = Chopper"<< "\n";
        }else if (h < 180){
            cout << "Your character = Usopp"<< "\n";
        }else{ 
            cout << "Enter your bounty: ";
            cin >> b;
            if (b > 1100000000){
              cout << "Your character = Zoro"<< "\n";
        }else
              cout << "Your character = Sanji"<< "\n";
    }
    }else {
        if(age <= 60){
            cout << "Enter your bounty: ";
            cin >> b;
            if (b > 500000000){
            cout << "Your character = Jinbe"<< "\n";
            } else {
            cout << "Your character = Franky"<< "\n";
            }
        }else 
            cout << "Your character = Brook"<< "\n";

    }

    return 0;
}
    
