#include <iostream>
#include <cmath> // For floor and round functions

using namespace std;

class Measure {
private:
    int meter;
    double cm;

public:
    Measure() : meter(0), cm(0.0) {}
    Measure(int m, double c) : meter(m), cm(c) {
        normalize();
    }

    void get() {
        cout << "Enter meters: ";
        cin >> meter;
        cout << "Enter centimeters: ";
        cin >> cm;
        normalize();
    }

    void put() const {
        cout << meter << " meters and " << cm << " centimeters" << endl;
    }

    // Normalize the values such that 100 cm = 1 meter
    void normalize() {
        if (cm >= 100) {
            meter += static_cast<int>(cm) / 100;
            cm = fmod(cm, 100.0);
        } else if (cm < 0) {
            int decrement = static_cast<int>(ceil(-cm / 100.0));
            meter -= decrement;
            cm += decrement * 100;
        }
    }

    // Overload + operator
    friend Measure operator+(const Measure &m, double value);
    friend Measure operator+(double value, const Measure &m);

    // Overload - operator
    friend Measure operator-(const Measure &m, double value);
    friend Measure operator-(double value, const Measure &m);
};

// Definition of friend functions for operator+
Measure operator+(const Measure &m, double value) {
    Measure result(m.meter, m.cm + value * 100);
    result.normalize();
    return result;
}

Measure operator+(double value, const Measure &m) {
    return m + value; // Reuse the previous function
}

// Definition of friend functions for operator-
Measure operator-(const Measure &m, double value) {
    Measure result(m.meter, m.cm - value * 100);
    result.normalize();
    return result;
}

Measure operator-(double value, const Measure &m) {
    Measure result(static_cast<int>(value), (value - floor(value)) * 100);
    result = result - (m.meter + m.cm / 100);
    result.normalize();
    return result;
}

int main() {
    Measure M1(2, 50.0), M2(1, 75.0), M3;

    cout << "Initial Measures:" << endl;
    cout << "M1: "; M1.put();
    cout << "M2: "; M2.put();

    M1 = M2 + 15.0;
    cout << "After M1 = M2 + 15.0:" << endl;
    cout << "M1: "; M1.put();

    M3 = M1 - 4.5;
    cout << "After M3 = M1 - 4.5:" << endl;
    cout << "M3: "; M3.put();

    M1 = 5.0 + M2;
    cout << "After M1 = 5.0 + M2:" << endl;
    cout << "M1: "; M1.put();

    M3 = 2.0 - M1;
    cout << "After M3 = 2.0 - M1:" << endl;
    cout << "M3: "; M3.put();

    return 0;
}
