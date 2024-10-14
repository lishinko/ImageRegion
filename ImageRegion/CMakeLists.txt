# CMakeList.txt: ImageRegion 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
set($ENV{OPENCV_IO_ENABLE_OPENEXR} 1)
find_package(OpenCV CONFIG REQUIRED)
find_package(fmt CONFIG REQUIRED)


# 将源代码添加到此项目的可执行文件。
add_executable (ImageRegion "ImageRegion.cpp" "ImageRegion.h")
target_link_libraries(ImageRegion PRIVATE
fmt::fmt
opencv_highgui
opencv_core
)
if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET ImageRegion PROPERTY CXX_STANDARD 20)
endif()

# TODO: 如有需要，请添加测试并安装目标。
