#ifndef BOY_COMMON_STATE_MACHINE_H
#define BOY_COMMON_STATE_MACHINE_H

#include "event.h"

namespace boy { namespace fsm {

class StateMachine {
public:
    StateMachine(int id);

    const std::string& name() const ;

    void handleEvent();

private:
    int id_;

    void changeState();
};

}}

#endif // !BOY_COMMON_STATE_MACHINE_H
