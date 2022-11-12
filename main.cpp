//Kaylen Bolden          JNUMBER:J00965280          DATE:11/07/2022
//                       PG.259 Exercise 7
//                      DUE DATE 11/09/2022
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double a,b,c,discriminant;

    cout << "enter a: "; 
    cin >> a;

    cout << "enter b: ";
    cin >> b;

    cout << "enter c: ";
    cin >> c;

    discriminant = pow(b,2.0)-4*a*c;

    if (discriminant==0){
        cout << "single (repeated) root" << endl; 
        cout << "x= " << -b/(2.0*a) << endl;
    }
    else if (discriminant > 0){
        cout << "two real roots." << endl;
        cout << "x1 = " << (-b + pow(discriminant, 1.0/2.0))/(2.0*a) << 
        endl << "x2 = " << (-b-pow(discriminant,1.0/2.0))/(2.0*a) <<endl;
    }
    else if (discriminant < 0)
        cout << "two complex roots." << endl;
    return 0;
}
