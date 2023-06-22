#include "actionspace.h"

using Action = int;



ActionSpace::ActionSpace()
{


}

ActionSpace::Action_decision(int state){
    Action decision = 0;
    double value= 0;

    for (const  &action : Quality.at(state)) {
        if (action.second > Value) {
            Value = action.second;
            decision = action.first;
        }
    }

    return decision;
}


