/*
 *Filename: 2darray.cpp
 *Author: Jaydeep Rotithor
 *Date: 3/2/15
 *Description- takes in array dimensions, prints the array, and then prints the max product of the array.
 *Input: Rows, columns
 *Output: array, position of max product, shape, max product
 * */
void printarray(int ** a, int rows, int cols);



#include <iostream>
#include <cstdlib>
#include<ctime>
#include <cstring>
using namespace std;

/*
 *Function:createarray 
 *Description:creates the array
 *Parameters:rows, cols
Preconditions:user enters dimensions
Postconditions:an array is created.

*/
int** createarray(int rows,int cols){
   int **a = new int * [rows];
   for(int i=0;i<rows;i++)
      a[i]= new int[cols];
   return a;
}

/*
 *Function: initializearray
 *Description:initializes the array
 *Parameters:array, rows, cols
Preconditions:user entered array dimensions
Postconditions:the array is filled.

*/
void  initializearray(int ** a,int rows,int cols){
   for(int i = 0; i < rows; i++)
      for(int j = 0; j < cols; j++)
	 a[i][j] = rand() % 50 + 1;

}

/*
 *Function: initializearray
 *Description:initializes the array
 *Parameters:array, rows, cols
Preconditions:user entered array dimensions
Postconditions:the array is filled.

*/
void initializearray(int ** a, int rows, int cols, bool test){
   if(test == 1){
      for(int i = 0; i < rows; i++){
	 for(int j = 0; j < cols; j++)
	    cin >>  a[i][j];
      }
   }
   
   else initializearray(a, rows, cols);
}

/*
 *Function:Printarray 
 *Description:prints the array
 *Parameters:array, rows, cols
Preconditions:an array is filled
Postconditions:the array is printed.

*/
void printarray(int ** a, int rows, int cols){
   for(int i = 0; i < rows; i++){
      for(int j = 0; j < cols; j++){
	 if (a[i][j] < 10)
	    cout << "0";
	 cout << a[i][j] << " ";
      }
      cout << endl;
   }
}
/*
 *Function: box
 *Description:finds the highest product in a box.

 *Parameters:array, rows, cols, address of i and j
Preconditions:array is filled.
Postconditions:a product is calculated

*/
int box(int ** a, int rows, int cols, int &i, int &j){
   int highest;
   int current;
   int box1;
   for(i = 0; i < rows - 1; i++){
      for(j = 0; j < cols - 1 ; j++){
	 box1 = a[i][j] * a[i][j+1] * a[i+1][j] * a[i+1][j+1];
	 current = box1;
	 if(current > highest)
	    highest = current;
      }
   }
   for(i = 0; i < rows - 1; i++)
      for(j = 0; j < cols - 1; j++){

	 box1 = a[i][j] * a[i][j+1] * a[i+1][j] * a[i+1][j+1];
	 if(box1 == highest)
	    return highest;
      }
   return highest;
}

/*
 *Function: down
 *Description:finds the highest product in a line.

 *Parameters:array, rows, cols, address of i and j
Preconditions:array is filled.
Postconditions:a product is calculated

*/
int down(int ** a, int rows, int cols, int &i, int &j){
   int highest;
   int current;
   int down1;
   for(i = 0; i < rows - 3; i++){
      for(j = 0; j < cols; j++){
	 down1 = a[i][j] * a[i+1][j] * a[i+2][j] * a[i+3][j];
	 current = down1;
	 if(current > highest)
	    highest = current;
      }
   }
   for(i = 0; i < rows - 3; i++)
      for(j = 0; j < cols; j++){
	 down1 = a[i][j] * a[i+1][j] * a[i+2][j] * a[i+3][j];
	 if(down1 == highest)
	    return highest;
      }
   return highest;
}

