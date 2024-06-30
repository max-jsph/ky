//
// Created by Ky Dicker on 24/06/2024.
//

#ifndef ADAPTER_H
#define ADAPTER_H

class Serializable {
    // TODO implement
};

class Message {
    public:
    long type_id;
};

class Adapter {
    public:
    void out(Message &message);
};


#endif //ADAPTER_H
