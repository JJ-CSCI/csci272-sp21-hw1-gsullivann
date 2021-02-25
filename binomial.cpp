#include "binomial.h"

Binomial::Binomial( float c1, float c2, int p1, int p2){
  coefficient1 = c1;
  coefficient2 = c2;
  if (p1 > 1)
    p1 = 1;
  if (p2 > 1)
    p2 = 1;
  power1 = p1;
  power2 = p2;
};

float Binomial::GetCoefficient(float idx){
  if (idx == 1)
    return coefficient1;
  else if ( idx == 2)
    return coefficient2;
  else 
    return -1;
};

int Binomial::GetPower(int idx){
  if (idx == 1)
    return power1;
  else of (idx == 2)
    return power2;
  else 
    return -1;
};

int Binomial::SetPower(int idx, int pwr){
  if (pwr <= 0)
    pwr = 1;
  if (idx == 1)
    power1 = pwr;
  else if ( idx == 2)
    power2 = pwr;
  else 
    return -1;

  return 0;
};

int Binomial::Add(const Binomial other){
  if ((other.GetPower(1) == power1) && (other.GetPower(2) == power2)){
    coefficient1 += GetCoefficient(1);
    coefficient2 += GetCoefficient(2);
    return 0;
  }
  else if ((other.GetPower(2) == power1) && (other.GetPower(1) == power2)){
    coefficient1 += GetCoefficient(2);
    coefficient2 += GetCoefficient(1);
    return 0;
  }
  else
    return -1;
};

void Binomial::Multiply(float f){
  coefficient1 *= f;
  coefficient2 *= f;
};

void Binomial::Multiply(float coefficient, int pwr){
  coefficient1 *= coefficient;
  coefficient2 *= coefficient;
  power1 *= pwr;
  power2 *= pwr;
}