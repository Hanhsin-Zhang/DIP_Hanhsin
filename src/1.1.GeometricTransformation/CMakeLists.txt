AUX_SOURCE_DIRECTORY(. 1_1_BASE_SRC)
add_library(GeometricTransformation SHARED  ${1_1_BASE_SRC})
target_link_libraries(GeometricTransformation
        ${OpenCV_LIBS}
        )
