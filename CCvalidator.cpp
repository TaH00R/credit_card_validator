#include <iostream>
using namespace std;

int Doublefunction(string cardNumber){
    int i, sum, twice;
    int twos,ones;
    sum = 0;
    for (i = 15; i >= 0; i--){
        if (i % 2 == 0){
            twice = (cardNumber[i] - '0') * 2;
            if (twice > 9){
                ones = twice % 10;
                twos = twice / 10;
                sum = sum + ones + twos;
            }
            else{
                sum = sum + twice;
            }

        }
    }
return sum;
}

int OddSum(string cardNumber){
    int i, Sum;
 Sum = 0;
    for (i = 15; i >= 0; i--){
        if (i % 2 != 0){
         Sum = Sum + (cardNumber[i] - '0');
        }
    }
    return Sum;
}

int finalcheck(string cardNumber){
    int total;
    total = OddSum(cardNumber) + Doublefunction(cardNumber);
    if (total % 10 == 0){
        cout << "Valid card" << endl;
    }
    else{
        cout << "Invalid card" << endl;
    }
}

int main(){
    string cardNumber;
    cout << "Enter card number: ";
    cin >> cardNumber;
    Doublefunction(cardNumber);
    OddSum(cardNumber);
    finalcheck(cardNumber);
}





