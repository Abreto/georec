add_executable( georec georec.cxx )
target_link_libraries( georec ${OpenCV_LIBS} ${EXTRA_LIBS} )
