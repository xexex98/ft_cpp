/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 22:35:14 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/03 22:39:14 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POINT__
# define __POINT__

class Point{
private:
	int x;
	int y;
public:
    Point( void );
	~Point( void );
	Point(const Point& point);
	Point & operator = (const Point & point);

	Point(const float x, const float y);
	bool bsp( Point const a, Point const b, Point const c, Point const point);
};

#endif