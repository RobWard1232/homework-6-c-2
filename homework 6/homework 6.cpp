#include <iostream> // Input/output stream library
#include <string> // String manipulation library
#include <vector> // Vector container library
#include <cstdlib> // Standard library for general utilities

using namespace std; // Standard C++ namespace

class Planet { // Class representing a planet
private:
    string Name; // Name of the planet
    double Diameter; // Diameter of the planet
    double Mass; // Mass of the planet
    double Distance; // Distance of the planet from the sun

public:
    // Constructor initializing planet properties
    Planet(string n, double d, double m, double dist) : Name(n), Diameter(d), Mass(m), Distance(dist) {}

    // Method to generate a random name for the planet
    string generateName() {
        string prefixes[] = {"Ald", "Ver", "Xan", "Zor", "Nex", "Gal", "Vey", "Sol", "Zen", "Nova", "Neo", "Qua", "Rho", "Cyb", "Astra"};
        string suffixes[] = {"ia", "on", "us", "ar", "or", "ium", "el", "ara", "ax", "ix", "yx", "al", "il", "yn", "at", "um", "ez", "oz", "et", "ezz"};
        return prefixes[rand() % 15] + suffixes[rand() % 20];
    }

    // Method to generate a random diameter for the planet
    double generateDiameter() {
        return rand() % 142800 + 4879.4; // Random diameter within a specific range
    }

    // Method to generate a random mass for the planet
    double generateMass() {
        return rand() % 100000000 + 50000; // Random mass within a specific range
    }

    // Method to generate a random distance from the sun for the planet
    double generateDistance() {
        return rand() % 1000000000 + 500000000; // Random distance within a specific range
    }

    // Method to get the name of the planet
    string getName() {
        return Name;
    }

    // Method to get the diameter of the planet
    double getDiameter() {
        return Diameter;
    }

    // Method to get the mass of the planet
    double getMass() {
        return Mass;
    }

    // Method to get the distance of the planet from the sun
    double getDistance() {
        return Distance;
    }
};

class SolarSystem { // Class representing a solar system
private:
    vector<Planet> planets; // Vector to store planets
    int count; // Count of planets in the solar system

public:
    // Constructor initializing the count of planets
    SolarSystem() : count(0) {}

    // Method to generate a random number of planets in the solar system
    void generateSystem() {
        for (int i = 0; i < rand() % 10 + 3; i++) { // Random number of planets between 3 and 12
            planets.emplace_back(Planet("", 0, 0, 0)); // Adding dummy planets as placeholders
            count++;
        }
    }

    // Method to generate a random name for the solar system
    string generateSystemName() {
        string prefixes[] = {"Alpha", "Beta", "Gamma", "Delta", "Epsilon", "Zeta", "Eta", "Theta", "Iota", "Kappa", "Lambda", "Mu", "Nu", "Xi", "Omicron", "Pi", "Rho", "Sigma", "Tau", "Upsilon", "Phi", "Chi", "Psi", "Omega"};
        string suffixes[] = {"Majoris", "Minoris", "Prime", "Secunda", "Tertius", "Quarta", "Quintus", "Sextus", "Septimus", "Octavus", "Nonus", "Decimus"};

        return prefixes[rand() % 24] + suffixes[rand() % 12]; // Generating a random name using prefixes and suffixes
    }

    // Method to print the details of planets in the solar system
    void printSystem() {
        for (int i = 0; i < count; i++) {
            cout << "  Planet Name: " << planets[i].generateName() << endl; // Printing planet name
            cout << "  Planet Diameter: " << planets[i].generateDiameter() << " km" << endl; // Printing planet diameter
            cout << "  Planet Mass: " << planets[i].generateMass() << " kg" << endl; // Printing planet mass
            cout << "  Distance from Sun: " << planets[i].generateDistance() << " km" << endl; // Printing distance from the sun
            cout << "  ------------------------" << endl; // Separator
        }
    }
};

int main() {
    srand(time(NULL)); // Seed the random number generator
    SolarSystem System; // Creating an instance of the SolarSystem class

    cout << "now arriving to the: " << System.generateSystemName() << " system." << endl; // Printing the name of the solar system
    System.generateSystem(); // Generating the solar system
    System.printSystem(); // Printing details of the solar system
    return 0;
}
