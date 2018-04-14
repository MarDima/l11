
#include <G4Neutron.hh>
#include <Randomize.hh>
#include "../include/PrimaryGen.hh"

PrimaryGen::PrimaryGen()
{
    gun = new G4ParticleGun(1);
    G4cout<<"Primary particles generator is created successfully\t\tOK!!!"<<G4endl;
    gun->SetParticleDefinition(G4Gamma::GammaDefinition());
    gun->SetParticlePosition(G4ThreeVector(0, 0, -50*cm));
    gun->SetParticleMomentum(G4ThreeVector(0,0,1));
    gun->SetParticleEnergy(661 * keV);
}

PrimaryGen::~PrimaryGen()
{
    delete gun;

}

void PrimaryGen::GeneratePrimaries(G4Event* anEvent) {
    gun->GeneratePrimaryVertex(anEvent);
}







