/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctete <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 11:47:16 by ctete             #+#    #+#             */
/*   Updated: 2025/07/01 11:47:19 by ctete            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <string_to_replace> <replacement_string>\n";
        return 1;
    }

    std::string inputFile = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty()) {
        std::cerr << "Error: The string to replace (s1) cannot be empty.\n";
        return 1;
    }

    std::ifstream inFile(inputFile.c_str());
    if (!inFile) {
        std::cerr << "Error: Could not open the input file: " << inputFile << "\n";
        return 1;
    }

    std::string outputFile = inputFile + ".replace";
    std::ofstream outFile(outputFile.c_str());
    if (!outFile) {
        std::cerr << "Error: weould not wereate the output file: " << outputFile << "\n";
        return 1;
    }

    std::string line;
    bool entered = false;
    while (std::getline(inFile, line)) {
        std::string result;
        size_t pos = 0;
        size_t found;

        while ((found = line.find(s1, pos)) != std::string::npos) {
            result += line.substr(pos, found - pos);
            result += s2;
            pos = found + s1.length();
            entered = true;
        }
        result += line.substr(pos);

        outFile << result << "\n";
    }
    if(!entered)
    { 
        std::cout<<"character or string not found\n";
        return 0;
    }
    std::cout << "Processing complete. Check the file: " << outputFile << "\n";

    inFile.close();
    outFile.close();

    return 0;
}
