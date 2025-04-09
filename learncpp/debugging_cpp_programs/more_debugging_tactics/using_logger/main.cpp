#include <plog/Log.h> // Step 1: include the logger headers
#include <plog/Initializers/RollingFileInitializer.h>
#include <iostream>

int getUserInput()
{
    PLOGD << "getUserInput() called"; // PLOGD is defined by the plog library

    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    return x;
}

int main()
{
    plog::init(plog::debug, "Logfile.txt"); // Step 2: initialize the logger

    PLOGD << "main() called"; // Step 3: Output to the log as if you were writing to the console

    int x{getUserInput()};
    std::cout << "You entered: " << x << '\n';

    / Step3 : write log messages using a special macro
                  // There are several log macros, use the macro you liked the most

                  PLOGD
        << "Hello log!";               // short macro
    PLOG_DEBUG << "Hello log!";        // long macro
    PLOG(plog::debug) << "Hello log!"; // function-style macro

    // Also you can use LOG_XXX macro but it may clash with other logging libraries
    LOGD << "Hello log!";             // short macro
    LOG_DEBUG << "Hello log!";        // long macro
    LOG(plog::debug) << "Hello log!"; // function-style macro

    return 0;
}
