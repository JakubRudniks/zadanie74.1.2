#include <iostream>
#include <fstream>
#include <algorithm>
#include <math.h>
using namespace std;

const int size= 200;
string tab[size];


bool x(char c) {
  return (c >= '0' && c <= '9');
}

bool xy(string s) {
  for (int i = 0; i < s.length(); i++) {
    if (!x(s[i])) return false;
  }
  return true;
}

void zadanie1(){
  cout << "Zadanie 1:" << endl;
	cout << "Wypisane dane:" << endl;
	  cout << " "<< endl;
  int t = 0;
  for (int i = 0; i < size; i++) {
    if (xy(tab[i])) t++;
  }
  cout << t << endl << endl;
}


void zadanie2() {
  cout << "Zadanie 2:" << endl;
  cout << "Wypisane dane:" << endl;
    cout << " "<< endl;
  
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (i == j) continue;
      if (tab[i] == tab[j]) {
        cout << tab[i] << endl;
        i++;
        break;
      }
    }
  }
  cout << endl;
}

int main() {
  ifstream in("hasla.txt");
  for (int i = 0; i <size; i++) in >> tab[i];
  in.close();
  sort(tab, tab + size);

  zadanie1();
  zadanie2();
}




