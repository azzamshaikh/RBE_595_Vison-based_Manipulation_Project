# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_executive_smach_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED executive_smach_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(executive_smach_FOUND FALSE)
  elseif(NOT executive_smach_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(executive_smach_FOUND FALSE)
  endif()
  return()
endif()
set(_executive_smach_CONFIG_INCLUDED TRUE)

# output package information
if(NOT executive_smach_FIND_QUIETLY)
  message(STATUS "Found executive_smach: 3.0.3 (${executive_smach_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'executive_smach' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${executive_smach_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(executive_smach_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${executive_smach_DIR}/${_extra}")
endforeach()
