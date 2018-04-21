
#include <G4Neutron.hh>
#include <Randomize.hh>
#include "../include/PrimaryGen.hh"

PrimaryGen::PrimaryGen()
{
    gun = new G4ParticleGun(1);
    G4cout<<"Primary particles generator is created successfully\t\tOK!!!"<<G4endl;

}

PrimaryGen::~PrimaryGen()
{
    delete gun;

}

void PrimaryGen::GeneratePrimaries(G4Event* anEvent) {

    gun->SetParticleDefinition(G4Neutron::NeutronDefinition());
    gun->SetParticleEnergy(0.025 * eV);
   // G4double pX,pY,pZ,R(1*cm);




//   do
//    {
//        pX ={2*G4UniformRand()-1};
//        pY ={2*G4UniformRand()-1};
//        pZ ={2*G4UniformRand()-1};
//    }
//    while((pX*pX+pY*pY+pZ*pZ)R);

    gun->SetParticlePosition(G4ThreeVector(0,0,0));



    G4double X{2*G4UniformRand()-1}, Y{2*G4UniformRand()-1}, Z{2*G4UniformRand()-1};
    G4double l= sqrt(X*X+Y*Y+Z*Z);
    gun->SetParticleMomentum(G4ThreeVector(X/l,Y/l,X/l));
    gun->GeneratePrimaryVertex(anEvent);
}







