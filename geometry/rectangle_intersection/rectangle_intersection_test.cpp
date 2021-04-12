//****************************************************************************80
//
//  file name:
//
//    rectangle_intersection_test.cpp
//
//  licensing:
//
//    this code is distributed under the mit license.
//
//  author:
//    bo pace

#include <iostream>

using namespace std;

#include "rectangle_intersection.hpp"

int main();
void rectangles_touch_test();
void rectangles_intersect_test();
void rectangles_do_not_touch_test();

//****************************************************************************80
//
//  description:
//
//    tests the rectangle_interception code
//
//  last modified:
//
//    11 april 2021
//
int main()
{
    cout << "rectangle intersection test cases\n"
         << "  this code determines whether or not two rectangles touch or\n"
         << "  intersect. rectangless are defined by their upper left corner,\n"
         << "  designated by cartesian coordinates. rectangles are also given\n"
         << "  dimensional sizes, width and height.\n";
    
    rectangles_touch_test();
    rectangles_intersect_test();
    rectangles_do_not_touch_test();

    cout << "  end tests.\n";

    return 0;
}

//****************************************************************************80
//
//  description:
//
//    makes sure rectangle_intersection code properly handles rectangles that
//    touch edges without overlapping.
//
//  last modified:
//
//    11 april 2021
//
void rectangles_touch_test()
{
    cout << "\n"
         << "  test: rectangles touch at the very edges\n";

    double p1[2]{ 0, 0 };
    double sizes1[2]{ 4, 4 };

    cout << "    rectangle a:\n"
         << "        upper left corner: (" << p1[0] << ", " << p1[1] << ")\n"
         << "        width: " << sizes1[0] << "\n"
         << "        height: " << sizes1[1] <<"\n\n";

    double p2[2]{ 4, 0 };
    double sizes2[2]{ 4, 4 };

    cout << "    rectangle b:\n"
         << "        upper left corner: (" << p2[0] << ", " << p2[1] << ")\n"
         << "        width: " << sizes2[0] << "\n"
         << "        height: " << sizes2[1] <<"\n\n";

    bool result = are_rectangles_touching_or_intersecting(p1, sizes1, p2, sizes2);

    cout << "    are rectangles touching or intersecting?\n"
         << "      result: " << result
         << "\n\n";
}

//****************************************************************************80
//
//  description:
//
//    makes sure rectangle_intersection code properly handles rectangles that
//    fully intersect.
//
//  last modified:
//
//    11 april 2021
//
void rectangles_intersect_test()
{
    cout << "\n"
         << "  test: rectangles overlap\n";

    double p1[2]{ 0, 0 };
    double sizes1[2]{ 4, 4 };

    cout << "    rectangle a:\n"
         << "        upper left corner: (" << p1[0] << ", " << p1[1] << ")\n"
         << "        width: " << sizes1[0] << "\n"
         << "        height: " << sizes1[1] <<"\n\n";

    double p2[2]{ 2, 2 };
    double sizes2[2]{ 4, 4 };

    cout << "    rectangle b:\n"
         << "        upper left corner: (" << p2[0] << ", " << p2[1] << ")\n"
         << "        width: " << sizes2[0] << "\n"
         << "        height: " << sizes2[1] <<"\n\n";

    bool result = are_rectangles_touching_or_intersecting(p1, sizes1, p2, sizes2);

    cout << "    are rectangles touching or intersecting?\n"
         << "      result: " << result
         << "\n\n";
}

//****************************************************************************80
//
//  description:
//
//    makes sure rectangle_intersection code properly handles rectangles that
//    don't intersect.
//
//  last modified:
//
//    11 april 2021
//
void rectangles_do_not_touch_test()
{
    cout << "\n"
         << "  test: rectangles don't touch\n";

    double p1[2]{ 0, 0 };
    double sizes1[2]{ 4, 4 };

    cout << "    rectangle a:\n"
         << "        upper left corner: (" << p1[0] << ", " << p1[1] << ")\n"
         << "        width: " << sizes1[0] << "\n"
         << "        height: " << sizes1[1] <<"\n\n";

    double p2[2]{ 10, 10 };
    double sizes2[2]{ 4, 4 };

    cout << "    rectangle b:\n"
         << "        upper left corner: (" << p2[0] << ", " << p2[1] << ")\n"
         << "        width: " << sizes2[0] << "\n"
         << "        height: " << sizes2[1] <<"\n\n";

    bool result = are_rectangles_touching_or_intersecting(p1, sizes1, p2, sizes2);

    cout << "    are rectangles touching or intersecting?\n"
         << "      result: " << result
         << "\n\n";
}
