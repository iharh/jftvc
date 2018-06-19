#include <iostream>

#include "fasttext.h"

int
main(void)
{
    std::wcout << L"start test..." << std::endl;

    fasttext::FastText ft;
    ft.loadModel(std::string("m.mod"));

    std::wcout << L"done." << std::endl;

    return 0;
}
