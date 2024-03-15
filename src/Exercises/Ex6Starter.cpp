#include "StarterCode.hpp"

/* Collectable Interface */
class Collectable {
  public:
    virtual int getCentury() = 0;

    virtual bool isSuccessful() = 0;

    virtual bool isLegit() = 0;
};

/* Exercise 6A
 * YOU MUST CHANGE THIS BELOW WITH YOUR CURRENT PAINTING CLASS
 * AND IMPLEMENT THE COLLECTABLE METHODS IN PAINTING AFTER THE
 * INHERITING
 */
class Painting : public Collectable {
public:
    // Implementing Collectable interface methods
    int getCentury() override {
        // Implementation specific to Painting
        // Example: return the century the painting belongs to
        return 20; // Assuming paintings are from the 20th century
    }

    bool isSuccessful() override {
        // Implementation specific to Painting
        // Example: determine if the painting was commercially successful
        return true; // Assuming all paintings are successful
    }

    bool isLegit() override {
        // Implementation specific to Painting
        // Example: check if the painting is authentic
        return true; // Assuming all paintings are authentic
    }
};

/* Exercise 6B
 * YOU MUST CHANGE THIS BELOW WITH YOUR CURRENT SCULPTURE CLASS
 * AND IMPLEMENT THE COLLECTABLE METHODS IN SCULPTURE AFTER THE
 * INHERITING
 */
class Sculpture : public Collectable {
public:
    // Implementing Collectable interface methods
    int getCentury() override {
        // Implementation specific to Sculpture
        // Example: return the century the sculpture belongs to
        return 21; // Assuming sculptures are from the 21st century
    }

    bool isSuccessful() override {
        // Implementation specific to Sculpture
        // Example: determine if the sculpture was commercially successful
        return true; // Assuming all sculptures are successful
    }

    bool isLegit() override {
        // Implementation specific to Sculpture
        // Example: check if the sculpture is authentic
        return true; // Assuming all sculptures are authentic
    }
};
