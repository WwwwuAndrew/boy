#ifndef BOY_COMMPON_SCHEDULER_H
#define BOY_COMMPON_SCHEDULER_H

#include <set>
#include <memory>
#include "state_machine.h"

namespace boy { namespace fsm {

class scheduler {
public:
    scheduler();

    void execute(StateMachine* machine);

    void postCommand(int id, std::shared_ptr<Event> event);

    void abort(int machineId);

private:
    std::set<std::unique_ptr<StateMachine>> machines;
};

}}

#endif // !BOY_COMMPON_SCHEDULER_H