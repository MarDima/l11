//
// Created by student on 14.04.18.
//

#include <G4Threading.hh>
#include <Scoring.hh>
#include <G4AutoLock.hh>

namespace {
    G4Mutex aMutex=G4MUTEX_INITIALIZER;
}

void Scoring::addResult(G4double newValue) {
    G4AutoLock l(&aMutex);
    result+=newValue;
}

G4double Scoring::getResult() {
    return result;
}
