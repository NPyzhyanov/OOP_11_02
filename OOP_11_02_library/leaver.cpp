#include <string>

#include "leaver.h"

Leaver::Leaver()
{
}

std::string Leaver::leave(std::string input_name)
{
    std::string output = "Goodbye, " + input_name + "!";
    return output;
}
