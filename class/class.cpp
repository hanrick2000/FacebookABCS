#include <iostream>
using namespace std;

class Geeks {
  
    public: 
    string geekname; 
    int id; 
      
    // printname is not defined inside class defination 
    void printname(); 
      
    // printid is defined inside class defination 
    void printid() { 
        cout << "Geek id is: " << id; 
    } 
}; 
  
// Definition of printname using scope resolution operator :: 
void Geeks::printname() 
{ 
    cout << "Geekname is: " << geekname;  
} 
int main() { 
      
    Geeks obj1; 
    obj1.geekname = "xyz"; 
    obj1.id=15; 
      
    // call printname() 
    obj1.printname(); 
    cout << endl; 
      
    // call printid() 
    obj1.printid(); 
    return 0; 
} 



#include <bits/stdc++.h> 
using namespace std; 
class Geeks { 
    public: 
    int id; 
      
    //Default Constructor 
    Geeks() 
    { 
        cout << "Default Constructor called" << endl;  
        id=-1; 
    } 
      
    //Parametrized Constructor 
    Geeks(int x) 
    { 
        cout << "Parametrized Constructor called" << endl; 
        id=x; 
    } 
};

int main() { 
      
    // obj1 will call Default Constructor 
    Geeks obj1; 
    cout << "Geek id is: " <<obj1.id << endl; 
      
    // obj1 will call Parametrized Constructor 
    Geeks obj2(21); 
    cout << "Geek id is: " <<obj2.id << endl; 
    return 0; 
} 
