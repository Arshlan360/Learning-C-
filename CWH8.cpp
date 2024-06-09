#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    // CONSTANT:
    cout <<"// CONSTANT:" << endl ;

    const float x = 55.99;
    // x = 44.02; IF I WANT TO CHANGE THE VALUE WE GET ERROR
    cout << "The value of x is:"<< x ;
    // WE CAN USE CONST IN ANY VARIABLE DATA TYPE.
    cout << "\n"; 
    cout << "\n"; 

    // MANIPULATORS: 
    cout << "// MANIPULATORS:"<<"\n"; 

    cout << "This is used in program for formating "<< endl << "(1)- endl "<< endl;
    cout << "We have one more MANIPULATOR but for this we have to add (#include<iomanip>) HADER FILE."<< endl ;
    cout << "(2)- setw();"<< endl << "EX-"<< "\n";

    int a=3,b=66,c=9993;

    cout << "The value of a withot setw is:" << a << endl;
    cout << "The value of b withot setw is:" << b << endl;
    cout << "The value of c withot setw is:" << c << endl;
    cout << endl;

    cout << "The value of a with setw is:" << setw(5) << a << endl;
    cout << "The value of b with setw is:" << setw(7) << b << endl;
    cout << "The value of c with setw is:" << setw(8) << c << endl;
    cout << endl;
    cout << endl;

    // OPERATOR PRECIDENCE
    cout << "// OPERATOR PRECIDENCE: \n";
    cout << " We can see  OPERATOR PRECIDENCE in their chart (agar precodence same hai to associoabiolity dkhenge): \n";

    int p = 77, q =33;

    cout <<"C is:"<< ((((p*3)-q)+2)+4)<< endl;
    cout <<"C is:"<< ((((p)+q*3)-2)+4)<< endl;
    cout <<"\a"<< endl;\
    cout <<"\b"<< endl;\

   return 0;
}