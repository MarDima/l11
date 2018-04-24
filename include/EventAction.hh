//
// Created by student on 14.04.18.
//

#ifndef L11_EVENTACTION_HH
#define L11_EVENTACTION_HH

#include <G4UserEventAction.hh>
#include <RunAction.hh>
class EventAction : public G4UserEventAction{
private:
    G4double EnergyDeposit;
    std::map<G4String,G4double> *result;
    RunAction* run;
public:


   explicit EventAction(RunAction* run);


public:
    void AdN(G4String &name,G4String e);
    void BeginOfEventAction(const G4Event* anEvent);
    void EndOfEventAction(const G4Event* anEvent);


};
#endif //L11_EVENTACTION_HH
