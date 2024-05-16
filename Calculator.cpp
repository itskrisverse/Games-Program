#include <iostream>

using namespace std;

int main () {

    char choice;
    int num1 , num2 , result;

    cout << "*************** CALCULATOR ****************\n";

    cout<< "Enter either ( + - * / ) : " ;
    cin >> choice ;

    cout << "Enter #1 : " ;
    cin>> num1 ;

    cout << "Enter #1 : " ;
    cin>> num2 ;

    switch ( choice )  {

        case '+' : result = num1 + num2 ;
                   cout << "result : " << result << endl;
                   break;
        
        case '-' : result = num1 - num2 ;
                   cout << "result : " << result << endl;
                   break;

        case '*' : result = num1 * num2 ;
                   cout << "result : " << result << endl;
                   break;

        case '/' : result = num1 / num2 ;
                   cout << "result : " << result << endl;
                   break;

        default  :  cout << "Invalid choice \n";
                   break;
    }

    cout << "*******************************************\n";


    return 0;
}