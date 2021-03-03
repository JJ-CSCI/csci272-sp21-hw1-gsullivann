class Binomial {
  double c1, c2;
  int p1, p2;
public:
  Binomial(double a1 = 1.0, int b1 = 1, double a2 = 1.0, int b2 = 1);
  double GetCoefficient(int i);
  int GetPower(int i);
  int SetPower(int i, int e);
  int Add(const Binomial &r);
  void Multiply(double s);
  void Multiply(double s, int e);
};
