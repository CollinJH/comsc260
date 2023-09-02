#include <iostream>
using namespace std;

const int COLS = 5;

int getTotal(int [][COLS], int);
double getAverage(int [][COLS], int);
int getRowTotal(int [][COLS], int);
int getColumnTotal(int [][COLS], int, int);
int getHighestInRow(int [][COLS], int);
int getLowestInRow(int [][COLS], int);

int main()
{
	const int ROWS = 4;  
	
	
	int testArray[ROWS][COLS] =
					{{ 24,   3,  8,  720,  5 },
					{   6,   7, 28, 21, 10 },
					{  45,  9999, 98989, 210030392, 2 },
					{  16,  999, 91,  6, 25 }
   
	
	cout << "The total of the array elements is "
		 << getTotal(testArray, ROWS)
		 << endl;
   

	cout << "The average value of an element is "
		 << getAverage(testArray, ROWS)
		 << endl;


	cout << "The total of row 0 is "
		 << getRowTotal(testArray, 0)
		 << endl;


	cout << "The total of col 2 is "
		 << getColumnTotal(testArray, 2, ROWS)
		 << endl;

     
	cout << "The highest value in row 2 is "
		 << getHighestInRow(testArray, 2)
		 << endl;


	cout << "The lowest value in row 2 is "
		 << getLowestInRow(testArray, 2)
		 << endl;
        
    system("PAUSE");
	return 0;
}

int getTotal(int array[][COLS], int rows)
{
  // iterate through each row, column by column
  // add up all the items in the array
  int total = 0;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < COLS; j++) {
      total = total + array[i][j];
    }
  }

  return total;
}


double getAverage(int array[][COLS], int rows)
{
  // create floats to get exact amount 
  float average = 0.0;
  float length = 0.0;
  
  // traverse the 2d array, add to an amount
  // increment by each item to get length of array
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < COLS; j++) {
      average = average + array[i][j];
      length++;
    }
  }
  
  return average / length;
}


int getRowTotal(int array[][COLS], int rowToTotal)
{

  int rowTotal = 0;
  
  // traverse 2d array only to specified row
  // ensure traversal will work with only first row

  for (int i = 0; i <= rowToTotal; i++) {
    for (int j = 0; j < COLS; j++) {
      rowTotal = rowTotal + array[i][j];
    }
  }

  return rowTotal;
}


int getColumnTotal(int array[][COLS], int colToTotal, int rows)
{
	int columnTotal = 0;
  
  // traverse 2d array
  // check if j is currently at the column requested to total
  // if it is, add it to total
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j <= COLS; j++) {
      if (j == colToTotal) {
        columnTotal = columnTotal + array[i][j];
      }
    }
  }

  return columnTotal;

}


int getHighestInRow(int array[][COLS], int rowToSearch)
{
  int highestInt = 0;

  // for loop allows us to iterate over each column
  // rowToSearch specifies which row we are going to iterate over
  // compare the array value at the index to highestInt
  // if it is greater than current value, replace it

  for (int i = 0; i < COLS; i++) {
    if (array[rowToSearch][i] > highestInt) {
      highestInt = array[rowToSearch][i];
    }
  }

  return highestInt;


      
}


int getLowestInRow(int array[][COLS], int rowToSearch)
{
   
  // for loop allows us to iterate over each column
  // rowToSearch specifies which row we are going to iterate over
  // compare the array value at the index to lowestInt
  // if it is less than current value, replace it

  int lowestInt = INT_MAX;
  
  for (int i = 0; i < COLS; i++) {
    if (array[rowToSearch][i] < lowestInt) {
      lowestInt = array[rowToSearch][i];
    }
  }

  return lowestInt;
	
}

