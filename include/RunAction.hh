//
// Created by student on 14.04.18.
//

#ifndef L11_RUNACTION_HH
#define L11_RUNACTION_HH

#include <G4UserRunAction.hh>


class RunAction : public G4UserRunAction{
private :
public:

public:
    void BeginOfRunAction(const G4Run* aRun);
    void EndOfRunAction(const G4Run* aRun);
};


#endif //L11_RUNACTION_HH
