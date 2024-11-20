AUX_SOURCE_DIRECTORY(. 2_2_BASE_SRC)
add_library(HistogramProcessing SHARED  ${2_2_BASE_SRC})
target_link_libraries(HistogramProcessing
        ${OpenCV_LIBS}
        )