#include <iostream>
#include <filesystem>
#include <string>


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

int countAll1000RatingCppFiles(const std::string &path) {
    int count = 0;
    for (const auto &entry : std::filesystem::directory_iterator(path)) {
        if (entry.is_directory()) {
            if (entry.path().filename() == "1000Rating") {
                count += countAllCppFiles(entry.path().string());
            } else {
                count += countAll1000RatingCppFiles(entry.path().string());
            }
        }
    }
    return count;
}

int countAll1100RatingCppFiles(const std::string &path) {
    int count = 0;
    for (const auto &entry : std::filesystem::directory_iterator(path)) {
        if (entry.is_directory()) {
            if (entry.path().filename() == "1100Rating") {
                count += countAllCppFiles(entry.path().string());
            } else {
                count += countAll1100RatingCppFiles(entry.path().string());
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
    std::cout << "1000Rating: " << countAll1000RatingCppFiles(path) << std::endl;
    std::cout << "1100Rating: " << countAll1100RatingCppFiles(path) << std::endl;

    int external = countAllCppFiles(path) - (
            countAll800RatingCppFiles(path) +
            countAll900RatingCppFiles(path) +
            countAll1000RatingCppFiles(path) +
            countAll1100RatingCppFiles(path));
    std::cout << "External: " << external << std::endl;

    return 0;
}
