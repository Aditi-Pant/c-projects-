// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;
int main() {
    string n;
   
    int rno, m1, m2, m3, m4, m5;
    double avg;
    cout<< "Name-";
     getline (cin, n);
    cout<< "ROll Number-"<<endl;
    cin>> rno;
    cout<< "Marks in physics-"<<endl;
    cin>> m1;
    cout<< "Marks in Maths-"<<endl;
    cin>> m2;
    cout<< "Marks in chemistry-"<<endl;
    cin>> m3;
    cout<< "Marks in english-"<<endl;
    cin>> m4;
    cout<< "Marks in computer-"<<endl;
    cin>> m5;
    avg= (m1+m2+m3+m4+m5)/5;
    
    if (avg<=100 && avg>90)
    cout<<"A";
    else if (avg<=90 && avg>80)
    cout<<"B";
    else if (avg<=80 && avg>70)
    cout<<"C";
    else if (avg<=70 && avg>60)
    cout<<"D";
    else if (avg<=60 && avg>40)
    cout<<"E";
    else
    cout<<"F";
    return 0;
}
