//****************************************************************************80
//
//  file name:
//
//    circle_intersection.cpp
//
//  licensing:
//
//    this code is distributed under the mit license.
//
//  author:
//    bo pace

#include <cmath>
#include <iostream>

using namespace std;

#include "circle_intersection.h"

//****************************************************************************80
//
//  description:
//
//    calculates line distance between two points.
//
//  last modified:
//
//    11 april 2021
//
//  input:
//
//    double p1[2] - the cartesian coordinates of point a
//    double p2[2] - the cartesian coordinates of point b
//
//  output:
//
//    double - the calculated line distance between two points
//
double line_distance(double p1[], double p2[])
{
    return sqrt(pow(p2[0] - p1[0], 2) + pow(p2[1] - p1[1], 2));
}

//****************************************************************************80
//
//  description:
//
//    determines whether or not two circles are touching/intersect. if the
//    distance between the center of the circles is greater than the sum of the
//    radii, the circles aren't touching.
//
//  last modified:
//
//    11 april 2021
//
//  input:
//
//    double p1[2] - the cartesian coordinates of the center of circle a
//    double r1 - the radius of circle a
//    double p2[2] - the cartesian coordinates of the center of circle b
//    double r2 - the radius of circle b
//
//  output:
//
//    bool - true if the circles touch or intersect, false if not
//
bool are_circles_touching_or_intersecting(double p1[], double r1, double p2[],
    double r2)
{
    double distance_between_centers = line_distance(p1, p2);
    double radius_sum = r1 + r2;

    return distance_between_centers <= radius_sum;
}
