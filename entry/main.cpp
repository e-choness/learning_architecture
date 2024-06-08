#include <vector>
#include "hello.hpp"
#include "log.hpp"
#include "Entry.hpp"
#include "HELLOConfig.h"

int main(int argc, char **argv){

    std::vector<Entry> entries;
    entries.push_back({"James Bond", 54543413});
    entries.push_back({"Harry Potter", 188492053});

    for(const auto& entry : entries){
        std::cout << entry;
    }

    auto hello = Hello();
    
    hello.SetGreetings("Hello, CMake from library in subdirectory!\n");
    Log::log_data(hello.GetGreetings(), LogType::MESSAGE);
    std::cout << "The say-hello library is version: " << SAY_HELLO_VERSION << "\n";

    std::cout << argv[0] << "hello_library version: " << HelloLibrary_VERSION_MAJOR << "." << HelloLibrary_VERSION_MINOR << "\n";

    // Get command line arguments from main entry args.
    if(argc > 1){
        const double inputValue = std::stod(argv[1]);
        std::cout << "The first command line argument: " << inputValue << "\n";
    }


}