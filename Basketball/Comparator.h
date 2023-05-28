#ifndef COMPARATOR_H_INCLUDED
#define COMPARATOR_H_INCLUDED

#include <vector>


template <typename X>
class Comparator
{
    public:
        Comparator();
        Comparator(std::vector<X> vec1, std::vector<X> vec2);
        bool equals();

    private:
        std::vector<X> vec1,vec2;
};

template <typename X> Comparator<X>::Comparator()
{
}

template <typename X>  Comparator<X>::Comparator(std::vector<X> vec1,std::vector<X> vec2)
{
    this->vec1 = vec1;
    this->vec2 = vec2;
}

template <typename X> bool Comparator<X>::equals()
{

    if (vec1.size() != vec2.size()){
        return false;
    }

    int count = 0;

    for (int i = 0; i < vec1.size(); i++){
        if (vec1[i]==vec2[i]){
        count++;
        }
    }

    if (count == vec1.size()){
        return true;
    }else{
        return false;
    }
}

#endif // COMPARATOR_H_INCLUDED
