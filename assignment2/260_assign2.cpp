// NOTE: The ONLY files that should be #included for this assignment are iostream,  
// cmath (for the pow function), 
// and string
// No other files should be #included

#include <iostream>
#include <cmath>
#include <string>


// NOTE: The ONLY files that should be #included for this assignment are iostream,  
// cmath (for the pow function), 
// and string
// No other files should be #included


using namespace std;

int bin_to_dec(string);
string dec_to_bin(int);
int hex_to_dec(string);  
string dec_to_hex(int);  


int main() 
{
	
	cout<<"10000011 binary = "<<bin_to_dec("10000011")<<" decimal\n"; // you should get 131
	cout<<"01010101 binary = "<<bin_to_dec("01010101")<<" decimal\n"; // you should get 85
	cout<<"1111111111111111 binary = "<<bin_to_dec("1111111111111111")<<" decimal\n"; // you should get 65,535
	cout<<"0111111111111111 binary = "<<bin_to_dec("0111111111111111")<<" decimal\n\n"; // you should get 32,767
	
	cout<<"255 decimal = "<<dec_to_bin(255)<<" binary\n"; //you should get 11111111
	cout<<"65532 decimal = "<<dec_to_bin(65532)<<" binary\n"; //you should get 1111111111111100
	cout<<"12 decimal = "<<dec_to_bin(12)<<" binary\n"; //you should get 1100
	cout<<"1000000 decimal = "<<dec_to_bin(1000000)<<" binary\n\n"; //you should get 11110100001001000000
	
	cout<<"ABC hexadecimal = "<<hex_to_dec("ABC")<<" decimal\n"; //you should get 2,748
	cout<<"F5 hexadecimal = "<<hex_to_dec("F5")<<" decimal\n"; //you should get 245
	cout<<"1234 hexadecimal = "<<hex_to_dec("1234")<<" decimal\n"; //you should get 4,660
	cout<<"FDECB hexadecimal = "<<hex_to_dec("FDECB")<<" decimal\n\n"; //you should get 1,040,075
	
	cout<<"512 decimal = "<<dec_to_hex(512)<<" hexadecimal\n"; //you should get 200
	cout<<"5000 decimal = "<<dec_to_hex(5000)<<" hexadecimal\n"; //you should get 1388
	cout<<"900000 decimal = "<<dec_to_hex(900000)<<" hexadecimal\n"; //you should get DBBA0
	cout<<"65525 decimal = "<<dec_to_hex(65525)<<" hexadecimal\n\n"; //you should get FFF5
	
	
	system("PAUSE");
	return 0;

}

// Converts any UNsigned binary number to decimal

int bin_to_dec(string s) 
{
  // take in string of digits
  // loop through each digit
  // return a total value
  // setting n equal to length - 1 allows us to increment to 0 without reversing the string
  
  // loop through string, if char is 1, perform calculation and decrement 2^n if not only decrement 2^n
  int total = 0;
  int squareVal = 0;
  int n = s.length() - 1;

  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '1') {
      squareVal = pow(2, n);
      total = total + squareVal;
      n = n - 1;
    } else {
      n = n - 1;
    }
  }



  return total;
}	

//Converts any non-negative decimal number to binary

string dec_to_bin(int n)  
{

  // divide n until quotient is 0
  // store remainders into a string
  int quotient = 1;
  int remainder = 0;
  string binaryStr;
  string remToAdd;

  while (floor(n / 2) != 0) {
    remainder = n % 2;
    n = n / 2;
    remToAdd = to_string(remainder);
    binaryStr = binaryStr + remToAdd;
  }
  
  // check if last bit will be 0 or 1 and apply it 
  if (n / 2 > 0) {
    remainder = 0;
  } else {
    remainder = 1;
  }

  remToAdd = to_string(remainder);
  binaryStr = binaryStr + remToAdd;
  string reversedStr;

  // need to reverse the string now
  for (int i = binaryStr.length() - 1; i >= 0; i--) {
    reversedStr = reversedStr + binaryStr[i];
  }

  return reversedStr;
}


//Converts any UNsigned hexadecimal number to decimal

int hex_to_dec(string s) 
{
	// IMPLEMENT THIS FUNCTION
	// IMPLEMENT THIS FUNCTION
	// IMPLEMENT THIS FUNCTION
}	


//Converts any non-negative decimal number to hexadecimalConverts any non-negative decimal number to hexadecimal

string dec_to_hex(int n)  
{
	// IMPLEMENT THIS FUNCTION
	// IMPLEMENT THIS FUNCTION
	// IMPLEMENT THIS FUNCTION
}



