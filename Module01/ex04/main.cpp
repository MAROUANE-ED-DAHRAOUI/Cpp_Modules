#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

bool OpenInputFile(const std::string &FileName, std::string &content)
{
    std::ifstream inputFile(FileName.c_str()); // Convert std::string to const char*
    if (!inputFile) {
        std::cerr << "Error: could not open file " << FileName << std::endl;
        return false;
    }

    // Step 3: Read the entire file content into a string
    std::ostringstream buffer;
    buffer << inputFile.rdbuf();
    content = buffer.str();

    inputFile.close();
    return true;
}

int main(int ac, char *av[])
{
    if (ac != 4)
    {
        std::cout << "Error:\n\t./replace [filename] [string1] [string2]\n";
        return 1;
    }

    std::string FileName = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    if (s1.empty()) {
        std::cerr << "Error: search string (s1) cannot be empty!" << std::endl;
        return 1;
    }

    std::string content;
    if (!OpenInputFile(FileName, content)) {
        return 1;
    }

    // Step 4: Perform manual replacement
    size_t pos = 0;
    while ((pos = content.find(s1, pos)) != std::string::npos)
    {
        content.erase(pos, s1.length());
        content.insert(pos, s2);
        pos += s2.length();
    }

    // Step 5: Write to output file
    std::ofstream outputFile((FileName + ".replace").c_str()); // Convert std::string to const char*
    if (!outputFile) {
        std::cerr << "Error: Could not create output file " << FileName << ".replace" << std::endl;
        return 1;
    }

    outputFile << content;
    outputFile.close();

    std::cout << "File processed successfully. Output written to " << FileName << ".replace" << std::endl;
    return 0;
}