#include "StarterCode.hpp"

/* Exercise 3A
 * Override the method appraise in Painting by calling the super appraise
 * and determining the new price of the painting based on the following remarks:
 *
 * 1. If it is not a replica and its artist fame score is greater than 8,
 *    the price will be raised by 66%.
 * 2. If it is not a replica and its artist fame score is between 5 and 8 (inclusive),
 *    the price will be raised by 37%.
 * 3. If it is not a replica and its artist fame score is lower than 5,
 *    the price will be raised by 15%.
 * 4. If it is a replica the price will remain the same.
 *
 * Hint: Remember that if you want to override a method you must declare it first on the header file of the subclass.
 * */
int Painting::appraise() {
    int basePrice = Painting::appraise(); // Call the superclass method to get the base price
    
    if (!isReplica) { // Check if it's not a replica
        if (this->getArtist().getFameScore() > 8) {
            return basePrice * 1.66; // Raise the price by 66%
        } else if (this->getArtist().getFameScore()>= 5 && this->getArtist().getFameScore() <= 8) {
            return basePrice * 1.37; // Raise the price by 37%
        } else { // artistFameScore is less than 5
            return basePrice * 1.15; // Raise the price by 15%
        }
    }
    
    return basePrice;
}

/* Exercise 3B
 * Override the method appraise in Sculpture by calling the super appraise
 * and determining the new price of the painting based on the following remarks:
 *
 * 1. If its material is MARBLE and its artist fame score is greater or equal than 5,
 *    the price will be raised by 69%.
 * 2. If its material is METAL and its artist fame score is greater than 5,
 *    the price will be raised by 45%.
 * 3. If its material is NOT PLASTIC and its fame score is greater than 3,
 *    the price will be raised by 12%.
 * 4. Else the price will remain the same.
 *
 * Hint: Remember that if you want to override a method you must declare it first on the header file of the subclass.
 */
int Sculpture::appraise() {
    int basePrice = Sculpture::appraise(); // Call the superclass method to get the base price
    
    if (material == Material::MARBLE && this->getArtist().getFameScore()  >= 5) {
        return basePrice * 1.69; // Raise the price by 69%
    } else if (material == Material::METAL && this->getArtist().getFameScore()  > 5) {
        return basePrice * 1.45; // Raise the price by 45%
    } else if (material != Material::PLASTIC && this->getArtist().getFameScore()  > 3) {
        return basePrice * 1.12; // Raise the price by 12%
    }
    
    return basePrice; // Return the same price for other cases
}