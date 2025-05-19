/* #include <iostream> // for input and output
using namespace std; // we dont need to use std:: before cout and endl


int main() {
 // major datatypes used in c++:

 // int, long, long long,  float, double, string, getline and char
    return 0;
}

#include <iostream> // for input and output
using namespace std; // we dont need to use std:: before cout and endl */



/* #include <iostream> 
using namespace std; 

int main() {
    int age;
    cin >> age;
    if (age >= 18){
        cout << ("You are an adult");

    }
    else{
        cout << ("You are not an adult");

    }
    return 0;
}
*/


/* A school has the following grading system
1) Below 25 - fail
2) 25 to 44 - E
3) 45 to 49 - D
4) 50 to 59 - C
5) 60 to 79 - B
6) 80 to 100 -A 
Ask the user to enter the marks and print the corresponding grade.
*/

/* #include <iostream> 
using namespace std; 

int main(){
    int marks;
    cin >> marks;
    if(marks < 25){
        cout << "Fail";
    }
    else if (marks >= 25 && marks <= 44){
        cout << "E";
    }
    else if (marks >= 45 && marks <= 49){
        cout << "D";
    }
    else if (marks >= 50 && marks <= 59){
        cout << "C";
    }
    else if (marks >= 60 && marks <= 79){
        cout << "B";
    }
    else if (marks >=80 && marks <=100){
        cout << "A";
    }
    else{
        cout << "Invalid marks";
    }
return 0;
} */


// For and while loops

// FOR LOOP 
/*
#include <iostream>
using namespace std;

int main(){
    
    for (int i =1 ; i <=10; i++){
        cout << "gurudatta" << endl;
    }
    return 0;
}


// WHILE LOOP

#include <iostream>
using namespace std;

int main(){
    int i = 1;
    while(i<= 5){
        cout << "gurudatta " << i << endl;
        i++;
}
return 0;
}*/


 // FUNCTIONS 
// -> functions are set of code that performs something for you 
// -> functions are used to modularise your code
// -> functions are used to increase the readability of your code
// -> functions are used to reuse the code


// -> void function do not return anything

/*#include <iostream>
using namespace std;
void printName(){
    cout << "Gurudatta";
}
int main(){
    printName();
    return 0;
}*/


// Parameterised function
// -> parameterised function takes input from the user


/*#include <iostream>
using namespace std;

void printName(string name){
    cout << "Hey " << name << endl;
}
    int main(){
        string name;
        cin >> name;
        printName(name);

        string name2;
        cin >> name2;
        printName(name2);   
        return 0;
}
*/



// TAKING TWO NUMBERS AND PRINTING ITS SUM

/*#include <iostream>
using namespace std;

void sum(int num1, int num2){
    int num3 = num1 + num2;
    cout << num3;
}
int main(){
    int num1, num2;
    cin >> num1 >> num2;
    sum(num1, num2);
    return 0;
}*/


// pass by value

/*#include <iostream>
using namespace std;
void doSomething(int num){
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;  
    cout << num << endl;    

}
int main(){
    int num = 10;
    doSomething(num);
    cout << num << endl;
    return 0;
}
*/

// pass by reference

#include <iostream>
using namespace std;
void doSomething(int &num){
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;  
    cout << num << endl;    

}
int main(){
    int num = 10;
    doSomething(num);
    cout << num << endl;
    return 0;
}

// -> pass by value means that the value of the variable is passed to the function not the original variable

// -> pass by reference means that the address of the variable is passed to the function and the original variable is modified we add a & sign before the variable in the function definition
