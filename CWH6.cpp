#include<iostream>
using namespace std;

int main(){
// ARITHMATIC OPERATION
cout << "ARITHMATIC OPERATION-->"<<"\n";
int a=7,b=9;
cout << "The value of a+b is :"<< a+b<< endl;
cout << "The value of a-b is :"<< a-b<< endl;
cout << "The value of a*b is :"<< a*b<< endl; 
cout << "The value of a/b is :"<< a/b<< endl;
cout << "The value of a%b is :"<< a%b<< endl;
cout << "The value of ++a is :"<< ++a<< endl;
cout << "The value of --a is :"<< --a<< endl;
cout << "The value of a++ is :"<< a++<< endl;
cout << "The value of a-- is :"<< a--<< endl;
cout << endl;
cout << endl;

/* ASSIGNMENT OPERATORS: 
                        USED TO ASSIGN VALUES TO VARIABLE
        EX: int a=3,b=4;
        char a = 'a'; */    

// COMPARISON OPERATORS:
cout << "COMPARISON OPERATION-->"<<"\n";

cout << "The value of a==b is:"<< (a==b) << endl;
cout << "The value of a!=b is:"<< (a!=b) << endl;
cout << "The value of a>b is:"<< (a>b) << endl;
cout << "The value of a<b is:"<< (a<b) << endl;
cout << "The value of a<=b is:"<< (a<=b) << endl;
cout << "The value of a>=b is:"<< (a>=b) << endl;
cout << endl;
cout << endl;

// LOGICAL OPERATORS:
cout << "LOGICAL OPERATION-->"<<"\n";

cout << "The value of (a<b && b>a)  is:"<< (a<b && b>a ) << endl;
cout << "The value of (a<b || b>a)  is:"<< (a<b || b<a ) << endl;
cout << "The value of !(a<b && b>a)  is:"<< !(a<b && b>a ) << endl;


    return 0;
}