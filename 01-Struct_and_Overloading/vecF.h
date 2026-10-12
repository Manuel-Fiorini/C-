#pragma once

struct VecF{
  int size;
  float* v;
  float get(int i) const;
  void set(int i, float f);
  
  
  VecF();
  VecF(int size);
  VecF(const VecF& other);
  ~VecF();
  VecF& operator=(const VecF& other) ;
  VecF operator+(const VecF& other) const;
  VecF operator-(const VecF& other) const;
  VecF operator*(float s) const;
  float operator*(const VecF& other) const;
  };
