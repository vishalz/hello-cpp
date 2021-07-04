#include "vtl/vector.h"
#include <stdexcept> 
Vector::Vector(): m_elem {nullptr},m_size{0}{}
Vector::Vector(int t_size){
  if((t_size <= 0 )){
    throw std::out_of_range("Vector(): size out of range ");
  }
  m_size = t_size;
  m_elem = new double[m_size];
}

int Vector::size() const{
  return m_size;
}

double& Vector::operator[](int t_index){
  //@todo check for out of bound error
  if((t_index >= m_size) || (t_index < 0 )){
    throw std::out_of_range("subscript operator out of range idex");
  }
  return m_elem[t_index];
}

