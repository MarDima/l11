
#include "../include/DetGeometry.hh"
#include <G4VisAttributes.hh>
DetGeometry::DetGeometry() {
    world_sizeXYZ   = 50 * cm;
    nist            = G4NistManager::Instance();
    world_mat       = nist->FindOrBuildMaterial("G4_AIR");
    solidWorld      = new G4Box("solWorld", 0.5*world_sizeXYZ, 0.5*world_sizeXYZ, 0.5*world_sizeXYZ);
    logicWorld      = new G4LogicalVolume(solidWorld, world_mat, "logWorld");
    physWorld       = new G4PVPlacement(0, G4ThreeVector(), logicWorld, "phyWorld", 0, false, 0);
    G4cout<<"Geometry of detector is build successfully\t\t\t\t\t\tOK!!!"<<G4endl;
}

DetGeometry::~DetGeometry() {}

G4VPhysicalVolume* DetGeometry::Construct() {
    G4Box *box = new G4Box("box", 5*cm, 5*cm, 5*cm);
    auto box_log = new G4LogicalVolume(box, nist->FindOrBuildMaterial("G4_SODIUM_IODIDE"), "box_LOG");
    box_log->SetVisAttributes(G4Colour::Red());
    new G4PVPlacement(nullptr, G4ThreeVector(), box_log, "box_PV", logicWorld, false, 0);

    return physWorld;
}