/*
 *Function: up
 *Description:finds the highest product in a line.

 *Parameters:array, rows, cols, address of i and j
Preconditions:array is filled.
Postconditions:a product is calculated

*/
int up(int ** a, int rows, int cols, int &i, int &j){
   int highest;
   int current;
   int up1;
   for(i = 3; i < rows; i++){
      for(j = 0; j < cols; j++){
	 up1 = a[i][j] * a[i-1][j] * a[i-2][j] * a[i-3][j];
	 current = up1;
	 if(current > highest)
	    highest = current;
      }
   }
   for(i = 3; i < rows; i++)
      for(j = 0; j < cols; j++){
	 up1 = a[i][j] * a[i-1][j] * a[i-2][j] * a[i-3][j];
	 if(up1 == highest)
	    return highest;
      }
   return highest;
}

/*
 *Function: left
 *Description:finds the highest product in a line.

 *Parameters:array, rows, cols, address of i and j
Preconditions:array is filled.
Postconditions:a product is calculated
*/

int left(int ** a, int rows, int cols, int &i, int &j){
   int highest;
   int current;
   int left1;
   for(i = 0; i < rows; i++){
      for(j = 3; j < cols; j++){
	 left1 = a[i][j] * a[i][j-1] * a[i][j-2] * a[i][j-3];

	 current = left1;
	 if(current > highest)
	    highest = current;
      }
   }
   for(i = 0; i < rows; i++)
      for(j = 3; j < cols; j++){
	 left1 = a[i][j] * a[i][j-1] * a[i][j-2] * a[i][j-3];
	 if(left1 == highest)
	    return highest;
      }
   return highest;
}

/*
 *Function: right
 *Description:finds the highest product in a line.

 *Parameters:array, rows, cols, address of i and j
Preconditions:array is filled.
Postconditions:a product is calculated
*/
int right(int ** a, int rows, int cols, int &i, int &j){
   int highest;
   int current;
   int right1;
   for(i = 0; i < rows; i++){
      for(j = 0; j < cols - 3; j++){
	 right1 = a[i][j] * a[i][j+1] * a[i][j+2] * a[i][j+3];

	 current = right1;
	 if(current > highest)
	    highest = current;
      }
   }
   for(i = 0; i < rows; i++)
      for(j = 0; j < cols - 3; j++){
	 right1 = a[i][j] * a[i][j+1] * a[i][j+2] * a[i][j+3];
	 if(right1 == highest)
	    return highest;
      }
   return highest;
}

/*
 *Function: diagonally
 *Description:finds the highest product in a diagonal line.

 *Parameters:array, rows, cols, address of i and j
Preconditions:array is filled.
Postconditions:a product is calculated
*/
int diagonally(int ** a, int rows, int cols, int &i, int &j){
   int highest;
   int current;
   int diagonally1;
   for(i = 0; i < rows - 3; i++){
      for(j = 0; j < cols - 3; j++){
	 diagonally1 = a[i][j] * a[i+1][j+1] * a[i+2][j+2] * a[i+3][j+3];

	 current = diagonally1;
	 if(current > highest)
	    highest = current;
      }
   }
   for(i = 0; i < rows - 3 ;i++)
      for(j = 0; j < cols - 3; j++){
	 diagonally1 = a[i][j] * a[i+1][j+1] * a[i+2][j+2] * a[i+3][j+3];
	 if(diagonally1 == highest)
	    return highest;
      }
   return highest;
}

/*
 *Function: diagonally2
 *Description:finds the highest product in a diagona line.

 *Parameters:array, rows, cols, address of i and j
Preconditions:array is filled.
Postconditions:a product is calculated
*/
int diagonally2(int ** a, int rows, int cols, int &i, int &j){
   int highest;
   int current;
   int diagonally3;

   for(i = 3; i < rows; i++){
      for(j = 0; j < cols - 3; j++){
	 diagonally3 = a[i][j] * a[i-1][j+1] * a[i-2][j+2] * a[i-3][j+3];

	 current = diagonally3;
	 if(current > highest)
	    highest = current;
      }
   }
   for(i = 3; i < rows; i++)
      for(j = 0; j < cols - 3; j++){
	 diagonally3 = a[i][j] * a[i-1][j+1] * a[i-2][j+2] * a[i-3][j+3];
	 if(diagonally3 == highest)
	    return highest;
      }
   return highest;
}



