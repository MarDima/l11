//
// Created by student on 14.04.18.
//

#include <G4Event.hh>
#include <G4UserEventAction.hh>
#include <EventAction.hh>
#include <G4SystemOfUnits.hh>
#include <RunAction.hh>

void EventAction::BeginOfEventAction(const G4Event *anEvent) {
  //  EnergyDeposit = 0;


}

void EventAction::EndOfEventAction(const G4Event *anEvent) {
   //if(EnergyDeposit>=50*keV)
      // run->setResult();
    if(result->size()>=0)
    {
    result->clear();
    }

}



void EventAction::AdN(G4String &name,G4String e)
{
    if(result->find(name)==result->end())
    {
 result->emplace(name,e);
    }
    else
    {
        result->find(name)->second += e;
    }
}
//
//void EventAction::addEnergyDeposit(G4double EnergyDeposit) {
//    EventAction::EnergyDeposit += EnergyDeposit;
//}
//
EventAction::EventAction(RunAction* _run) : run(_run)
{
  result = new   std::map<G4String,G4double>;
}
