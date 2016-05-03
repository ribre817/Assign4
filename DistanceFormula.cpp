#include <iostream>
#include <cmath>
using namespace std;

int distanceFormula (int x1, int x2, int y1, int y2){

  int calcx = x2 - x1;
  calcx = pow(calcx,2);
  int calcy = y2 - y1;
  calcy = pow(calcy,2);

  int formula = calcx + calcy;
  formula = sqrt(formula);

  return formula;
}

int main() {
  int x1,x2,y1,y2;
  cout << "Please enter the value below: " << endl;
  for(int i=0; i<4;i++){
    if(i < 2)
      cout << 'x' << i + 1;
    else if (i == 2)
      cout << 'y' << '1';
      else
      cout << 'y' << '2';
  }
  return 0;
}
