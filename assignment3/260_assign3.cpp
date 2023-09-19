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

string addbin(string, string);  
string addhex(string, string); 


int main()
{
	
	cout<<"binary 1101 + 1000 = "<<addbin("1101", "1000")<<endl;   //you should get 10101
	cout<<"binary 11000 + 1011 = "<<addbin("11000", "1011")<<endl; //you should get 100011
	cout<<"binary 11111111 + 1 = "<<addbin("11111111", "1")<<endl; //you should get 100000000
	cout<<"binary 101010 + 10 = "<<addbin("101010", "10")<<endl<<endl; //you should get 101100
	
	cout<<"hexadecimal A4 + A5 = "<<addhex("A4", "A5")<<endl;  //you should get 149
	cout<<"hexadecimal 2B + C = "<<addhex("2B",  "C")<<endl;    //you should get 37
	cout<<"hexadecimal FABC + 789 = "<<addhex("FABC", "789")<<endl;  //you should get 10245
	cout<<"hexadecimal FFFFFF + FF = "<<addhex("FFFFFF", "FF")<<endl<<endl; //you should get 10000FE 
	

	system("PAUSE");
	return 0;
	
}


string addbin(string bin1, string bin2)
{

  // iterate over each subsequent string with two variables
  // check conditions
  // if 0 + 0 result = 0
  // if 0 + 1 result = 1
  // if 1 + 0 result = 1
  // if 1 + 1 result = 10, carry 1 to next highest bit
  string bin_add;
  int length = bin1.length() - 1;
  int j = 0;

  for (int i = 0; i < length; i++) {
    if (bin1[i] == '0' && bin2[j] == '0') {
      bin_add += '0';
    } else if (bin1[i] == '1' && bin2[j] == '0') {
      bin_add += '1';
    } else if (bin1[i] == '0' && bin2[j] == '1') {
      bin_add += '1';
    } else if (bin1[i] == '1' && bin2[j] == '1') {
      for (int k = 0; k < bin_add; k++) {

      }
    }
  }



	return bin_add;
}

string addhex(string hex1, string hex2)
{
	//IMPLEMENT THIS FUNCTION
	//IMPLEMENT THIS FUNCTION
	//IMPLEMENT THIS FUNCTION
	
}
