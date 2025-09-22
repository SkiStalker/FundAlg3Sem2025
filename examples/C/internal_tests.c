#include <stdio.h>
#include <assert.h>


int add(int a, int b) {
    return a + b;
}

void test_add_1() {
    assert(add(1, 2) == 4);
}

void test() {
    test_add_1();
}

int main() {
    test();
    return 0;
}