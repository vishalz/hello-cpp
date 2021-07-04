class Vector{
  private:
    double* m_elem {nullptr};
    int     m_size {0};
  public:
    Vector();
    Vector(int t_size);
    int size() const;
    double& operator[](int t_index);
};
