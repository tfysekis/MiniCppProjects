#ifndef PAIR_H
#define PAIR_H
#include <iostream>
using namespace std;

template <class X> class Pair
{
    public:
        Pair();
        Pair(X a, X b);
        void setFirst(X val);
        void setSecond(X val);
        X getFirst();
        X getSecond();
        void swap();

    private:
        X a,b;
};

template <class X> ostream& operator<<(ostream& os, Pair<X> & p)
{
    os << p.getFirst() << ",";
    os << p.getSecond();
    return os;
}

template <class X> void Pair<X>::swap()
{
    X temp;
    temp = this->a;
    this->a = this->b;
    this->b = temp;
}

template <class X> Pair<X>::Pair()
{
    this->a = X();
    this->b = X();
}

template <class X> X Pair<X>::getFirst()
{
    return this->a;
}

template <class X> X Pair<X>::getSecond()
{
    return this->b;
}

template <class X> Pair<X>::Pair(X a,X b)
{
    this->a = a;
    this->b = b;
}

template <class X> void Pair<X>::setFirst(X val) { this->a = val; }
template <class X> void Pair<X>::setSecond(X val) { this->b = val; }

#endif // PAIR_H
