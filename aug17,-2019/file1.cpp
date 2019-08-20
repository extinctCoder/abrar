#include <iostream>
using namespace std;

int main(){
    double user_amount = 0;;
    double price_ratio[3];
    int total_people = 0;
    double animal_price_ratio[2];
    int name_ratio[2];
    int alergic_people_ratio[2];
    
    int minimum_animal[2];
    minimum_animal[0] =0;
    minimum_animal[1] =0;

    int name_left[2];
    name_left[0] = 0;
    name_left[1] = 0;
    cout << "welcome to kurbani caclutator ...." << endl;

    cout << "please enter the price of goru : ";
    cin >>animal_price_ratio[0];
    cout << "please enter the price of chagol : ";
    cin >>animal_price_ratio[1];

    cout << "please enter the number of name for one goru : ";
    cin >> name_ratio[0];
    cout << "please enter the number of name for one chagol : ";
    cin >> name_ratio[1];
    
    cout << "please enter the number of alergic people for goru : ";
    cin >> alergic_people_ratio[0];
    cout << "please enter the number of alergic people for chagol : ";
    cin >> alergic_people_ratio[1];

    cout << "fixed paramitters are," << endl;
    cout << "goro vs chagol price ratio is -> " << animal_price_ratio[0] << " : " << animal_price_ratio[1] << endl;
    cout << "goru vs chagol number of name ratio is -> " << name_ratio[0] << " : " << name_ratio[1] << endl;
    cout << "goru vs chagol number of alergic people ratio is -> " << alergic_people_ratio[0] << " : " << alergic_people_ratio[1] << endl;


    cout << "please enter how much amout are you want to invest in this eid : ";
    cin >> user_amount;

    cout << "please enter the number of family member in your house : ";
    cin >> total_people;

    minimum_animal[0] = alergic_people_ratio[0] / name_ratio[0];
    minimum_animal[1] = alergic_people_ratio[1] / name_ratio[1];

    if(alergic_people_ratio[0] % name_ratio[0] != 0){
        minimum_animal[0] = minimum_animal[0] + 1;
        name_left[0] = name_ratio[0] - (alergic_people_ratio[0] % name_ratio[0]);
    }
    if(alergic_people_ratio[1] % name_ratio[1] != 0){
        minimum_animal[1] = minimum_animal[1] + 1;
        name_left[1] = name_ratio[1] - (alergic_people_ratio[1] % name_ratio[1]);
    }

    cout << "minimum goru vs chagol ratio is -> " << minimum_animal[0] << " : " << minimum_animal[1] << endl;
    // DEVIDE PRICE

    price_ratio[0] = user_amount * 0.6;
    price_ratio[1] = user_amount * 0.2;
    price_ratio[2] = user_amount * 0.2;

    cout << "limitations are : " << price_ratio[0] << " for animal, "<< price_ratio[1] << " for shopping, "<< price_ratio[2] << " for gift." << endl;

    int people_left = total_people - (alergic_people_ratio[0] + alergic_people_ratio[1] + name_left [0] + name_left [1]);
    double amount_left = price_ratio[0] - (minimum_animal[0] * animal_price_ratio[0] + minimum_animal[1] * animal_price_ratio[1]);
    
    
    cout << "total people is : " << total_people << endl;
    cout << "number of left pleople is : " << people_left << endl;
    cout << "for animal amout was : " << price_ratio[0] << endl;
    cout << "number of left amount is : " << amount_left << endl;

    double amount_needed[2];

    amount_needed[1] = (people_left / name_ratio[1]) * animal_price_ratio[1];
    if(people_left % name_ratio[1]){
        amount_needed[1] += animal_price_ratio[1];
    }


    amount_needed[0] = (people_left / name_ratio[0]) * animal_price_ratio[0];
    if(people_left % name_ratio[0]){
        amount_needed[0] += animal_price_ratio[0];
    }

    cout << "for goru amount need is " << amount_needed[0] << " for " << amount_needed [0] / animal_price_ratio[0] << " ta goru." << endl;
    cout << "for chaol amount need is " << amount_needed[1] << " for " << amount_needed [1] / animal_price_ratio[1] << " ta chagol." << endl;

    if(amount_needed[0] < amount_needed[1]){
        cout << "goru is the best option." << endl;
        double mis_masched_amount = amount_left - amount_needed[0];
        cout << "mismached amount is  : " << mis_masched_amount << endl;
    } else {
         cout << "chagol is the best option." << endl;
        double mis_masched_amount = amount_left - amount_needed[1];
        cout << "mismached amount is  : " << mis_masched_amount << endl;
    }
    return 0;
}