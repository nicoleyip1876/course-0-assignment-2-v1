#include <iostream>
#include <string>
using namespace std;

int main() {
//////////////// Segment 1 ///////////////////////
  int first = 100;
  int second = 2450;
  float third = 100.0;
  string fourth = "550.0";
  cout << "First number is: " << first << endl;
  cout << "Second number is: " << second << endl;
  cout << "Third number is: " << third << endl;
  cout << "Fourth number is: " << fourth << endl;

/////////////// Segment 2 ///////////////////////
  first = first + second * 2;
  second = second + 50;
  third = second / third;
  fourth = "22222222222";
  cout << "First number is: " << first << endl;
  cout << "Second number is: " << second << endl;
  cout << "Third number is: " << third << endl;
  cout << "Fourth number is: " << fourth << endl;

/////////////// Segment 3 ///////////////////////
  first = second / first;
  third = first / third;
  fourth = "";
  cout << "First number is: " << first << endl;
  cout << "Second number is: " << second << endl;
  cout << "Third number is: " << third << endl;
  cout << "Fourth number is: " << fourth << endl;
}
/*
Table at the end of Segment 1

Type   | Name     | Value
------ | -------- | -----
       |          |
int      first      100
int      second     2450
float    third      100.0
string   fouth      550.0
*/

/*
Table at the end of Segment 2

Type   | Name     | Value
------ | -------- | -----
       |          |
int     first      5000
int     second     2500
float   third      25
string  fourth     22222222222

*/

/*
Table at the end of Segment 3

Type   | Name     | Value
------ | -------- | -----
       |          |
  int   first      0
  int   second     2500
float   third      0
string  fourth     
*/
