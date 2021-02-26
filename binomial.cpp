#include "binomial.h"

Binomial::Binomial(float c1 = 1.0, float c2 = 1.0, int p1 = 1, int p2 = 1) {
  coefficient1 = c1;
  coefficient2 = c2;
  if (p1 < 1)
    power1 = 1;
  else 
    power1 = p1;
  if (p2 < 1)
    power2 = 1;
  else
    power2 = p2;
};

float Binomial::GetCoefficient(float index){
  if (index == 1)
    return coefficient1;
  else if (index == 2)
    return coefficient2;
  else
    return -1;
};

int Binomial::GetPower(int index){
  if (index == 1)
    return power1;
  else if (index == 2)
    return power2;
  else 
    return -1;
};

int Binomial::SetPower(int index, int value){
  if (index == 1){
    if (value < 1)
      power1 = 1;
    else 
      power1 = value;
  };
  else if (index == 2){
    if (value < 1)
      power2 = 1;
    else 
      power2 = value;
  };
  else 
    return -1;

  return 0;
};

int Binomial::Add(const Binomial b){
  if (power1 == b.power1 && power2 == b.power2){
    coefficient1 += b.coefficient1;
    coefficient2 += b.coefficient2;

    return 0;
  }
}

void Binomial::Multiply(float num){
  coefficient1 *= num;
  coefficient2 *= num;
};

void Binomial::Multiply(float monoCoefficient, int monoPower){
  coefficient1 *= monoCoefficient;
  coefficient2 *= monoCoefficient;
  power1 += monoPower;
  power2 += monoPower;
};
