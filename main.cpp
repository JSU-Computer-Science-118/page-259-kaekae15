//Kaylen Bolden          JNUMBER:J00965280          DATE:11/07/2022
//                       PG.259 Exercise 7
//                      DUE DATE 11/09/2022
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double a,b,c,discriminant;
    cin >> a >> b >> c;
    discriminant = pow(b,2.0)-4*a*c;

    if (discriminant==0){
        cout << "The single root is " << -b/(2.0*a) << endl; 
    }
    else if (discriminant > 0){  // Ouput: Two real roots \n- First root 0\n- Second root -1
        cout << "Two real roots" << endl;
        cout << "- First root " << (-b + sqrt(discriminant))/(2.0*a) << endl
             << "- Second root " << (-b - sqrt(discriminant))/(2.0*a) <<endl;
    }
    else if (discriminant < 0){ // Output: Complex roots
        cout << "Complex roots" << endl;
    }
    else {
        cout << "Invalid entry "
        }
    return 0;
}
