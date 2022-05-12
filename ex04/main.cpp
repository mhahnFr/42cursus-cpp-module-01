//
// Created by Manuel Hahn on 5/12/22.
//

#include <iostream>
#include <fstream>
#include <sstream>

std::string replace(std::string original, const std::string &old, const std::string &replace) {
    for (size_t pos = original.find(old);
         pos != std::string::npos;
         pos = original.find(old, pos + old.length())) {
        original.erase(pos, old.length());
        original.insert(pos, replace);
    }
    return original;
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        std::clog << "Wrong arguments!" << std::endl;
        std::clog << "Usage: ./sed++ <file> <string> <replace>" << std::endl;
        return EXIT_FAILURE;
    }
    std::ifstream is;
    is.open(argv[1]);
    if (!is.is_open()) {
        std::clog << "Could not open file: \"" << argv[1] << "\"!" << std::endl;
        return EXIT_FAILURE;
    }
    std::stringstream buffer;
    buffer << is.rdbuf();
    is.close();

    std::ofstream os;
    os.open(std::string(argv[1]) + ".replace");
    if (!os.is_open()) {
        std::clog << "Could not write to file: \"" << argv[1] << ".replace\"!" << std::endl;
        return EXIT_FAILURE;
    }
    os << replace(buffer.str(), argv[2], argv[3]);
    os.close();
    return EXIT_SUCCESS;
}
