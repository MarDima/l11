#include <iostream>
#include <loader.hh>

int main(int argc, char** argv) {
    auto _loader = new G4Loader(argc,argv);
    delete _loader;
    return 0;
}