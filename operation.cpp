#include "list.h"
#include "operation.h"


void insert_sorted(List &L, infotype x) {
    address q, prev;
    bool found;

    address P = allocate(x);

    q = L.first;
    found = false;
    prev = nullptr;

    while (q != nullptr && !found) {
        if (q->info < x) {
            prev = q;
            q = q->next;
        } else {
            found = true;
        }
    }

    if (prev == nullptr) {
        insertFirst(L, P);
    } else {
        insertAfter(L, prev, P);
    }
}
