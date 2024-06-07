#include<iostream>
#include<string>
using namespace std;

int z = 69;

int main(){
    // ********PRINTIG GLOBOLE VARIABLE
     cout << "PRINTIG GLOBOLE VARIABLE:\n";

    int a,b,z;
    a = 33; b = 55; z = 66;
    cout << "The value of a is:"<< a <<"\n";
    cout << "The value of b is:"<< b <<"\n";
    cout << "The value of z is:"<< z <<"\n";
    cout << "The value of globle z is:"<< ::z <<"\n";
    cout << "The value of globle z and local z is:"<< ::z + z <<"\n";
    cout <<"\n";
    cout <<"\n";

    // *********FLOAT, DOUBLE , LONG DOUBLE LITRALS:
    cout <<"FLOAT, DOUBLE , LONG DOUBLE LITRALS:\n";

    float k =65.03f;
    // double l =65.03l;
    long double l =65.03L;

    cout << "The value of float is : "<< k <<"\n";
    cout << "The value of double is : "<< l <<"\n";

    cout << "The size of float is : "<< sizeof(65.03) <<"\n";
    cout << "The size of float is : "<< sizeof(65.03f) <<"\n";
    cout << "The size of float is : "<< sizeof(65.03F) <<"\n";
    cout << "The size of double is : "<< sizeof(65.03l) <<"\n";
    cout << "The size of long double is : "<< sizeof(65.03L) <<"\n";
    cout <<"\n";
    cout <<"\n";

    // **************REFERENCE VAIABLE:
    cout << "REFERENCE VAIABLE:"<<"\n";

    float p = 444.55;
    float & q = p;

    cout << p << endl;
    cout << q ;

    cout << endl;

    string s = "shivam";
    string & t = s;

    cout << s << endl;
    cout << t ;

    cout << endl;
    cout << endl;
    
    // ************TYPE CASTING:
    cout << "TYPE CASTING:\n";

    int j =77.9;
    float m =88.55;
    double n =22.4453336;
    
    cout <<"The value of int is:"<< j << endl ;
    cout << "The value of float is:"<< m << endl ;
    cout << "The value of float in int is:"<<int(m)<< endl ;
    cout << "The value of float in int is:"<<(int)m<< endl ;
    cout << "The value of double  is:"<< n << endl ;
    cout << "The value of double in float is:"<<(float)n<< endl ;
    cout << "The value of double in float is:"<<float(n)<< endl ;







    return 0;
}