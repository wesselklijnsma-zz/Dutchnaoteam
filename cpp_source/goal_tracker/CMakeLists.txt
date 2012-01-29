cmake_minimum_required(VERSION 2.8)

project(goal_tracker)
include("bootstrap.cmake")
find_package(NAOQI-PLUGINS-TOOLS)

create_module(goal_tracker  DEFAULT_REMOTE_ON)

configure_src_module(goal_tracker
  main.cpp
    goal_tracker.h
  goal_tracker.cpp

)

use_lib(goal_tracker ALCOMMON OPENCV)
