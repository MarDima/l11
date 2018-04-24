//
// Created by student on 14.04.18.
//

#include <G4Run.hh>
#include <G4UserRunAction.hh>
#include <RunAction.hh>



void RunAction::BeginOfRunAction(const G4Run *aRun) {

}

void RunAction::EndOfRunAction(const G4Run *aRun) {
////    std::cout<< " Result = "<< result<<'\n';
//
//    scoring->addResult(result);
//
//    std::cout<<scoring->getResult()<<'\n';
//}
//
//void RunAction::setResult() {
//    RunAction::result ++;
}
void RunAction::III(G4String &name,G4String e)
{

}
RunAction::~RunAction()
{
    gestgram1 = new   std::map<G4String,G4double>;
}