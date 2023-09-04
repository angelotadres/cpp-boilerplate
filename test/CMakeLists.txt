set(GTEST_SHUFFLE 1)

add_executable(boilerplate-test
    main.cpp
    greeter-test.cpp
    ../src/greeter.cpp
)

target_include_directories(boilerplate-test PUBLIC 
  ../vendor/googletest/googletest/include
  ${CMAKE_SOURCE_DIR}/include
)

target_link_libraries(boilerplate-test PUBLIC gtest)
