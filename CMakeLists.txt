cmake_minimum_required(VERSION 3.13)

project(oop)
add_subdirectory(matplotplusplus)
include_directories(include) 

add_executable(program 
		src/main.cpp
		src/Clustering.cpp
		src/node.cpp
		src/Visualize.cpp
		src/Kmeans.cpp
		include/Clustering.h
		include/node.h
		include/Visualize.h
		include/Kmeans.h
		)
		
target_link_libraries(program PUBLIC matplot)

