#include<iostream>
using namespace std;
int main(){
int x;
cin >> x;
while(cin.fail()){
   cin.clear();
   cin >> x;
   cout << "wrong answer" << endl;
}

return 0;
}
