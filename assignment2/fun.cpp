#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string dec_to_hex(int);

int main() {

  string thething;

  thething = dec_to_hex(900000);

  cout << thething;

  return 0;
}


string dec_to_hex(int n)  
{
  


  int remainder = 0;
  string charRemainder;
  string hexadecimalStr;

  char hexArr[] = {'A', 'B', 'C', 'D', 'E', 'F'};

  while (floor(n / 16) != 0) {
    remainder = n % 16;
    n = n / 16;

    switch(remainder) {
      case 10:
        hexadecimalStr = hexadecimalStr + hexArr[0];
        break;
      case 11:
        hexadecimalStr = hexadecimalStr + hexArr[1];
        break;
      case 12:
        hexadecimalStr = hexadecimalStr + hexArr[2];
        break;
      case 13:
        hexadecimalStr = hexadecimalStr + hexArr[3];
        break;
      case 14:
        hexadecimalStr = hexadecimalStr + hexArr[4];
        break;
      case 15:
        hexadecimalStr = hexadecimalStr + hexArr[5];
        break;
      default:
        charRemainder = to_string(remainder);
        hexadecimalStr = hexadecimalStr + charRemainder;
        break;
    }

  }
  remainder = n % 16;
    switch(remainder) {
      case 10:
        hexadecimalStr = hexadecimalStr + hexArr[0];
        break;
      case 11:
        hexadecimalStr = hexadecimalStr + hexArr[1];
        break;
      case 12:
        hexadecimalStr = hexadecimalStr + hexArr[2];
        break;
      case 13:
        hexadecimalStr = hexadecimalStr + hexArr[3];
        break;
      case 14:
        hexadecimalStr = hexadecimalStr + hexArr[4];
        break;
      case 15:
        hexadecimalStr = hexadecimalStr + hexArr[5];
        break;
      default:
        charRemainder = to_string(remainder);
        hexadecimalStr = hexadecimalStr + charRemainder;
        break;
    }



  string reversedStr;

  // need to reverse the string now
  for (int i = hexadecimalStr.length() - 1; i >= 0; i--) {
    reversedStr = reversedStr + hexadecimalStr[i];
  }

  return reversedStr;
}


