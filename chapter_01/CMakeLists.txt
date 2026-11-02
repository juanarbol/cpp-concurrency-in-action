add_executable(chapter_01
    main.cpp
)

target_link_libraries(chapter_01 PRIVATE Threads::Threads)
