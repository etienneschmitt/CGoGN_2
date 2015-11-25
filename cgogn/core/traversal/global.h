/*******************************************************************************
* CGoGN: Combinatorial and Geometric modeling with Generic N-dimensional Maps  *
* Copyright (C) 2015, IGG Group, ICube, University of Strasbourg, France       *
*                                                                              *
* This library is free software; you can redistribute it and/or modify it      *
* under the terms of the GNU Lesser General Public License as published by the *
* Free Software Foundation; either version 2.1 of the License, or (at your     *
* option) any later version.                                                   *
*                                                                              *
* This library is distributed in the hope that it will be useful, but WITHOUT  *
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or        *
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License  *
* for more details.                                                            *
*                                                                              *
* You should have received a copy of the GNU Lesser General Public License     *
* along with this library; if not, write to the Free Software Foundation,      *
* Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301 USA.           *
*                                                                              *
* Web site: http://cgogn.unistra.fr/                                           *
* Contact information: cgogn@unistra.fr                                        *
*                                                                              *
*******************************************************************************/

#ifndef CORE_TRAVERSAL_GLOBAL_H_
#define CORE_TRAVERSAL_GLOBAL_H_

#include <core/traversal/traversor_cell.h>

namespace cgogn
{

template <unsigned int ORBIT, typename MAP>
inline TraversorCell<MAP, ORBIT> cells(MAP& map)
{
	return TraversorCell<MAP, ORBIT>(map);
}

template <typename MAP>
inline TraversorCell<MAP, MAP::VERTEX> vertices(MAP& map)
{
	return TraversorCell<MAP, MAP::VERTEX>(map);
}

template <typename MAP>
inline TraversorCell<MAP, MAP::EDGE> edges(MAP& map)
{
	return TraversorCell<MAP, MAP::EDGE>(map);
}

template <typename MAP>
inline TraversorCell<MAP, MAP::FACE> faces(MAP& map)
{
	return TraversorCell<MAP, MAP::FACE>(map);
}

template <typename MAP>
inline TraversorCell<MAP, MAP::VOLUME> volumes(MAP& map)
{
	return TraversorCell<MAP, MAP::VOLUME>(map);
}

} // namespace cgogn

#endif // CORE_TRAVERSAL_GLOBAL_H_