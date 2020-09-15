#include <bits/stdc++.h>

int main(int argc, char* argv[]) {

    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    /* get the value of test_case */
    size_t test_case;
    std::cin >> test_case;

    while (test_case--) {
        /* get the value of first_number and second_number */
        size_t first_number, second_number;
        std::cin >> first_number >> second_number;

        /* add the specified numbers */
        size_t sum {first_number + second_number};

        /* print the sum of the numbers */
        std::cout << sum << std::endl;
    }
    return 0;
}