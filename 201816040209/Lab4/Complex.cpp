// Lab 4: Complex.cpp
// Member-function definitions for class Complex.
#include <iostream>
using namespace std;

#include "Complex.h"

Complex::Complex( double real, double imaginary )
{
   setComplexNumber( real, imaginary );
} // end Complex constructor

Complex::~Complex()
{
    cout<<"The Date class was called successfully."<<endl;
}

Complex Complex::add(const Complex &right)
{
   /* Write a statement to return a Complex object. Add
      the realPart of right to the realPart of this Complex
      object and add the imaginaryPart of right to the
      imaginaryPart of this Complex object */

      Complex cx; //create one Complex object
      cx.realPart = realPart + right.realPart;
      cx.imaginaryPart = imaginaryPart + right.imaginaryPart;
      return cx;

} // end function add

Complex Complex::subtract( const Complex &right)
{
   /* Write a statement to return a Complex object. Subtract
      the realPart of right from the realPart of this Complex
      object and subtract the imaginaryPart of right from
      the imaginaryPart of this Complex object */
      Complex cx; //create one Complex object
      cx.realPart = realPart - right.realPart;
      cx.imaginaryPart = imaginaryPart - right.imaginaryPart;
      return cx;
} // end function subtract

void Complex::printComplex()
{
   cout << '(' << realPart << ", " << imaginaryPart << ')';
} // end function printComplex

void Complex::setComplexNumber( double rp, double ip )
{
   realPart = rp;
   imaginaryPart = ip;
} // end function setComplexNumber
