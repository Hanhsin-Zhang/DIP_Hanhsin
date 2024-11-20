AUX_SOURCE_DIRECTORY(. 3_1_BASE_SRC)
add_library(Smoothing SHARED  ${3_1_BASE_SRC})
target_link_libraries(Smoothing
        ${OpenCV_LIBS}
        )
