#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "sequencer_itf::sequencer_itf__rosidl_generator_py" for configuration ""
set_property(TARGET sequencer_itf::sequencer_itf__rosidl_generator_py APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(sequencer_itf::sequencer_itf__rosidl_generator_py PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libsequencer_itf__rosidl_generator_py.so"
  IMPORTED_SONAME_NOCONFIG "libsequencer_itf__rosidl_generator_py.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS sequencer_itf::sequencer_itf__rosidl_generator_py )
list(APPEND _IMPORT_CHECK_FILES_FOR_sequencer_itf::sequencer_itf__rosidl_generator_py "${_IMPORT_PREFIX}/lib/libsequencer_itf__rosidl_generator_py.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
