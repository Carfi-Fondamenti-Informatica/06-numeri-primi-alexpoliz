#include <iostream>
#include "Dec.h"
  using namespace std;
int main(){
  int a;
  cin >> a;
  if (scm(a,a)){
    cout << "numero primo";
  }else { 
    cout << "numero non primo";
  }
  return 0;
}
