#ifndef BOY_COMMON_EVENT_H
#define BOY_COMMON_EVENT_H

#include "constants.h"

namespace boy { namespace fsm {
    
class Event {
public:
    Event(EventId id);

    Event(EventId id, void* data);

private:
    EventId id_;
    void* data_;
};

}}

#endif // !BOY_COMMON_EVENT_H