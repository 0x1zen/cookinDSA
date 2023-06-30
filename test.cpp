#include <iostream>
#include <string>

int min_operations_to_secure_network(const std::string& network) {
    int operations = 0;
    char prev = '\0';
    bool disconnected = false;

    for (char node : network) {
        if (node != prev) {
            if (disconnected) {
                operations++;
                disconnected = false;
            }
            prev = node;
        } else {
            disconnected = true;
        }
    }

    if (disconnected) {
        operations++;
    }

    return operations;
}

int main() {
    // Example usage
    std::string network;
    std::cin >> network;
    int min_ops = min_operations_to_secure_network(network);
    std::cout << min_ops << std::endl;

    return 0;
}
