/*
 * Multiplication.h
 *
 */

#ifndef PROCESSOR_SPDZ_H_
#define PROCESSOR_SPDZ_H_

#include "Beaver.h"

#include <vector>
using namespace std;

template<class T> class SubProcessor;
template<class T> class Share;
class Player;

template <class T>
class SPDZ : public Beaver<T>
{
public:
    SPDZ(Player& P) : Beaver<T>(P)
    {
    }

    static void assign(typename T::clear& share, const typename T::clear& clear, int my_num)
    {
        if (my_num == 0)
            share = clear;
        else
            share = 0;
    }

    int get_n_relevant_players()
    {
        return this->P.num_players();
    }
};

#endif /* PROCESSOR_SPDZ_H_ */
