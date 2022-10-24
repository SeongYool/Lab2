INCLUDE_DIRECTORIES (lib)
ADD_EXECUTABLE ( main main.c )
ADD_LIBRARY ( _fp_operation STATIC lib/lib_fp_operation.c lib/lib_fp_operation.h)
TARGET_LINK_LIBRARIES ( main PUBLIC _fp_operation )
