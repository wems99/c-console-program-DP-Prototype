set(BINARY ${Presentation_Progra_2})

# add_executable(ExampleProject main.cpp file1.cpp file1.h)
file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cpp) #simplification

set(SOURCES ${SOURCES} Pant2.cpp Pant2.h PrototypeFactory.h Client.h)

add_executable(${BINARY}_run ${SOURCES} Pant2.cpp Pant2.h PrototypeFactory.h Client.h)

add_library(${BINARY}_lib STATIC ${SOURCES} Pant2.cpp Pant2.h PrototypeFactory.h Client.h)