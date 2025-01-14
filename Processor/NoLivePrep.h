/*
 * NoLivePrep.h
 *
 */

#ifndef PROCESSOR_NOLIVEPREP_H_
#define PROCESSOR_NOLIVEPREP_H_

#include "Exceptions/Exceptions.h"
#include "Data_Files.h"

template<class T> class SubProcessor;
class DataPositions;

template<class T>
class NoLivePrep : public Sub_Data_Files<T>
{
public:
    NoLivePrep(SubProcessor<T>* proc, DataPositions& usage) : Sub_Data_Files<T>(0, 0, "", usage, 0)
    {
        (void) proc;
        throw not_implemented();
    }
};

#endif /* PROCESSOR_NOLIVEPREP_H_ */
