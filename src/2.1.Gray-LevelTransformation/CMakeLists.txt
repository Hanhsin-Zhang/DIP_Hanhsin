AUX_SOURCE_DIRECTORY(. 2_1_BASE_SRC)
add_library(Gray-LevelTransformation SHARED  ${2_1_BASE_SRC})
target_link_libraries(Gray-LevelTransformation
        ${OpenCV_LIBS}
        )