/*
 *Function: Product
 *Description:finds the total max product
 *Parameters: a, rows, cols
Preconditions:the max product for each shape has been found.
Postconditions:the total maximum product will be found.

*/

int product(int ** a, int  rows, int cols){
   int c,d,e,f,g,h,i,j,k,l,m,n,o,p;
   int current = 0;
   int highest = 0;
   int highest1 =  box(a, rows, cols,c,d);
   int highest2 = left(a, rows, cols,e,f);
   int highest3 = right(a,rows, cols,g,h);
   int highest4 =  up(a, rows, cols,i,j); 
   int highest5 =  down(a, rows, cols,k,l);
   int highest6 = diagonally(a, rows, cols,m,n);
   int highest7 = diagonally2(a, rows, cols,o,p);
   int b [] = {highest1, highest2, highest3, highest4, highest5, highest6, highest7};	
   for(int i = 0; i < 7; i++){ 
      current = b[i];
      if(current > highest)
	 highest = current;
   }
   if(highest == highest1)
      cout << "row: " << (c + 1) << " column: " << (d + 1) << '\n' << "shape/direction: " << "box" << endl;
   else if(highest == highest2)
      cout << "row: " << (e+1) << " column: " << (f+1) << '\n' << "shape/direction: " << "left"  << endl;
   else if(highest == highest3)
      cout << "row: " << (g +1) << " column: " << (h+1) << '\n' << "shape/direction: "<< "right" << endl;
   else if(highest == highest4)
      cout << "row: " << (i+1) << " column: " << (j+1) << '\n' << "shape/direction: " << "up" << endl;
   else if(highest == highest5)
      cout << "row: " << (k+1) << " column: " << (l+1) << '\n' << "shape/direction: " << "down" << endl;
   else if(highest == highest6)
      cout << "row: " << (m+1) << " column: " << (n+1) << '\n' << "shape/direction: " << "diagonally" << endl;
   else if(highest == highest7)
      cout << "row: " << (o+1) << " column: " << (p+1) << '\n' << "shape/direction: " << "diagonally(bottom left to top right)" << endl;
   return highest;
}

/*
 *Function: Main
 *Description:executes the code
 *Parameters:argc, char *argv[]
Preconditions:the above code compiles
Postconditions:the code will be run.

*/
int main(int argc, char * argv[]){
   bool test = false;
   if(argc >1 && !strcmp(argv[1],"-test"))
      test = true;
 
   else if(argc > 1 && strcmp(argv[1], "-test")){
      cout << "please enter -test and your text file or ./ and the function name." << endl;
      exit(0);
   }
   int rows = 0;
   int cols = 0;
   if(!test){
      cout << "enter the number of rows: ";
      cin >> rows;

      while(cin.fail()){
	 cin.clear();
	 cin.ignore();
	 cout << "you need to enter a number of rows here. Please do so: ";
	 cin >> rows;

      }
   }

   if(!test){
      cout << "Enter the number of columns: ";
      cin >> cols;

      while(cin.fail()){
	 cin.clear();
	 cin.ignore();
	 cout << "you need to enter a number of columns here. Please do so: ";
	 cin >> cols;
      }
   }
   if(test)
      cin >> rows;
   if(test)
      cin >> cols;
   int ** a = createarray(rows, cols);
   initializearray(a, rows, cols, test);
   cout << "your matrix is: " << endl;
   printarray(a, rows, cols);
   cout << "the highest product of 4 consecutive numbers is: " << product(a, rows, cols) <<endl;
   return 0;
}





