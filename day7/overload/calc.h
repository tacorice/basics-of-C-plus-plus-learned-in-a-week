#ifndef _CALC_H_
#define _CALC_H_

class CCalc {
    public:
        CCalc();
        CCalc(int a, int b);
        int add();    
        int add(int a, int b);    
        void setValue(int a, int b);
        int getA();
        int getB();
    private:
        int m_a;
        int m_b;
};

#endif //_CALC_H_