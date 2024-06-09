#include<iostream>
using namespace std;

int main (){ 
    // IF ELSE STATEMENT: IF , ELSE-IF , ELSE
    // cout << "ELSE STATEMENT: IF , ELSE-IF , ELSE"<< endl ;


    int marks ;
    
    cout << "What is your marks in class test."<< endl ;
    cin >> marks;

    //   if (marks<15 && marks>0) {
    //     cout <<"You can not come in school party.";
    //   }
      
    //   else if (marks==15){
    //     cout <<"You can come on school party by economic class party pass.";
    //   }
    //   else if (marks<=0){
    //     cout <<"you can not come on school party and also not eligible for next test.";
    //   }
    //   else{
    //     cout <<"you can come on school party.";
    //   }

    /*SWITCH CASE STATEMENT:*/
    // cout << "/*SWITCH CASE STATEMENT:*/"<< endl;

    switch (marks)
    {
    case 30:
        cout <<"You get FIRST rank in this test.";
        break;
    case 29:
        cout <<"You get SECOND rank in this test.";
        break;
    case 28:
        cout <<"You get THIRD rank in this test.";
        break;
    // case <12:
    //     cout <<"You get THIRD rank in this test.";
    //     break;
    
    default:
        cout <<"PASS";
        break;
    }
        return 0;
}