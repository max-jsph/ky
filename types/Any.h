//
// Created by Ky Dicker on 03/07/2024.
//

#ifndef ANY_H
#define ANY_H
#include "Type.h"


class Any {
    public:
    virtual string_t to_string();

    virtual long_t hash_code();
};

static auto null = Any();

#endif //ANY_H
