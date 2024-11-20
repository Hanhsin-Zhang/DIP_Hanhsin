AUX_SOURCE_DIRECTORY(. 4_1_BASE_SRC)
add_library(ImageEnhancement SHARED  ${4_1_BASE_SRC})
target_link_libraries(ImageEnhancement
        ${OpenCV_LIBS}
        )
