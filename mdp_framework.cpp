#include "mdp_framework.h"
#include "statespace.h"
#include "actionspace.h"
#include "student.h"
#include <iostream>
#include <unordered_map>
#include <cmath>

using Reward = double;
using State = int;

MDP_framework::MDP_framework()
{

}


StateSpace::AddState(int State){

        transitions[state] = {};
        rewards[state] = {};
        Quality[state] = {};



}

ActionSpace::addAction(int state , int action){
    transitions[state][action] = {};
    rewards[state][action] = 0.0;
    Quality[state][action] = 0.0;

}

MDP_framework::rewards(int state , int action , double reward){
      rewards[state][action] = reward;
}


MDP_framework::transition_probabilities(int state , int action , float indicator){

    transitions[state][action][state] = indicator;

}

MDP_framework::calculate_quality(int state , int action , float value){

    double quality = 0.0;
    nextStates = transitions[state][action];

    for (cons nextState : nextStates) {
        int next_Value = nextState.first;
        double Prob = nextState.second;
        double reward = rewards[state][action];
        double Value_factor = value * max(next_Value);
        quality += Prob * (reward + Value_factor);
    }

    return quality;

}

double TransitionProbability(Student student, int courseId,ActionSpace action, const Course& course) {

    double probability = 0.0;

    if (student.id % 2 == 0 && courseId % 2 == 0) {
        probability = 0.7;
    }

    return probability;
}

















