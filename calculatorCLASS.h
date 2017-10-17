#ifndef CALCULATOR_H
#define CALCULATOR_H
// ----------------------------------------------------------------------
// File Name:  calculator.h
// Purpose:    Class to implement an elementary calculator:
//
//             Storage Elements:  
//               a) input register (In) for user inputs.
//                     Initial value = 0
//
//               b) accumulator (Acc) for storing results of operations.
//                     Initial value = 0
//            
//            
//             Arithmetic operations:
//                + (Add)      ==> Acc = Acc + In
//                - (Subtract) ==> Acc = Acc - In
//                * (Multiply) ==> Acc = Acc * In
//                / (Divide)   ==> Acc = Acc / In; 0 when In is zero.
//            
//             Set operations:
//                a) CLEAR In  ==> In = 0
//                b) CLEAR Acc ==> Acc = 0
//                c) Set In ==> In = specifiedValue
//            
//             Get operations:
//                a) Get In  ==> return In 
//                b) Get Acc ==> return Acc 
//
//
// NOTE: *********** NO INPUT/OUTPUT OPERATIONS ************
//
// ----------------------------------------------------------------------
using namespace std;
class CALCULATOR
{
  private:
           int Acc;  // Accumulator.
           int In;   // Input register.

  public:

   // Constructor: initialize Acc/In to zero.
   CALCULATOR();

   // Clear/set In register to zero.
   void Clear_In ();

   // Set In register to specified value.
   void Set_In (int value);

   // Clear/set Acc to zero.
   void Clear_Acc ();

   // Return value in Acc. 
   int Get_Acc ();

   // Return value in In register. 
   int Get_In ();

   // Perform addition: result: Acc = Acc + In 
   void Add();

   // Perform subtraction: result: Acc = Acc - In 
   void Subtract();

   // Perform multiplication: result: Acc = Acc * In 
   void Multiply();

   // Perform division: result: Acc = Acc / In 
   void Divide();

   // Perform division: result: Acc = Acc % In 
   void Mod();

};
#endif