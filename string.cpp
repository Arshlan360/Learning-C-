#include<iostream>
#include<string>

using namespace std;
int main(){
  string firstname = "kaifi";
  string lastname = " khan";
   cout << firstname + lastname<<"\n";
   cout << firstname+""+lastname<<"\n";
   cout << firstname.append(lastname)<<"\n";
   cout << firstname[0]<<"\n";
   cout << lastname[3]<< endl;
   firstname[0]= 's';
   lastname[3]= 'A';
   cout << firstname;
   cout << lastname <<"\n";

   cout << "I am from \"azamgarh\" and what\' about you\\ \n";

   /*string fullname ;
   cout <<"what is your full name:";
   cin >> fullname ;
   cout << "your full is:" << fullname;*/
   // BUT IT CAN STORE ONLY SINGLE WORD
   // WE OFTEN USE THE getline() IT TAKE cin AS THE FIRST PARAMETER AND THE STRING VARIABLE AS SECOND.
   string fullname ;
   cout <<"what is your full name: ";
   getline(cin,fullname);
   cout << "your full name is:" << fullname;


   cout<<"\n";
string greeting = "hello";
char greeting2[] = "Kaifi khan";
 cout << greeting<<"\n";
 cout << greeting2;
  return 0;
}
