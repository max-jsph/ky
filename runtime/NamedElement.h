//
// Created by Ky Dicker on 03/07/2024.
//

#ifndef NAMEDELEMENT_H
#define NAMEDELEMENT_H
#include "Element.h"


class NamedElement: public Element{
    protected:
    string_t name;

    ~NamedElement() = default;

    public:
    NamedElement(string_t name);

    private:
    long_t night_code() override;
};



#endif //NAMEDELEMENT_H
