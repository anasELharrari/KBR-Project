#ifndef STATESPACE_H
#define STATESPACE_H
using namespace std;

class StateSpace
{

public:
    StateSpace();
    AddState(int state);

public:
    vector<string> current_academic_level;
    vector<string> interests ;

public:
    int  learner_performance;
    bool course_availbility;
    bool workload;
};

#endif // STATESPACE_H
