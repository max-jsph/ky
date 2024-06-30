cmake_minimum_required(VERSION 3.28)
project(untitled)

set(CMAKE_CXX_STANDARD 26)

add_executable(untitled main.cpp
        adapter/Adapter.cpp
        adapter/Adapter.h
        types/number/Number.cpp
        types/number/Number.h
        types/Type.h
        types/number/Int.cpp
        types/number/Int.h
        types/number/Float.cpp
        types/number/Float.h
        value/Expression.cpp
        value/Expression.h
        value/Value.cpp
        value/Value.h
        value/Element.cpp
        value/Element.h
        value/Operator.cpp
        value/Operator.h
        value/Ref.cpp
        value/Ref.h
        value/Call.cpp
        value/Call.h)
