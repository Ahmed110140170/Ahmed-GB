/*
(^~==================== variables ====================~^)
 Variables Advanced Knowledge
  - Declare Variable Without Value + Change Later
  - Declare Multiple Variables Without Value + Change Later
  - Declare Multiple Variables With Same Value
/-=======================================================-\
 Variables Scope
  - Global Variable
  - Local Variable
/-=======================================================-\
Constant Variable
  - Read Only Value
  - Can't Declare Without Value
/-=======================================================-\
  Escape Sequences Characters
  --- Special Non Printing Characters
  --- Control Printing Behaviour
  --- Start With Back Slash "\"
  --- Can Be Inserted In Any Position
  - \n
  - \\
  - \"
  - \'
  - \t => Tab Equal 8 Spaces
  - \b
  - \a => Alert => Play Beep During Execution
  - \r => Carriage Return

/-=======================================================-\
  name        [ Valid | Good Practice ]
  NAME        [ Valid | Bad Practice ]
  1name       [ not valid ] => start number ?
  __name      [ valid ] => good practice ?
  name@name   [ not valid ] => special character ?
  name10name  [ valid ] => good practice ?
  name!name   [ not valid ] => special character ?
  first_NAME  [ valid ] => best practice ?
  first_name  [ valid ] => best practice ?
  firstName   [ valid ] => best practice ?
  first name  [ valid ] => bad practice ?
  fn          [ valid ] => bad practice ?
  public      [ not valid ] => name for system ?
  Public      [ valid ] => good practice ?
  /-=======================================================-\
  Data Types
  - What Is Data ?
  - Data Examples In Real Life
  --- Integer => 5000, 10, -100
  --- String => "Elzero Web School", "Osama Elzero", "100A"
  --- Boolean => true, false
  --- Float => 18.5, 1900.50
  --- Array => ["Osama", "Ahmed", "Sayed", "Mahmoud"]
  - Why We Choose Data ?
  --- Size
  --- Operation

  What Is Operand ?
  - The Part Of an Instruction Representing The Data Manipulated by The Operator
  /-=======================================================-\
  Data Types

  - Ram [R]andom [A]ccess [M]emory
  --- Computer Memory Has Locations

  - Data Sizes
  --- Bit => [Bi]nary Digi[t] => Smallest Unit in Storage Store Only 0 Or 1
  --- Byte => A Group of 8 => Store Single Character
  --- Kilo Byte => 1024 Byte
  --- Mega Byte => 1024 Kilobytes
  --- Giga Byte => 1024 Megabytes
  --- Tera Byte => 1024 Gigabytes

  - Data Types With Size
  --- int => 2 Or 4 Bytes => Will Cover Later Why
  --- float => 4 Bytes [18.5656565656]
  --- double => 8 Bytes [18.5656565656]
  ------ Number . Fractional Component
  --- char => 1 Byte => "A" "x" "9"
  --- boolean => 1 Byte => true, false
  - Double vs Float

  - The Story Behind Creating A Variable
  --- Declare A Variable
  --- Tell Computer That We Need To Reserve X Bytes Of Memory Depend On Data Type
  --- Restrict Type Of Data To The Type We Choosed

  - Declare Variable Without Type
  - See Memory Address &

  - Application To Create
  --- Create App Ask You To Type Number Of Kilobytes
  --- Write 3 Lines Contains
  ------ [1] The Number Of Kilobytes That User Input
  ------ [2] The Number Of Bytes
  ------ [3] The Number Of Bits
/-=======================================================-\
Primitive Data Types
  - int => Integer
  --- Test Numbers
  --- Test Floating Point vs Int
  --- Store From -2147483648 To 2147483647
  --- INT_MIN and INT_MAX Constants
  --- Check Limits Header File limits.h
  --- Test Size Of Data Types Without Variables & Use End Line

  - = Assignment Operator
/-=======================================================-\
Primitive Data Types
  - float => Floating Point Number
  --- Test Integer Value In Float Variable
  --- We Make Sure Its Float Not Double By Adding Suffix "f" Or "F"
  --- Test With Auto
  --- 7 Decimal Precision

  - double => Double The Float
  --- 15 Decimal Precision
/-=======================================================-\
  Primitive Data Types
  - char => Character
  --- Added Inside Single Quotes => Test With Auto
  --- ASCII Value
  --- ASCII => American Standard Code for Information Interchange.
  --- A Way of Representing Characters As Numbers

  --- Search For Type Casting
  --- Create App To Convert ASCII To Character
  --- Create App To Convert Character To ASCII
/-=======================================================-\
  Primitive Data Types

  - bool => Boolean
  --- Only Two Possible Values [true, false]
  --- Value Is Case Sensitive
  --- When We Use Boolean Values
  ------ Anything Has On/Off, Yes/No, True/False
  --- Test Boolean In Math
  --- Test > And <
  --- Test Data [100, 0, -100, ""]

  - void => Valueless
  --- Without Value
/-=======================================================-\
  Primitive Data Types
  - Modifiers
  --- Modify The Length Of Data => See Limits

  ----- ٍSigned [int, char]
  -------- Store Positive, Negative Integers And 0
  -------- int Is Signed By Default

  ----- Unsigned [int, char]
  -------- Store Positive Only

  ----- Short [int]
  -------- Can Be short Instead of short int

  ----- Long [int, double]
  -------- Store Maximum Value
  -------- Can Be long Instead of long int

  - Type Alias
  --- using identifier = type;
  --- typedef unsigned long UL;
/-=======================================================-\
  Data Types
  - Type Conversion
  --- Convert Data of One Type To Another

  - Implicit Conversion
  --- Conversion Is Done Automatically By The Compiler

  - Explicit Conversion AKA Type Casting
  --- Conversion Is Done By The Programmer

  - Data Loss
  --- When Larger Type Is Converted To Smaller Type
/-=======================================================-\
// Example
false // bool => Boolean

'a' // char
'9' // char
9 // int
true // bool
100 // int
-10 //int 
0 // int and bool
false // bool
10.9 // float
(^~==================== Operators & Operands ====================~^)

  Operators & Operands
  "Symbols To Operate On Data"

  - Arithmetic Operators
  "For Mathematical Operations"

  --- + => Addition
  --- - => Subtraction
  --- * => Multiplication
  --- / => Division
  --- % => Modulo => Remainder After Division

  What Is Operand ?
  - The Part Of an Instruction Representing The Data Manipulated by The Operator
/-=======================================================-\
Operators & Operands
"Symbols To Operate On Data"

- Assignment Operators
"For Assigning Operations"

--- = Assign
--- += Addition
--- -= Subtraction
--- *= Multiplication
--- /= Division
--- %= Modulo => Remainder After Division
/-=======================================================-\
  Operators & Operands
  "Symbols To Operate On Data"

  - Increment And Decrement Operators
  "For incrementing And Decrementing Values"

  --- Pre/Post Increment
  --- Pre/Post Decrement
/-=======================================================-\

  Operators & Operands
  "Symbols To Operate On Data"

  - Comparison Operators
  "For Comparing Values"

  --- == Equal
  --- != Not Equal
  --- > Greater Than
  --- < Less Than
  --- >= Greater Than Or Equal
  --- <= Less Than Or Equal

/-=======================================================-\
Operators & Operands
  "Symbols To Operate On Data"

  - Logical Operators
  "For Logic Between Values"

  --- && And
  --- || Or
  --- ! Not
/-=======================================================-\
Operators & Operands
  "Symbols To Operate On Data"

  - Operators Precedence
  "Which One Has Higher Precedence"

  Refernce
  --- Operators Precedence Table

  Search
  - Bitwise Operators
  - Spaceship Operator

  Training
  - Try Operators Yourself Before Browsing References
/-=======================================================-\
  Control Flow
  - If Condition Introduction

  Syntax
  if (Condition Is True)
  {
    // Do Something
  }

/-=======================================================-\
  Control Flow
  - else If Condition 

  Syntax
  else if (Condition Is True)
  {
    // Do Something
  }
    *or*
    else
    {
      //do something
    }
/-=======================================================-\
Control Flow
  - Nested If Conditions 
/-=======================================================-\
Control Flow
  - Switch
/-=======================================================-\
/-=======================================================-\
/-=======================================================-\ */



