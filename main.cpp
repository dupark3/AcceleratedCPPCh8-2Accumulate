#include <iostream>
#include <vector>

int main()
{
    int myints[] = {1, 2, 3, 4, 5};
    std::vector<int> vec (myints, myints + sizeof(myints) / sizeof(int));

    // print the original vector
    std::cout << "Original vector: ";
    for (std::vector<int>::size_type i = 0; i != vec.size(); ++i)
        std::cout << vec[i] << " ";
    std::cout << std::endl;

    int sum = my_accumulate(vec.begin(), vec.end(), 0);
    std::cout << "Result of accumulating vector is : " << sum;

    return 0;
}
