#ifndef MDP_FRAMEWORK_H
#define MDP_FRAMEWORK_H
using namespace std ;

class MDP_framework : public actionspace , statespace
{
public:
    MDP_framework();
protected:
    reward();
    transition_probabilities(int state , int action , float indicator);
    calculate_quality(int state , int action , float value );

private:
    unordered_map<State, unordered_map<Action, unordered_map<State, double>>> transitions;
    unordered_map<string, unordered_map<string, unordered_map<string, double>>> transitionProb;
    unordered_map<State, unordered_map<Action, Reward>> rewards;
    unordered_map<State, stdunordered_map<Action, double>> Quality;

};

#endif // MDP_FRAMEWORK_H
