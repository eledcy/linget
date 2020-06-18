
int birthdateMain()
{
    // variables
    int age;
    int birthdate;

    // input
    std::cin >> age;

    // logic
    birthdate = 2019 - age;

    // output
    std::cout << "you were born in " << birthdate << std::endl;
    return 0;
}