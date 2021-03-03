#include "binomial.h"

Binomial::Binomial(double a1, int b1, double a2, int b2) :
  c1{a1}, c2{a2}, p1{b1}, p2{b2} 
  {
    if (p1 < 1) p1 = 1;
    if (p2 < 1) p2 =1;
  }

double Binomial::GetCoefficient(int i){
  if (i ==1) return c1;
  if (i ==2) return c2;
  return -1;
}
int Binomial::GetPower(int i){
  if (i ==1) return p1;
  if (i ==2) return p2;
  return -1;
}
int Binomial::SetPower(int i, int e){
  if (e < 1) e = 1;
  switch(i) {
    case 1:
      p1 = e;
      return 0;
    case 2:
      p2 = e;
      return 0;
    defulat:
      return -1;
  }
int Binomial::Add(const Binomial &r){
  if (!(p1 == r.p1 && p2 == r.p2)) return -1;
  c1 += r.c1;
  c2 += r.c2;
  return 0;
}
void Binomial::Multiply(double s){
  c1 *= s;
  c2 *= s;
}
void Binomial::Multiply(double s, int e){
  Multiply(s);
  p1 += e;
  p2 += e;
}