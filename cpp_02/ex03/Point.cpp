/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:54:39 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/06 14:54:43 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
// const int i = 0

Point::Point(void){}
Point::~Point(void){}
Point::Point(const Point &copie): _x(copie._x), _y(copie._y){};
Point::Point(const Fixed &a, const Fixed &b): _x(a), _y(b) {};

Point &Point::operator=(const Point&a)
{
    (void)a;
    //impossible de copier une valeur qui est const
    return(*this);
}

const Fixed&    Point::get_x(void) const
{ 
    return(this->_x);
}
const Fixed&    Point::get_y(void) const
{ 
    return(this->_y);
}

bool bsp(Point const A, Point const B, Point const C, Point const P)
{
    // w1 et w2 sont deux vecteurs//
    // si P == B alors w1 = 1 et w2 = 0;
    // si P == C alors w2 = 1 et w1 = 0;
    // si P est exterrieur a AC alors w1 < 0
    // si P est exterrieur a AB alors w2 < 0
    // si P est exterrieur a BC alors w1 + w2 > 1
    // P = A + W1(B - A) + W2(C - A)
    // Px = Ax + W1(Bx - Ax) + w2(Cx - Ax)
    // Py = Ay + w1(By - Ay) + w2(Cy - Ay)
    // W2 = ((Py - Ay - W1(By - Ay)) / (Cy - Ay))
    // Px = Ax + W1(B - A) + ((Py - Ay - W1(By - Ay)) / (Cy - Ay)) * (Cx - Ax)
    // Px(Cy - Ay) = Ax(Cy - Ay) + w1(Bx - Ax)(Cy - Ay) + (Py - Ay)(Cx - Ax) - w1(By - Ay)(Cx - Ax)
    // W1(By - Ay)(Cx -Ax) - W1(Bx - Ax)(Cy - Ay) = Ax(Cy - Ay) + (Py - Ay)(Cx - Ax) - Px(Cy - Ay)
    // W1[(By - Ay)(Cx - Ax) - (Bx - Ax)(Cy - Ay)] = Ax(Cy - Ay) + (Py - Ay)(Cx - Ax) - Px(Cy - Ay)
    // W1 = (Ax(Cy - Ay) + (Py - Ay)(Cx - Ax) - Px(Cy - Ay)) / ((By - Ay)(Cx - Ax) - (Bx - Ax)(Cy - Ay))
    // W2 = ((Py - Ay - W1(By - Ay)) / (Cy - Ay)) //substituer le resultat de w2 dans w1;
    // point P est dans le triangle si
    // w1 > 0 et w2 > 0 et (W1 + W2) < 1
    
    Fixed   S1(C.get_y() - A.get_y()); // Cy - Ay;
    Fixed   S2(C.get_x() - A.get_x()); // Cx - Ax;
    Fixed   S3(B.get_y() - A.get_y()); // B.y - A.y;
    Fixed   S4(P.get_y() - A.get_y()); // P.y - A.y;

    if (S1.toFloat() <= 0.1f)
         return (bsp(A, C, B, P));
    Fixed   W1((A.get_x() * S1 + S4 * S2 - P.get_x() * S1) / (S3 * S2 - (B.get_x() - A.get_x()) * S1));
    Fixed   W2((S4 - W1 * S3) / S1);
    //std::cout << W1 << std::endl;
    //std::cout << W2 << std::endl;
    //std::cout << (W2 + W1) << std::endl;

    if (W1.toFloat() > 0 && W2.toFloat() > 0 && (W1 + W2).toFloat() < 1)
        return (true);
    return (false);
}

/*

    Fixed   S1(C.get_y() - A.get_y()); // Cy - Ay;
    Fixed   S2(P.get_y() - A.get_y()); // Py - Ay;
    Fixed   S3(C.get_x() - A.get_x()); // Cx - Ax;
    Fixed   S5(B.get_y() - A.get_y()); // By - Ay;
    Fixed   S6(C.get_x() - A.get_x()); // Cx - Ax;
    Fixed   S7(B.get_x() - A.get_x()); // Bx - Ax;
    // W1 = (S9 + S10 - S11) / (S12 - S13)
    Fixed   S9(A.get_x() * S1); // Ax(S1);
    Fixed   S10(S2 * S3); // (S2)(S3);
    Fixed   S11(P.get_x() * S1); //Px(S1);
    Fixed   S12(S5 * S6); // (S5)(S6);
    Fixed   S13(S7 * S1); // (S7)(S8);
    // W1 = (S14) / (S15)
    Fixed   S14(S9 + S10 - S11);
    Fixed   S15(S12 - S13);
    //if (std::abs(S8.toFloat()) <= 0.1f)
	  //  return (bsp(A, C, B, P));

    Fixed   W1 = (S14 / S15);
    // W2 = ((Py - Ay - W1(By - Ay)) / (Cy - Ay))
    // W2 = (S17 / S8);
    Fixed   S16(W1 * S5); // W1(S5)
    Fixed   S17(S2 - S16); //(S2 - S16)
    Fixed   W2(S17 - S1);*/