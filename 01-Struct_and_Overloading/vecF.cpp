#include "vecF.h"
#include <iostream>

float VecF::get(int i) const{
   return v[i];}
   
void VecF::set(int i, float f){
   v[i]=f;}

VecF::VecF(){
   size=0;
   v=nullptr;}
   
VecF::VecF(int size){
   this->size=size;
   v= new float[size];}
   
VecF::VecF(const VecF& other){
    size=0;
    v=nullptr;
    if(other.size==0){
      return;}
    size= other.size;
    v= new float[size];
    for(int i=0;i<size;++i){
       v[i]=other.v[i];}}
      
VecF::~VecF(){
  if (size>0){
   delete [] v;}}
   
VecF& VecF::operator=(const VecF& other){
  if (size>0){
     delete [] v;
     size=0;
     v=nullptr;}
  if(other.size==0){
    return *this;}
  size=other.size;
  v= new float[size];  
  for (int i=0; i<size; ++i){
    this->v[i]=other.v[i];}
  return *this;}

VecF VecF::operator+(const VecF& other)const{
    VecF sum(*this);
    if (size!=other.size){
     std::cerr << "error" << std::endl;
     return sum;}
    for(int i=0;i<size;++i){
     sum.v[i]= v[i] + other.v[i];}
    return sum;}
    
VecF VecF::operator-(const VecF& other) const{
     VecF diff = *this;
     if (size!=other.size){
       std::cerr<<"error"<<std::endl;
       return diff;}
     for ( int i=0;i<size; ++i){
        diff.v[i]= v[i]-other.v[i];}
     return diff;}
     
VecF VecF::operator*( float s) const{
     VecF Prod(*this);
     for(int i=0; i<size; ++i){
        Prod.v[i]= v[i]*s;}
     return Prod;
  }
  
float VecF::operator*(const VecF& other) const{
      float scalar=0;
      if (size != other.size){
        std::cerr<<"error"<<std::endl;
        return scalar;}
      for(int i=0; i<size;++i){
        scalar += (v[i]*other.v[i]);}
      return scalar;}
     

