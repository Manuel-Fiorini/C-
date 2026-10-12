#include <iostream>
#include "vecF.h"

void print(const char* name,const VecF& other){
  std::cout<<name<<std::endl;
  for( int i=0;i< other.size;++i){
     std::cout << other.get(i)<< " ";}
  std::cout<<std::endl;}


int main() {
  VecF a(3);
  a.set(0, 1); a.set(1, 2); a.set(2, 3);
  print("Creazione di a riuscita", a);
  VecF b(5);             
  b = a;
  print("Assegnazione di b riuscita", b);
  VecF c= a+b;
  print("Addizione a+b è c:",c);
  VecF d= c-b;
  print("Differenza c-b:",d);
  float z = c*a;
  std::cout<< "il prodotto scalare tra c e a è z: "<< z << std::endl;
  VecF f= c*z;
  print("Prodotto pr uno scalare tra z e c è:",f);
  
  return 0;
}


