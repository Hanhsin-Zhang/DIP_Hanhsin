AUX_SOURCE_DIRECTORY(. 5_1_BASE_SRC)
add_library(ImageRestoration SHARED  ${5_1_BASE_SRC})
target_link_libraries(ImageRestoration
        ${OpenCV_LIBS}
        )

