#include "vmath/complex.h"
Complex::Complex(): m_real{0}, m_imag{0}{}
Complex::Complex(double t_real): m_real{m_real = t_real}, m_imag{0}{}
Complex::Complex(double t_real, double t_imag): m_real{m_real = t_real}, m_imag{t_imag}{}
double Complex::real() const { return m_real;};
double Complex::imag() const { return m_imag;};
void Complex::real(double t_real){ m_real = t_real;}
void Complex::imag(double t_imag){ m_imag = t_imag;}

Complex Complex::operator+=(Complex t_c){
  m_real += t_c.m_real;
  m_imag += t_c.m_imag;
  return *this;
}

Complex Complex::operator-=(Complex t_c){
  m_real -= t_c.m_real;
  m_imag -= t_c.m_imag;
  return *this;
}


