
#include "../include/DetGeometry.hh"
#include <G4VisAttributes.hh>
DetGeometry::DetGeometry() {
    world_sizeXYZ   = 500 * cm;
    nist            = G4NistManager::Instance();
    world_mat       = nist->FindOrBuildMaterial("G4_AIR");
    solidWorld      = new G4Box("solWorld", 0.5*world_sizeXYZ, 0.5*world_sizeXYZ, 0.5*world_sizeXYZ);
    logicWorld      = new G4LogicalVolume(solidWorld, world_mat, "logWorld");
    physWorld       = new G4PVPlacement(0, G4ThreeVector(), logicWorld, "phyWorld", 0, false, 0);
    G4cout<<"Geometry of detector is build successfully\t\t\t\t\t\tOK!!!"<<G4endl;
}

DetGeometry::~DetGeometry() {}

G4VPhysicalVolume* DetGeometry::Construct() {


    auto Box  = new   G4Box("Box",10*cm,10*cm,10*cm);
    auto Box_log = new G4LogicalVolume(Box,nist->FindOrBuildMaterial("G4_POLYETHYLENE"),"Box");
    Box_log->SetVisAttributes(G4Colour::Green());
    auto Box_PV = new G4PVPlacement(0,G4ThreeVector(-50*cm,0,0),Box_log,"Box_PV",logicWorld,false,0);

    auto Box1  = new   G4Box("Box1",10*cm,10*cm,10*cm);
    auto Box1_log = new G4LogicalVolume(Box1,nist->FindOrBuildMaterial("G4_POLYETHYLENE"),"Box1");
    Box1_log->SetVisAttributes(G4Colour::Black());
    auto Box1_PV = new G4PVPlacement(0,G4ThreeVector(100*cm,0,0),Box1_log,"Box1_PV",logicWorld,false,0);

    return physWorld;
}


