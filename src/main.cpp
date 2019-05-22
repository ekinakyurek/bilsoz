#include "bilsoz/BilSoz.hpp"
#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std;


string join(char* arr[], int n, char c, string s) {
   for (int i = 1; i < n; ++i) {
      s += arr[i];
      if (i < n-1)
         s += c;
   }
   transform(s.begin(), s.end(), s.begin(), ::tolower);
   return s;
}

int main(int argc, char *argv[]){
  if (argc > 1)
  {
    unordered_map<string, string>::iterator iter = BilSoz::dict.find(join(argv,argc,' ',""));
    if (iter != BilSoz::dict.end())
    {
      cout << iter->second << endl;
    }else{
      cout << "bu kelime sözlükte bulunamadı." << endl;
    }
    return 0;
  }
  cout << "lütfen aramak istediğiniz kelimeyi yazıp tekrar çalıştırın." << endl;
  return 0;
};
