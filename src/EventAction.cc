//
// Created by student on 14.04.18.
//

#include <G4Event.hh>
#include <G4UserEventAction.hh>
#include <EventAction.hh>
#include <G4SystemOfUnits.hh>
#include <RunAction.hh>

void EventAction::BeginOfEventAction(const G4Event *anEvent) {
    //EnergyDeposit = 0;
}

void EventAction::EndOfEventAction(const G4Event *anEvent) {
   //if(EnergyDeposit>=50*keV)
       // run->setResult();

}


void EventAction::AdN(G4String f,G4String a)
{

}
//
//void EventAction::addEnergyDeposit(G4double EnergyDeposit) {
//    EventAction::EnergyDeposit += EnergyDeposit;
//}
//
EventAction::EventAction(RunAction* _run) : run(_run) {}
