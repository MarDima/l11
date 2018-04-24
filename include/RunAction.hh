//
// Created by student on 14.04.18.
//

#ifndef L11_RUNACTION_HH
#define L11_RUNACTION_HH
#include <EventAction.hh>
#include <G4UserRunAction.hh>


class RunAction : public G4UserRunAction{
private :
public:
    std::map<G4String,G4double> *gestgram1;
    std::map<G4String,G4double> *gestgram2;


public:
    void BeginOfRunAction(const G4Run* aRun);
    void EndOfRunAction(const G4Run* aRun);
    void III(G4String &name,G4String e);
};


#endif //L11_RUNACTION_HH
