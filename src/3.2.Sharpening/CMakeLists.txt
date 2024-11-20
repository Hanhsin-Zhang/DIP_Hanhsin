AUX_SOURCE_DIRECTORY(. 3_2_BASE_SRC)
add_library(Sharpening SHARED  ${3_2_BASE_SRC})
target_link_libraries(Sharpening
        ${OpenCV_LIBS}
        )
