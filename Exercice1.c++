#include<iostream>
using namespace std;
class Complex {
private:
    double real;
    double imag;

public:
   
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

   
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    
    Complex operator*(const Complex& other) const {
        return Complex(real * other.real - imag * other.imag,
                       real * other.imag + imag * other.real);
    }

    
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    double real1, imag1, real2, imag2;

    cout << "Entrez la partie réelle du premier nombre complexe : ";
    cin >> real1;
    cout << "Entrez la partie imaginaire du premier nombre complexe : ";
    cin >> imag1;

    cout << "Entrez la partie réelle du deuxième nombre complexe : ";
    cin >> real2;
    cout << "Entrez la partie imaginaire du deuxième nombre complexe : ";
    cin >> imag2;

    Complex complex1(real1, imag1);
    Complex complex2(real2, imag2);

    Complex sum = complex1 + complex2;
    Complex difference = complex1 - complex2;
    Complex product = complex1 * complex2;

    cout << "Addition des nombres complexes : ";
    sum.display();

    cout << "Différence des nombres complexes : ";
    difference.display();

    cout << "Produit des nombres complexes : ";
    product.display();

    return 0;
}
