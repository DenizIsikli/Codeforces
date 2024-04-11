// make a function that read every file, and sub directory and their files, all being cpp, from the folder named Problemsets, and return the number of cpp files in the folder and its subdirectories if there are any
#include <iostream>
#include <filesystem>
#include <string>
#include <vector>

int countAllCppFiles(const std::string &path) {
    int count = 0;
    for (const auto &entry : std::filesystem::directory_iterator(path)) {
        if (entry.is_directory()) {
            count += countAllCppFiles(entry.path().string());
        } else if (entry.path().extension() == ".cpp") {
            ++count;
        }
    }
    return count;
}

int countAll800RatingCppFiles(const std::string &path) {
    int count = 0;
    for (const auto &entry : std::filesystem::directory_iterator(path)) {
        if (entry.is_directory()) {
            if (entry.path().filename() == "800Rating") {
                count += countAllCppFiles(entry.path().string());
            } else {
                count += countAll800RatingCppFiles(entry.path().string());
            }
        }
    }
    return count;
}

int countAll900RatingCppFiles(const std::string &path) {
    int count = 0;
    for (const auto &entry : std::filesystem::directory_iterator(path)) {
        if (entry.is_directory()) {
            if (entry.path().filename() == "900Rating") {
                count += countAllCppFiles(entry.path().string());
            } else {
                count += countAll900RatingCppFiles(entry.path().string());
            }
        }
    }
    return count;
}

int main() {
    std::string path = "../Problemsets/";
    std::cout << "Total: " << countAllCppFiles(path) << std::endl;
    std::cout << "800Rating: " << countAll800RatingCppFiles(path) << std::endl;
    std::cout << "900Rating: " << countAll900RatingCppFiles(path) << std::endl;
    return 0;
}
