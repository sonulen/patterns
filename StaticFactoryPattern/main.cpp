#include <memory>
#include "sfp.hpp"

int main() {
    std::unique_ptr<Fred> p(Fred::create(5));
}