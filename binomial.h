

class Binomial {
  float coefficient1;
  float coefficient2;
  int power1;
  int power2;
public:
  Binomial(float c1 = 1.0, float c2 = 1.0, int p1 = 1, int p2 = 1);
  float GetCoefficient(float index);
  int GetPower(int index);
  int SetPower(int index, int value);
  int Add(const Binomial &B);
  void Multiply(float num);
  void Multiply(float monoCoefficient, int monoPower);
};

