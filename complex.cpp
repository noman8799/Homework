#include <iostream>
#include <cmath>

struct Complex {
    private:
        double re;
        double im;
        
    public:
    Complex () = default;
    
    ~Complex() = default;
    
    Complex (const double r, const double i){
        re = r;
        im = i;
        num += 1;
    };
    
    double module () {
        return sqrt(re*re + im*im);
    };
    
    Complex sm(const Complex other){
        double new_re;
        double new_im;
        new_re = re + other.re;
        new_im = im + other.im;
        return Complex(new_re,new_im);
    }
    
    void print(){
        std::cout << re << ' ' << im << std::endl;
    }
    static Complex sum_static(Complex a, Complex b){
        double new_re;
        double new_im;
        new_re = a.re + b.re;
        new_im = a.im + b.im;
        return Complex(new_re,new_im);
    }
    friend Complex sum_free(Complex a, Complex b);
};

Complex sum_free(Complex a, Complex b)
{
    double new_re;
    double new_im;
    new_re = a.re + b.re;
    new_im = a.im + b.im;
    return Complex(new_re,new_im);
}

int main()
{
    Complex a(3.0, 4.0);
    //std::cout << c.module() << std::endl;
    Complex b(1.0, 1.0);
    //std::cout << d.module();
    Complex s;
    s = sum_free(a,b);
    s.print();
    s = Complex::sum_static(a,b);
    s.print();
    return 0;
}