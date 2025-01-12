#include <iostream>
#include <cmath>
using namespace std;


double calcular_imagen(double& x) {
  double res = sin(2*x +1); //introducir funcion aqui
  return res;
}

int main() {
  cout.setf(ios::fixed);
  cout.precision(10);
  int n;
  cout << "insertar numero de intervalos" << endl;
  cin >> n;
  double a, b, res, xi, h;
  cout << "insertar a y b" << endl;
  cin >> a >> b;
  h = (b-a)/n;
  xi = a;
  res += calcular_imagen(a);
  res += calcular_imagen(b);
  for (int i = 1; i < n; i++) {
    xi = xi + h;
    if (i%2 == 0) res = res + 2 * calcular_imagen(xi);
    else res = res + 4 * calcular_imagen(xi);
  }
  res = (h/3)*res;
  cout << "El resultado es: " << res << endl;
}
