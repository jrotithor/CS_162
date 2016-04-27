#include <iostream>
#include <string>
#include<cstdlib>
#include "./mult_div.h"

using namespace std;

struct mult_div_values{
   int mult;
   float div;
};
/*
   bool is_valid_dimensions(char*m, char*n);
   mult_div_values** create_table(int a, int b);
   void set_mult_values(mult_div_values **, int a, int b);
   void set_div_values(mult_div_values **, int a, int b);
   void delete_table(mult_div_values **table, int m);
   */

void set_mult_values(mult_div_values **table, int m , int n){
   for(int i = 0; i < m; i++)
      for(int j = 0; j < n; j++){
	 table[i][j].mult = (i+1)*(j+1);
      }

}
void set_div_values(mult_div_values **table, int m , int n){
   for(int i = 0; i < m; i++)
      for(int j = 0; j < n; j++){
	 (float)i;
	 (float)j;
	 table[i][j].div = (i+1)*(1.0/(j+1));
      }

}
void printarraymult(mult_div_values ** table, int m, int n){

   for(int i = 0; i < m; i++){
      for(int j = 0; j < n; j++){
	 if(table[i][j].mult < 10)
	    cout << "  ";
	 else
	    cout << " ";
	 cout << table[i][j].mult;
      }
      cout << endl;
   }
}

void printarraydiv(mult_div_values ** table, int m, int n){

   for(int i = 0; i < m; i++){
      for(int j = 0; j < n; j++){
	 cout << "  ";
	 cout << table[i][j].div;
      }
      cout << endl;
   }
}

void delete_table(mult_div_values **table, int m){

   for(int i = 0; i < m; i++)
      delete [] table[i];
   delete [] table;
}

bool is_valid_dimensions(char* m, char* n){ 
   atoi(m);
   atoi(n);

   if((atoi(m) <= 0 || atoi(n) <= 0)|| cin.fail())
      return false;
   return true;
}




mult_div_values** create_table(int m, int n){
   mult_div_values** a = new mult_div_values*[m];
   for(int i = 0; i < m; i++){
      a[i] = new mult_div_values[n];
   }
   return a;

}
int main(int argc, char* argv[]){
   struct mult_div_values m;
   string c;
   bool x = is_valid_dimensions(argv[1], argv[2]);
   int a = atoi(argv[1]);
   int b = atoi(argv[2]);
   string d = "1";
   while(x == 0){
      cout << "Thats not a valid input. Try again";
      cin >> a;
      cin >> b;
      if(cin.fail()){
	 cin.clear();
	 cin.ignore();
	 x = 0;
      }
      else
	 x = 1;
   }
   while(x){
      mult_div_values ** m = create_table(a,b);
      set_mult_values(m, a,b);
      set_div_values(m, a, b);
      printarraymult(m, a, b);
      printarraydiv(m, a,b);
      delete_table(m,a);
      cout << "would you like to see a different size matrix(0 = no, 1 = yes)" << endl;
      cin >> c;
      if (c != d)
	 x = false;
	 else{
	    cout << "enter rows:" << endl;
	    cin >> a;
	    cout << "enter cols:" << endl;
	    cin >> b;

	 }
      

   }

   return 0;

}
