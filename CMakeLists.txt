# 声明项目名称和最低CMake版本
cmake_minimum_required(VERSION 3.10)
project(DIP_hanhsin)

# 设置C++标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 设置输出目录
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin) # 可执行文件路径
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib) # 库文件路径

# 添加自定义模块路径（如有需要）
if(EXISTS "${PROJECT_SOURCE_DIR}/cmake_modules")
    set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake_modules)
endif()

# 设置构建类型（可通过命令行控制 Debug/Release）
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug CACHE STRING "Build type" FORCE)
endif()

# 设置编译选项
set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -O3 -march=native")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O3 -march=native")
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -Wall -g -march=native")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall -g -march=native")

# 查找 OpenCV 包
find_package(OpenCV REQUIRED)

# 添加子目录
add_subdirectory(src)       


# 添加可执行文件
add_executable(DIP_hanhsin src/main.cpp)
target_include_directories(DIP_hanhsin PRIVATE 
            ${CMAKE_SOURCE_DIR}/src/1.1.GeometricTransformation
            ${CMAKE_SOURCE_DIR}/src/2.1.Gray-LevelTransformation
            ${CMAKE_SOURCE_DIR}/src/2.2.HistogramProcessing
            ${CMAKE_SOURCE_DIR}/src/3.1.Smoothing
            ${CMAKE_SOURCE_DIR}/src/3.2.Sharpening
            ${CMAKE_SOURCE_DIR}/src/4.1.ImageEnhancement
            ${CMAKE_SOURCE_DIR}/src/5.1.ImageRestoration
            )
# 链接 OpenCV 库
target_link_libraries(DIP_hanhsin 
            ${OpenCV_LIBS}
            GeometricTransformation
            Gray-LevelTransformation
            HistogramProcessing
            Smoothing
            Sharpening
            ImageEnhancement
            ImageRestoration
            )

