#include <iostream>
#include <cstring>

using namespace std;

void intByValue(int paramVar);
void intByReferance(int &paramVar);
void intPtrByValue(int* paramVar);
void intPtrByReferance(int* &paramVar);

int main()
{
  int localVar = 2;
  int *ptrVar = &localVar;
  cout << "Local: " << localVar << endl;
  cout << "Pointer: " << *ptrVar << endl;
  cout << "Pointer Address: " << ptrVar << endl << endl;
  intByValue(localVar);
  cout << "After intByValue: " << localVar << endl << endl;
  intByReferance(localVar);
  cout << "After intByReferance: " << localVar << endl << endl;;
  intPtrByValue(ptrVar);
  cout << "After intPtrByValue: " << localVar << endl << endl;
  intPtrByReferance(ptrVar);
  cout << "After intPtrByReferance: " << *ptrVar << endl;
  cout << "Pointer Address: " << ptrVar << endl;
  return 0;
}

void intByValue(int paramVar){
  cout << "Parameter value: " << paramVar << endl;
  paramVar = 3;
  cout << "Parameter After Change: " << paramVar << endl;
}

void intByReferance(int &paramVar){
  cout << "Parameter value: " << paramVar << endl;
  paramVar = 4;
  cout << "Parameter After Change: " << paramVar << endl;
}

void intPtrByValue(int* paramVar){
  cout << "Parameter value: " << *paramVar << endl;
  cout << "Parameter Address: " << paramVar << endl;
  *paramVar = 5;
  paramVar = new int(6);
  cout << "Parameter Value After Change: " << *paramVar << endl;
  cout << "Parameter Address After Change: " << paramVar << endl;
}

void intPtrByReferance(int* &paramVar){
  cout << "Parameter value: " << *paramVar << endl;
  cout << "Parameter Address: " << paramVar << endl;
  *paramVar = 7;
  paramVar = new int(8);
  cout << "Parameter Value After Change: " << *paramVar << endl;
  cout << "Parameter Address After Change: " << paramVar << endl;
}
