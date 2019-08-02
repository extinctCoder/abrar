#include <iostream>
using namespace std;

int main(){
    int choice = 0;

    string name[3];
    int phn_num[3];
    string work[3];
    char gender[3];
    string address[3];

    cout << "please enter your choice (0-2) : ";
    cin >> choice;
    

    cout << "please enter your name : ";
    cin >> name[choice];
    cout << "please enter your phn_num : ";
    cin >> phn_num[choice];
    cout << "please enter your work : ";
    cin >> work[choice];
    cout << "please enter your gender : ";
    cin >> gender[choice];
    cout << "please enter your address : ";
    cin >> address[choice];

    cout << "your name is : " << name[choice] << endl;
    cout << "your name is : " << phn_num[choice] << endl;
    cout << "your name is : " << work[choice] << endl;
    cout << "your name is : " << gender[choice] << endl;
    cout << "your name is : " << address[choice] << endl;
    
    
    return 0;
}