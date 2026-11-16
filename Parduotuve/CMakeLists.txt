# CMakeList.txt : CMake project for Parduotuve, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (Parduotuve "main.cpp"  "product.h" "addproduct.h" "dicount.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Parduotuve PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
