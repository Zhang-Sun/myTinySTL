cmake_minimum_required(VERSION 3.15)
project(myTinySTL)

#version
set(myTinySTL_VERSION_MAJOR 1)
set(myTinySTL_VERSION_MINOR 0)
set(myTinySTL_VERSION_PATCH 0)
set(MyTinySTL_VERSION "${myTinySTL_VEERSION_MAJOR}.${myTinySTL_VERSION_MINOR}.${myTinySTL_VERSION_PATCH}")
message(STATUS "The version of this project is : ${myTinySTL_VERSION}")

# build type
set(CMAKE_BUILD_TYPE release)

if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -02 -Wall -Wextra -Wno-sign-compare Wno-unused-but-set-variable -Wno-array-bounds")
    # set(EXTRA_CXX_FLAGS -Weffc++ -Wswitch-default -Wfloat-equal -Wconversion -Wsign-conversion)
    if (CMAKE_CXX_COMPILER_VERSION VERSION_LESS "5.0.0")
        message(FATAL_ERROR "required GCC 5.0 or later")
    else()
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
    endif()
elseif (CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -02 -Wall -Wextra -Wno-sign-compare")
    #set(EXTRA_CXX_FLAGS -Weffc++ -Wswitch-default -Wfloat-equal -Wconversion -Wimplicit-fallthrough)
    if (CMAKE_CXX_COMPILER_VERSION VERSION_LESS "3.5.0")
        message(FATAL_ERROR  "required Clang 3.5 or later")
    else()
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
    endif()
endif()

message(STATUS "The cmake_cxx_flags is : ${CMAKE_CXX_FLAGS}")

add_subdirectory(${PROJECT_SOURCE_DIR}/test)


add_executable(untitled Hash.h cmake-build-debug/vector.h vector.h type_traits.h util.h iterator.h algobase.h construct.h allocator.h uninitialized.h memory.h exceptdef.h functional.h heap_algo.h astring.h basic_string.h deque.h hashtable.h list.h map.h numeric.h queue.h rb_tree.h set.h set_algo.h stack.h unordered_map.h unordered_set.h vector.h)