#include <iostream>
using namespace std;

int main()
{ 
//   cout << "Enter any year\n";
// short Year_Event;
// cin >> Year_Event;
  
//   if (Year_Event < 2025)
//   {
//     switch (Year_Event)
//     {
//     case 2019:
//       cout << "it was Covid-19\n";
//     break;
//     case 2011:
//       cout << "it's may birthday !\n";
//       break;
//       default:
//       cout << "there aren't event\n";
//     break;
//     }
//   }
//   else
//   {
//     cout << "We don't reached that year\n";
//   }
  
int result = 0;
int num1, num2, num3, num4;
cout << "Please Type 5 Numbers In A Row\n";
cout << "Only Even Numbers Smaller Than 20 Will Be Counted\n";
cin >> num1 >> num2 >> num3 >> num4;
if (num1 < 20 && (num1 % 2) == 0) 
{
  result += num1;
}
if (num2 < 20 && (num2 % 2) == 0) 
{
  result += num2;
}
if (num2 < 20 && (num3 % 2) == 0) 
{
  result += num3;
}
if (num4 < 20 && (num4 % 2) == 0) 
{
  result += num4;
}
cout << result << endl;

/*
  Test Case 1
  Numbers => 15, 16, 22, 8
  Result => 24

  "Explain"
  Starting Result Is 0
  [Number 1] 15 => Not Even Number
  [Number 2] 16 => Smaller Than 20 And Even Number
  0 + 16 = 16
  [Number 3] 22 => Not Smaller Than 20
  [Number 4] 8  => Smaller Than 20 And Even Number
  16 + 8 = 24

  =================================

  Test Case 2
  Numbers => 100, 11, 12, 18
  Result => 30

  "Explain"
  Starting Result Is 0
  [Number 1] 100 => Not Smaller Than 20
  [Number 2] 11  => Not Even Number
  [Number 3] 12  => Smaller Than 20 And Even Number
  0 + 12 = 12
  [Number 4] 18  => Smaller Than 20 And Even Number
  12 + 18 = 30
*/

return 0;
}