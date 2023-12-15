#include <fstream>
#include <filesystem>
#include <vector>
#include <string>

namespace fs = std::filesystem;
class FFilesystem
{
private:    
    fs::path currentFolder;
public:
    explicit FFilesystem(const fs::path& InCurrentFolder = fs::current_path()) : currentFolder(InCurrentFolder)
    {
    }


    std::vector<std::string> GetFiles(){
        std::vector<std::string> Result;
        for (auto const &dir_entry : fs::recursive_directory_iterator(currentFolder))
            Result.emplace_back(fs::relative(dir_entry, currentFolder));
        return Result;
    }
    void PrintCurrentFolder()
    {
        std::cout<<currentFolder<<std::endl;
        for (auto const &dir_entry : fs::recursive_directory_iterator(currentFolder))
            std::cout<< fs::relative(dir_entry, currentFolder) <<std::endl;
    }
};