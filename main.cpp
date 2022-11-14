//Kaylen Bolden          JNUMBER:J00965280          DATE:11/07/2022
//                       PG.259 Exercise 7
//                      DUE DATE 11/09/2022
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double a,b,c,discriminant;
    discriminant = pow(b,2.0)-4*a*c;
  
    // cout << "enter a: "; 
    // cin >> a;

    // cout << "enter b: ";
    // cin >> b;

    // cout << "enter c: ";
    // cin >> c;

    cout << "Input: ";
    cin >> a >> b >> c; 

// Output: The single root is -1
    if (discriminant==0){
        cout << "Output: The single root is " << -b/(2.0*a) << endl; 
    }
    else if (discriminant > 0){  // Ouput: Two real roots \n- First root 0\n- Second root -1
        cout << "Output: Two real roots" << endl;
        cout << "- First root " << (-b + pow(discriminant, 1.0/2.0))/(2.0*a) << endl 
             << "- Second root " << (-b - pow(discriminant,1.0/2.0))/(2.0*a) <<endl;
    }
    else if (discriminant < 0) // Output: Complex roots
        cout << "Output: Complex roots" << endl;
    return 0;
}
