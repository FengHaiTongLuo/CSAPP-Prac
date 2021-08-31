#include <cstdio>
#include <cstring>
#include <climits>
#include <cstdlib>

void* copy_elements(void* ele_src[], int ele_cnt, size_t ele_size) {
    uint64_t required_size = ele_cnt * (uint64_t)ele_size;
    size_t request_size = (size_t)required_size;
    if (required_size != request_size) return NULL; // overflow

    void *result = malloc(request_size);
    if (NULL == result) return NULL; // malloc fail

    uint8_t* next = (uint8_t*)result;
    int i;
    for (i = 0; i < ele_cnt; ++i) {
        memcpy(next, ele_src[i], ele_size);
        next += ele_size;
    }
    return result;
}

int main() {
    return 0;
}

