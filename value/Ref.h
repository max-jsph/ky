//
// Created by Ky Dicker on 30/06/2024.
//

#ifndef REF_H
#define REF_H
#include "Element.h"
#include "Value.h"
#include "../types/Type.h"


class Ref: public Element{
    long ref;

    public:
    explicit Ref(long_t ref);

    Value resolve();
};



#endif //REF_H
