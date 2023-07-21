#ifndef LEAVER_H
#define LEAVER_H

//#include "oop_11_02_library_global.h"

#ifndef OOP_11_02_LIBRARY_EXPORTS //OOP_11_02_LIBRARY_LIBRARY//OOP_11_02_LIBRARY_EXPORTS
#   define OOP_11_02_LIBRARY_API __declspec(dllexport)
#else
#   define OOP_11_02_LIBRARY_API __declspec(dllimport)
#endif // DYNAMICLIB_EXPORTS

class Leaver
{
public:
    Leaver();
    OOP_11_02_LIBRARY_API std::string leave(std::string input_name);
    
};

#endif // LEAVER_H
