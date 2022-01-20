/*24. 4.34 (Sides of a Right Triangle) Write a program that reads
three nonzero integers and determines and prints whether
they’re the sides of a right triangle.(c++ how to program)*/
#include<iostream>
using namespace std ;

int main (){
    double a(0),b(0),c(0);
    cout <<"\nEnter the value of A :";
    cin>>a;
    cout <<"Enter the value of B :";
    cin>>b;
    cout <<"Enter the value of C :";
    cin>>c;
    
    if(a*a + b*b == c*c){
        cout << "\n A and B they could represent the sides of a right triangle " << endl ;
    }
    else{
        cout << "\n A and B could not represent the sides of a right triangle " << endl ;

    }

    if(b*c + c*c == a*a){
        cout << "\n B and C they could represent the sides of a right triangle " << endl ;
    }
    else{
        cout << "\n B and C could not represent the sides of a right triangle " << endl ;

    }

    if(a*a + c*c == b*b){
        cout << "\n A and C they could represent the sides of a right triangle " << endl ;
    }
    else{
        cout << "\n A and C could not represent the sides of a right triangle " << endl ;

    }
}