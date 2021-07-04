class Complex{
  private:
    double m_real {0};
    double m_imag {0};
  public:
    Complex();
    Complex(double t_real);
    Complex(double t_real , double t_imag);
    double real() const;
    double imag() const;
    void real(double t_real);
    void imag(double t_imag);
    Complex operator+=(Complex t_c);
    Complex operator-=(Complex t_c);
};
