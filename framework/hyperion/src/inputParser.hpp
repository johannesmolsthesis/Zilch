#ifndef INPUT_PARSER_HPP
#define INPUT_PARSER_HPP

#include <vector>
#include <string>
#include <algorithm>

class InputParser {
    
private:
    std::vector <std::string> tokens;
    
public:
    
    InputParser(int &argc, char **argv);

    std::string get_cmd_option(const std::string &option) const;
    bool cmd_option_exists(const std::string &option) const;
    
};

#endif // INPUT_PARSER_HPP
