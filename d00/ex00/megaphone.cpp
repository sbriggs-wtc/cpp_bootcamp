#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        int i;
        size_t j;
        for(i = 1; i < argc; i++)
        {
            for (j = 0; j < strlen(argv[i]); j++)
            {
                std::cout << (char)toupper(argv[i][j]);
            }
        }
        
    }
    else
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    return 0;
}