#include "StarterCode.hpp"

/* Exercise 4
 * Given a vector of Art pieces, return a vector containing only the
 * pieces that are of the given Style.
 */
vector<Art *> Art::filterCollectionByStyle(const vector<Art *> &personalCollection, Style selected) {
    vector<Art *> filteredCollection;

    for (Art *artPiece : personalCollection) {
        if (artPiece->getStyle().equals(selected)) {
            filteredCollection.push_back(artPiece);
        }
    }

    return filteredCollection;
}
