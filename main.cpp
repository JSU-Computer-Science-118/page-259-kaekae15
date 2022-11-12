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
  
    if (discriminant > 0);{
        cout << "Two real roots" << endl;
        cout << "- First root " << (-b + pow(discriminant, 1.0/2.0))/(2.0*a) << endl;
        cout << "- Second root " << (-b-pow(discriminant,1.0/2.0))/(2.0*a) <<endl;
    }
   
    if (discriminant < 0);{
        cout << "Complex roots" << endl;
    }
   
    if (discriminant==0);{
        cout << "The single repeated root is " << -b/(2.0*a) << endl; 
    }
    return 0;
}
