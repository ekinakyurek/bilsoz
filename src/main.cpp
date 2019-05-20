#include "bilsoz/BilSoz.hpp"
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(int argc, char *argv[]){
  if (argc > 1)
  {
    std::string word(argv[1]);
    map<string, string>::iterator iter = BilSoz::dict.find(word);
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
