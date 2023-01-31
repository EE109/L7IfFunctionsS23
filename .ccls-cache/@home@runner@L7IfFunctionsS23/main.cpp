#include <iostream>
#include <string>

using namespace std;

//JZ - declare functions here - warn the compiler to expect more than just main()

int getInput(string prompt);

int main() 
{
  string prompt1 = "\nHello World!\n\nPlease tell your favorite number!\n";
  int favNum = 0;

  favNum = getInput(prompt1); 
  //JZ - calls the getInput function and passes the content of variable prompt1.  Integer variable favNum fills with the output from getInput 
  
  cout << "\n\nYour favorite number is: " << favNum << "!  \n\nI love it!!";

  return 0;
    
}



//JZ -use the function - the same as declaring except replace the semicolon with curly braces to enclose the code.

int getInput(string prompt) 
//JZ - the 'int' tells the compiler to expect that the function will output an integer.  The 'string prompt' tells the compiler to expect the function that calls getInput to include a string within the function call.
{
  int favoriteNumber = 0;  
  //JZ - creates place-holder int
  
  cout << prompt; 
  // JZ - outputs the prompt passed to getInput from the calling function
  cin >> favoriteNumber;  
  //JZ - Collects the user's favorite number

  return favoriteNumber; 
  //JZ - returns the user's favorite number to the calling function
  
}