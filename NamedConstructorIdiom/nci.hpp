#/** 
   \file nci.hpp
   \brief Named Constructor Idiom | Static factory pattern
 */

#pragma once

#include <cmath>  // To get std::sin() and std::cos()

class Point {
public:
    /**
       \brief Rectangular coord's
     */
    static Point rectangular(float x, float y);

    /**
       \brief Polar coordinates
     */
    static Point polar(float radius, float angle);

    // These static methods are the so-called "named constructors"

private:
    Point(float x, float y);  // Rectangular coordinates

    float x_, y_;
};

inline Point::Point(float x, float y) : x_(x), y_(y) {}

inline Point Point::rectangular(float x, float y) {
    return Point(x, y);
}

inline Point Point::polar(float radius, float angle) {
    return Point(radius * std::cos(angle), radius * std::sin(angle));
}