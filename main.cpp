#include <iostream>
#define WINTER

#if defined SPRING
#define SEASON "Spring"
#elif defined SUMMER
#define SEASON "Summer"
#elif defined AUTUMN
#define SEASON "Autumn"
#elif defined WINTER
#define SEASON "Winter"
#endif
int main()
{
    std::cout << SEASON;
}
