#include <iostream>
#include <string>
using namespace std;

double calcular_imagen(double& x) {
  double res = (3*x*x-4*x+2)/(x*x+1); //introducir funcion aqui
  return res;
}

int main() {
  cout.setf(ios::fixed);
  cout.precision(10);
  int n;
  cout << "insertar numero de iteraciones" << endl;
  cin >> n;
  double a, b, h, res, xi ;
  cout << "insertar a y b" << endl;
  cin >> a >> b;
  h = (b-a)/n;
  xi = a;
  res += calcular_imagen(a)/2;
  res += calcular_imagen(b)/2;
  for (int i = 1; i < n; i++) {
    xi = xi + h;
    res += calcular_imagen(xi);
  }
  res = h*res;
  cout << "El resultado es: " << res << endl;
}
