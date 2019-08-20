#include <iostream>
using namespace std;
int main(){
    int x1 = 0, x2 = 0, x3 = 0;
    cin >> x1 >> x2 >> x3;
    if(x1 > x2){
        if(x1 > x3){
            cout<< "x1 is bigger" <<endl;

        } else {
            cout<< "x3 is bigger" <<endl;

        }
    } else {
        if(x2 > x3){
            cout<< "x2 is bigger" <<endl;

        } else {
            cout<< "x3 is bigger" <<endl;
            
        }
    }
    return 0;
}