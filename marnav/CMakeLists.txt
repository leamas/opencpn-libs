# OpenCPN wrapper for marnav:
#
# Exports: marnav::marnav link object


cmake_minimum_required (VERSION 3.1.0)
project(ocpn_marnav)

set(BUILD_SHARED_LIBS FALSE CACHE BOOL "Build shared libs" FORCE)
set(ENABLE_TESTS FALSE CACHE BOOL "Enable tests" FORCE)
set(ENABLE_TOOLS FALSE CACHE BOOL "Build tools" FORCE)
set(ENABLE_EXAMPLES FALSE CACHE BOOL "Build examples" FORCE)

add_subdirectory(marnav EXCLUDE_FROM_ALL)
