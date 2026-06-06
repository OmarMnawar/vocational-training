/* ==== Omar Mnawar =============== */
/* ==== Created on 06.06.2026 ===== */


#include <iostream>
#include <limits>

int EingabenLesen(double& variable) {

    std::cin >> variable;

    if (std::cin.fail() || variable < 0) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return 1;
    }
    return 0;
}
