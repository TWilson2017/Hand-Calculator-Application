// ----------------------------------------------------------------------
// File name:  mycalculator.cpp
//
// AssignID:   PROG5
// Author:     twilson, Tishauna Wilson
//
// Purpose:    Implement a simple calculator using a class.
//
// Operation:  User inputs have the following meaning:
//
//          =======    =================================================
//          command    Required action
//          -------    -------------------------------------------------
//             H     : display list of commands. 
//             +     : add In to accumulator
//             -     : subtract In from accumulator
//             *     : multiply accumulator by In
//             /     : divide accumulator by In
//             < xx  : read an input value xx into In
//             >     : show last input value read.
//             A     : show current value in accumulator.
//             C     : Clear current value in accumulator to zero.
//             X     : turn off calculator (exit program).
//             R     : Reset In Register."
//          -------    -------------------------------------------------
//
//             =========================================================
// ----------------------------------------------------------------------

#include <iostream>
#include <cctype>         // **** contains upper/lower case conversion.
#include "calculatorCLASS.h"

using namespace std;

// HELP: Display calculator commands and examples.
void ShowCommands();

// Perform user commands to manipulate the calculator.
void PerformCommand(char cmd, CALCULATOR & Calc)
{
  int inputVal;    // Input value.

  switch (toupper(cmd))
  {

    case 'H' : // Display list of caclulator commands.
               ShowCommands();
               break;

    case '<' : cin >> inputVal;
               Calc.Set_In(inputVal); break;

    case '>' : // Retrieve and display In register. 
               cout << endl << "Input Register: " << Calc.Get_In() << endl;
               break;

    case 'A' : // Retrieve and display Acc. 
               cout << endl << "Accumlator: " << Calc.Get_Acc() << endl;
               break;

    case 'C' : // Clear accumulator. 
               Calc.Clear_Acc(); break;
    case 'R' : // Reset the Register
		       Calc.Clear_In (); break;

    case '+' : Calc.Add(); break;

    case '-' : Calc.Subtract(); break;

    case '*' : Calc.Multiply(); break;

    case '/' : Calc.Divide(); break;
	
	case '%' : Calc.Mod(); break;
    
    default:   cout << "UNKNOWN Command '" << cmd << "' ... retry" << endl;

  }//switch

}//PerformCommand




int main( )
{
   CALCULATOR C;  // Calculator object.

   char command;     // User command symbol.
   int  inValue;     // Input value from user.
   int accValue;     // Current value in accumlator.
   string cmdString  // List of user commands (a menu, of sorts)
        = "[ < > A C + - * / H[elp]]" ;

   //-| ---------------------------------------------------------
   //-| Display welcome message, then a help message containing
   //-|         all accumulator commands/operations.
   //-| ---------------------------------------------------------

   cout << "Welcome to myCalculator" << endl;
   cout << "(c) 2017, twilson, Tishauna Wilson \n\n";

   ShowCommands();

   cout << "ACCUMULATOR = " << C.Get_Acc();
   cout << " ... Enter Command " << cmdString << ": "; 
   cin >> command;

   while (toupper(command) != 'X')
   {
      PerformCommand(command, C);

      cout << "ACCUMULATOR = " << C.Get_Acc();
      cout << " ... Enter Command " << cmdString << ": "; 
      cin >> command;

   }//while 


   cout << endl << endl <<  "Terminating myCalculator" << endl << endl;
   cout << "(c) 2017, twilson, Tishauna Wilson" << endl << endl;

}//main

// Display commands and example.
void ShowCommands()
{
  string Cmd[180] = {
       "   =======    =======================================",
       "   command    Required action",
       "   -------    ---------------------------------------",
       "      +     : add In to accumulator",
       "      -     : subtract In from accumulator",
       "      *     : multiply accumulator by In",
       "      /     : divide accumulator by In",
	   "      %     : mod accumulator by In",
       "      < xx  : read an input value xx into In",
       "      >     : show last input value read.",
       "      A     : show current value in accumulator.",
       "      C     : Clear current value in accumulator to 0.",
       "      H     : request THIS help menu.",
       "      X     : turn off calculator (exit program).",
	   "      R     : Reset In Register.",
       "   -------    ----------------------------------------",
       "      ",
       "   Example: 3 + 5 - 4 / 2 entered as  < 3 + < 5 + < 4 - < 2 / A x",
       "          : 3 * 3 * 3 * 3 entered as  < 3 + * * * > A  x ",
       "      "
                     };//String Cmd

  cout << endl << endl << "CALCULATOR COMMANDS/EXAMPLE:" << endl;
  for (int k=0; k<18;k++)
  {
     cout << "     " << Cmd[k] << endl;
  } // For
  cout << endl << endl;

}//ShowCommands
