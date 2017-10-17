#include <iostream>
using namespace std;
#include "calculatorCLASS.h"
// ----------------------------------------------------------------------
// File Name:  calculator.cpp
// Purpose:    Class to implement an elementary calculator:
//
//             Storage Elements:  
//               a) input register (In) for user inputs.
//                     Initial value = 0
//
//               b) accumulator (Acc) for storing results of operations.
//                     Initial value = 0
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
// ----------------------------------------------------------------------
// ********************** CLASS IMPLEMENTATION ****************** // 
// ----------------------------------------------------------------------

// Constructor: initialize Acc/In to zero.
CALCULATOR :: CALCULATOR()
{
   Acc = 0;
   In = -9999;
}

// Clear/set In register to zero.
void CALCULATOR :: Clear_In ()
{
   In = 0;
}


// Return value in In register. 
void CALCULATOR :: Set_In (int value)
{
   In = value;
}

// Clear/set Acc to zero.
void CALCULATOR :: Clear_Acc ()
{
   Acc = 0;
}

// Return value in Acc. 
int CALCULATOR :: Get_Acc ()
{
   return Acc;
}

// Return value in In register. 
int CALCULATOR :: Get_In ()
{
   return Acc;
}

// Perform addition: result: Acc = Acc + In 
void CALCULATOR :: Add()
{
   Acc = Acc + In;
}

// Perform subtraction: result: Acc = Acc - In 
void CALCULATOR :: Subtract()
{
   Acc = Acc - In;
}

// Perform multiplication: result: Acc = Acc * In 
void CALCULATOR :: Multiply()
{
   Acc = Acc * In;
}

// Perform division: result: Acc = Acc / In ; 0 when In is zero.
void CALCULATOR :: Divide()
{
   Acc = Acc / In;
}

// Perform division: result: Acc = Acc % In 
void CALCULATOR :: Mod()
{
	Acc = Acc % In;
}