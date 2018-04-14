//
// Created by student on 14.04.18.
//

#ifndef L11_SCORING_HH
#define L11_SCORING_HH

#include <pwdefs.hh>

class Scoring{
private:
    G4double result;
public:
    Scoring(){result = 0;}

    void addResult(G4double newValue);
    G4double getResult();


};
#endif //L11_SCORING_HH
