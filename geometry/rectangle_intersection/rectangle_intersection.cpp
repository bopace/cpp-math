//****************************************************************************80
//
//  file name:
//
//    rectangle_intersection.cpp
//
//  licensing:
//
//    this code is distributed under the mit license.
//
//  author:
//    bo pace

using namespace std;

#include "rectangle_intersection.h"

//****************************************************************************80
//
//  description:
//
//    determines whether or not two rectangles are touching/intersect.
//
//  approach:
//    we make four comparisons between the rectangles.
//      1. is rectangle a completely to the left of rectangle b?
//      2. is rectangle a completely to the right of rectangle b?
//      3. is rectangle a completely above rectangle b?
//      4. is rectangle a completely below rectangle b?
//    if any of these comparisons are true, the rectangles do not touch or
//    intersect. if all of these comparisons are false, the rectangles DO touch
//    or intersect.
//
//  last modified:
//
//    11 april 2021
//
//  input:
//
//    double p1[2] - the cartesian coordinates of the upper left hand corner of
//      rectangle a
//    double sizes1[2] - the dimensional sizes (width and height) of rectangle a
//    double p2[2] - the cartesian coordinates of the upper left hand corner of
//      rectangle b
//    double sizes2[2] - the dimensional sizes (width and height) of rectangle b
//
//  output:
//
//    bool - true if the rectangles touch or intersect, false if not
//
bool are_rectangles_touching_or_intersecting(double p1[], double sizes1[],
    double p2[], double sizes2[])
{
    if (p1[0] > p2[0] + sizes2[0])
    {
        return false;
    }
    else if (p1[0] + sizes1[0] < p2[0])
    {
        return false;
    }
    else if (p1[1] > p2[1] + sizes2[1])
    {
        return false;
    }
    else if (p1[1] + sizes1[1] < p2[1])
    {
        return false;
    }
    else
    {
        return true;
    }
}
