cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

project(cgogn_topology_examples
	LANGUAGES CXX
	)

if (CGOGN_USE_QT)


list(APPEND CMAKE_PREFIX_PATH "${CGOGN_RELEASE_BUILD_DIR}")

find_package(cgogn_core REQUIRED)
find_package(cgogn_geometry REQUIRED)
find_package(cgogn_io REQUIRED)
find_package(cgogn_rendering REQUIRED)
find_package(cgogn_topology REQUIRED)

set(CMAKE_AUTOMOC ON)

set(HEADER_FILES
	topogical_analysis.h
	)

set(CGOGN_TEST_MESHES_PATH "${CMAKE_SOURCE_DIR}/data/meshes")
add_definitions("-DCGOGN_TEST_MESHES_PATH=${CGOGN_TEST_MESHES_PATH}")

add_executable(topological_analysis_2d ${HEADER_FILES} topogical_analysis_2d.cpp)
target_link_libraries(topological_analysis_2d
	cgogn::core cgogn::geometry cgogn::io
	cgogn::rendering cgogn::topology)

add_executable(topological_analysis_3d ${HEADER_FILES} topogical_analysis_3d.cpp)
target_link_libraries(topological_analysis_3d
	cgogn::core cgogn::geometry cgogn::io
	cgogn::rendering cgogn::topology)

set_target_properties(topological_analysis_2d topological_analysis_3d PROPERTIES FOLDER examples/topology)

endif()
