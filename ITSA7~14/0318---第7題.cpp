#include <iostream>
using namespace std;

// 複數的類別定義
class Complex {
private:
    int re, im; // 複數的實部與虛部
public:
    Complex(int r = 0, int i = 0) {
        re = r;
        im = i;
    }

    Complex operator + (Complex const& obj) {
        Complex result;
        result.re = re + obj.re;
        result.im = im + obj.im;
        return result;
    }

    Complex operator - (Complex const& obj) {
        Complex result;
        result.re = re - obj.re;
        result.im = im - obj.im;
        return result;
    }

    Complex operator * (Complex const& obj) {
        Complex result;
        result.re = re * obj.re - im * obj.im;
        result.im = im * obj.im + im * obj.im;
        return result;
    }

void display() {
    cout << re << " " << im << endl;
    }
};

int main()
{
    Complex c;
    Complex c1(1, 1);
    cout << "c1 = ";
    c1.display();

    Complex c2(1, 1);
    cout << "c2 = ";
    c2.display();

    Complex c3 = c1 + c2;
    cout << "c1 + c2 =";
    c3.display();

    Complex c4 = c1 - c2;
    cout << "c1 - c2 =";
    c4.display();

    Complex c5 = c1 * c2;
    cout << "c1 * c2 =";
    c5.display();

    int n;
    Complex c[10];

    cin >> n;
    for (int i = 0; i< n; i++) {
        char oper;
        int ar, ai, br, bi;
        cin >> oper >> ar >> ai >> br >>bi;
        Complex a(ar, ai);
        Complex a(br, bi);

        switch (oper) {
            case '+':
               c[1] = a + b;
               break;
            case '-':
               c[1] = a - b;
               break;
            case '*':
               c[1] = a * b;
               break;
        }
    }

    for (int i = 0; i < n; i++) {
        c[i].display();
    }
}