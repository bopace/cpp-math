//****************************************************************************80
//
//  file name:
//
//    circle_intersection_test.cpp
//
//  licensing:
//
//    this code is distributed under the mit license.
//
//  author:
//    bo pace

#include <iostream>

using namespace std;

#include "circle_intersection.hpp"

int main();
void circles_touch_test();
void circles_intersect_test();
void circles_do_not_touch_test();

//****************************************************************************80
//
//  description:
//
//    tests the circle_interception code
//
//  last modified:
//
//    11 april 2021
//
int main()
{
    cout << "circle intersection test cases\n"
         << "  this code determines whether or not two circles touch or\n"
         << "  intersect. circles are centered on a given point designated\n"
         << "  by cartesian coordinates. circles are also given a radius.\n";
    
    circles_touch_test();
    circles_intersect_test();
    circles_do_not_touch_test();

    cout << "  end tests.\n";

    return 0;
}

//****************************************************************************80
//
//  description:
//
//    makes sure circle_intersection code properly handles circles that touch
//    edges without overlapping.
//
//  last modified:
//
//    11 april 2021
//
void circles_touch_test()
{
    cout << "\n"
         << "  test: circles touch at the very edges\n";

    double p1[2]{ 0, 0 };
    double r1{ 1 };

    cout << "    circle a:\n"
         << "        center: (" << p1[0] << ", " << p1[1] << ")\n"
         << "        radius: " << r1 << "\n\n";

    double p2[2]{ 2, 0 };
    double r2{ 1 };

    cout << "    circle b:\n"
         << "        center: (" << p2[0] << ", " << p2[1] << ")\n"
         << "        radius: " << r2 << "\n\n";

    bool result = are_circles_touching_or_intersecting(p1, r1, p2, r2);

    cout << "    are circles touching or intersecting?\n"
         << "      result: " << result
         << "\n\n";
}

//****************************************************************************80
//
//  description:
//
//    makes sure circle_intersection code properly handles circles that fully
//    intersect.
//
//  last modified:
//
//    11 april 2021
//
void circles_intersect_test()
{
    cout << "\n"
         << "  test: circles overlap\n";

    double p1[2]{ 0, 0 };
    double r1{ 1 };

    cout << "    circle a:\n"
         << "        center: (" << p1[0] << ", " << p1[1] << ")\n"
         << "        radius: " << r1 << "\n\n";

    double p2[2]{ 2, 2 };
    double r2{ 2 };

    cout << "    circle b:\n"
         << "        center: (" << p2[0] << ", " << p2[1] << ")\n"
         << "        radius: " << r2 << "\n\n";

    bool result = are_circles_touching_or_intersecting(p1, r1, p2, r2);

    cout << "    are circles touching or intersecting?\n"
         << "      result: " << result
         << "\n\n";
}

//****************************************************************************80
//
//  description:
//
//    makes sure circle_intersection code properly handles circles that don't
//    intersect.
//
//  last modified:
//
//    11 april 2021
//
void circles_do_not_touch_test()
{
    cout << "\n"
         << "  test: circles don't touch\n";

    double p1[2]{ 0, 0 };
    double r1{ 1 };

    cout << "    circle a:\n"
         << "        center: (" << p1[0] << ", " << p1[1] << ")\n"
         << "        radius: " << r1 << "\n\n";

    double p2[2]{ 10, 10 };
    double r2{ 1 };

    cout << "    circle b:\n"
         << "        center: (" << p2[0] << ", " << p2[1] << ")\n"
         << "        radius: " << r2 << "\n\n";

    bool result = are_circles_touching_or_intersecting(p1, r1, p2, r2);

    cout << "    are circles touching or intersecting?\n"
         << "      result: " << result
         << "\n\n";
}
