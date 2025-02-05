#include "StarterCode.hpp"

/*
 * Given a vector of Paintings, return the count of how many paintings
 * qualify with the given style and its year is between the given start
 * and end (inclusive).
 */
int Painting::countPaintings(const vector<Painting *> &collection, Style style, int start, int end) {
    int count = 0;

    for (const Painting *painting : collection) {
        if (painting->getStyle().equals(style) && painting->getYear() >= start && painting->getYear() <= end) {
            count++;
        }
    }

    return count;
}
