add_executable(FirstLastString
	"main.cpp" "FirstLast.h")

if(MSVC)
	target_compile_options(FirstLastString PRIVATE /W4 /WX)
else()
	target_compile_options(FirstLastString PRIVATE -Wall -Wextra -Werror)
endif()