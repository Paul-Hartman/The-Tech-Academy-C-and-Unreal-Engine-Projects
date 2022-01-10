// Challenges.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>
#include "functions.h"
#include "Pets.h"
#include "Family.h"

using namespace std;
using std::cout;
using std::cin;
using std::string;

functions a1;



int main()
{   


    Pets Pet1("dog", "medium", "juan");
    

    Pets Pet2("bird", "large", "john");
    a1.setTempurature(50);
    cout << a1.getTempurature()<<'\n';

    Family family1;
    family1.familyName();
    Child child1;
    
    child1.familyName();

    mother mother1;
    mother1.familyName();

    
    
    // char a = 'T';
    // int const b = 2;
    // double c = 4.66, e=5.87, f=8.231;
    // bool d = true;
    // string g = "I couldnt help but wonder";
    // int h;
    // float i = c + e + f;
    // string j = g + " what the weather was ";
    // j[0] = 'P';
    // float k = e - f;


    // 
    // cout << "Hello World!\n";
    // cout << "This is " << " it sis" <<'\n';

    // cout << "A Letter: " << a << '\n';
    // cout << "A Number: " << b << '\n';
    // cout << "A Decimal Number: " << c << '\n';
    // cout << "A T/F: " << d << '\n';
    // cout << "A Phrase: " << j << '\n';
    // cout << i<< '\n';


    // string fullName;
    // cout << "type your full name" << '\n';
    // getline(std::cin, fullName);
    // cout << "Your Full name is : " << fullName << '\n';

    // cout << "Type a number" << '\n';

    // cin >> h;

    // 
    // 
    // cout << '\n'<< h << '\n';

    // cout << j.length()<< '\n'<<j[13]<<'\n';

    // if (h > 5)
    // {
    //     cout << h * 3;
    // }

    // if (h == 5)
    // {

    //     cout << h / 2;
    // }
    // if (h != 11)
    // {

    //     cout << "this is isnt 11"<< '\n';
    // }

    // if (h <= b)
    // {
    //     h++;
    //     cout << h;
    // }

    // h += 5;

    // int binary = 10100;
    // cout << binary<<'\n';
    // binary &= 6;
    // cout << binary << '\n';
    // binary >>= 1;
    // cout << binary << '\n';
    // binary <<= 1;
    //cout << binary << '\n';

    //if (binary > 1 && d) 
    //{
    //    d = !d;

    //}
    //if (binary > 1|| d) 
    //{
    //    cout << "binary is greater than 1 and d is false" << '\n';
    //}

    //cout << max(f, c) << '\n' << min(c, f), '\n';
    //double rounded = round(c);
    //int suareroot = sqrt(64);
    //cout << pow(rounded, c);

    //int num = 5;
    //if (num == 5) {
    //    cout << "num is 5"<< '\n';
    //}
    //else if (num > 5) 
    //{
    //    cout << "num is gretaer than 5"<<'\n';
    //}
    //else
    //{
    //    cout << "num is not greater thna or equal to 5" << '\n';
    //}

    //switch (1)
    //{
    //case 1:num <= 10;
    //    cout <<" 1  "<< '\n';
    //    break;
    //case 2: num >= 14;
    //    cout << " 2  " << '\n';
    //default:
    //    cout << "default" << '\n';
    //}

    //int time = 4;

    //string result = (time > 16) ? "Good Day" : "Good evening";   //ternary operator
    //cout << result << '\n';


    //while (time < 16)     //while loop
    //{
    //    time++;
    //    cout << time << " "<<'\n';
    //}
    ///*this is a multi 
    //line comment*/

    //do                           //do while loop
    //{
    //    time++;
    //    cout << time <<'\n';
    //} while (time < 18);



    //for (int i = 0; i > -5; i--)  //for loop
    //{
    //    cout << i << '\n';
    //}
    // 

    //while (time > 16)     //while loop with break
    //{
    //    time--;
    //    cout << time << " " << '\n';
    //    if (time == 14)
    //    {
    //        break;
    //    }
    //}                            

    //while (time > 5)         //while loop with continue
    //{    
    //    time--;
    //    if (time == 7)
    //    {
    //        continue;
    //    }
    //    
    //    cout << time << " " << '\n';
    //   

    //}

    //string sizes[4] = { "small", "medium", "Large" , "HUGE" };
    //cout << sizes[3] << '\n';

    //for (int i = 0; i < 4; i++)
    //{
    //    cout << sizes[i] << '\n';
    //}

    //string tomato = "tomato";        //reference variable
    //string &potato = tomato;

    //cout << tomato << '\n';
    //cout << potato << '\n';
    //cout << &potato << '\n';

    //string* pointer = &potato;
    //cout << pointer << " this is the adress of the variable"<< '\n';
    //cout << *pointer << " this is the dereferenced value of the adress" << '\n';

int sum = a1.add(100, 5);
cout << sum << '\n';

a1.message();


int firstNumber = 30;
int secondNumber = 20;

a1.squarenums(firstNumber, secondNumber);
cout << firstNumber << " " << secondNumber<<'\n';
  
double solution = a1.add(3.6, 4.4);
cout << solution << '\n';

cout << Pet2.name << " is a " << Pet2.species << " who is " << Pet2.size << '\n';
    

try
{
    int age = 6;
    if (age >= 21)
    {
        cout << "You can drink \n";
    }
    else 
    {
        throw(age);

    }
}
catch (int thrownNum)
{
    cout << "You cannot drink you are only " << thrownNum << " years old \n";
}


}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
