#include <iostream>
#include <filesystem>
using namespace std;
namespace fs = filesystem;

bool findFile(const fs::path& folder, const string& target)
{
    // Check every item inside the folder
    for (const auto& item : fs::directory_iterator(folder))
    {
        // If the item is a folder
        if (fs::is_directory(item))
        {
            // Recursively search inside this folder
            if (findFile(item.path(), target))
            {
                return true;
            }
        }

        // If the item is a file
        else if (fs::is_regular_file(item))
        {
            if (item.path().filename() == target)
            {
                cout << "File Found!\n";
                cout << "Location: " << item.path() << endl;
                return true;
            }
        }
    }

    return false;
}

int main()
{
    string folderPath;
    string targetFile;

    cout << "Enter main folder path: ";
    getline(cin, folderPath);

    cout << "Enter file name to search: ";
    getline(cin, targetFile);

    if (!fs::exists(folderPath) || !fs::is_directory(folderPath))
    {
        cout << "Invalid folder path!" << endl;
        return 0;
    }

    if (!findFile(folderPath, targetFile))
    {
        cout << "File not found!" << endl;
    }

    return 0;
}