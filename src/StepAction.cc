//
// Created by student on 14.04.18.
//

#include <EventAction.hh>
#include <G4Step.hh>
#include <G4UserSteppingAction.hh>
#include <StepAction.hh>

StepAction::StepAction(EventAction *_event) {
    eventAction = _event;
}

void StepAction::UserSteppingAction(const G4Step *aStep)
{
    if(aStep->GetTotalEnergyDeposit()>=0);
    //eventAction->AdN(aStep->GetTrack()->)






//eventAction->AdN( aStep->GetTrack()->GetVolume()->GetName(),aStep->GetTotalEnergyDeposit());
   // aStep->GetTrack()->GetVolume()->GetName();


   // eventAction->addEnergyDeposit(aStep->GetTotalEnergyDeposit());
    // aStep->GetNumberOfSecondariesInCurrentStep();

}
