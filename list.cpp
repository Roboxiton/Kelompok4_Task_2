#include "list.h"

void createList(List &L) {

    cout<<"your code here"<<endl;

    L.first = nullptr;
}

address allocate(infotype x) {
    address P = new ElmList;
    if (P != NULL) {
        P->info = x;
        P->next = NULL;
    }
    return P;
}

void deallocate(address &P) {
    /**
    * FS : delete element pointed by P
    */
    //-------------your code here-------------
    cout<<"your code here"<<endl;


    //----------------------------------------
    delete P;
    P = nullptr;
}

void insertFirst(List &L, address P) {

    cout<<"your code here"<<endl;

    P->next = L.first;
    L.first = P;
    
}

void insertLast(List &L, address P) {
    
    cout<<"your code here"<<endl;

    if (L.first == NULL){
        L.first = P;
    } else {
        address q = L.first;
        while (q->next != NULL){
            q = q->next;
        }
        q->next = p;
    }
    //----------------------------------------
}

address findElm(List L, infotype x) {
    /**
    * IS : List L may be empty
    * FS : returns element with info.ID = x.ID,
           return Null if such ID is not found
    */
    address P;
    //-------------your code here-------------
    cout<<"your code here"<<endl;
    //----------------------------------------
    return P;
}

void printInfo(List L) {
    /**
    * FS : view info of all element inside List L,
    *      call the view_data function from my_data.h to print the info
    */
    //-------------your code here-------------
    cout<<"your code here"<<endl;
    //----------------------------------------
    cout<<endl;
}
void insertAfter(List &L, address Prec, address P) {
    /**
    * IS : Prec and P is not NULL
    * FS : element pointed by P is placed behind the element
    *      pointed by pointer Prec
    */
    //-------------your code here-------------
    cout<<"your code here"<<endl;

    P->next = Prec->next;
    Prec->next = P;
    //----------------------------------------

}
void deleteFirst(List &L, address &P) {

    cout<<"your code here"<<endl;

    if (L.first == NULL) {
        P = NULL;                 
    } else {
        P = L.first;
        L.first = P->next;        
        P->next = NULL;          
    }
}
 
void deleteLast(List &L, address &P) {

    cout<<"your code here"<<endl;

    if (L.first == NULL) {
        P = NULL;                 
    } else if (L.first->next == NULL) {
        P = L.first;             
        L.first = NULL;
    } else {
        address Q = L.first;
        while (Q->next->next != NULL) {
            Q = Q->next;        
        }
        P = Q->next;
        Q->next = NULL;
    }
}
 

void deleteAfter(List &L, address Prec, address &P) {

    cout<<"your code here"<<endl;

    if (Prec == NULL || Prec->next == NULL) {
        P = NULL;                 
    } else {
        P = Prec->next;
        Prec->next = P->next;    
    }
}

void printInfo(List L) {
    address P = L.first;
    if (P == NULL) {
        cout << " ," << endl;
    } else {
        while (P != NULL) {
            cout << P->info << " ";
            P = P->next;
        }
        cout << endl;
    }
}

address findElmlist(List L, infotype x) {
    address P = L.first;
    while (P != NULL) {
        if (P->info == x) {
            return P;
        }
        P = P->next;
    }
    return NULL;
}