#include "list.h"

void createList(List &L) {
    /**
    * FS : set first(L) with Null
    */
    //-------------your code here-------------
    cout<<"your code here"<<endl;


    //----------------------------------------
    L.first = nullptr;
}

address allocate(infotype x) {
@@ -26,14 +19,8 @@ address allocate(infotype x) {
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
@@ -42,10 +29,8 @@ void insertFirst(List &L, address P) {
    * FS : element pointed by P became the first element in List L
    */
    //-------------your code here-------------
    cout<<"your code here"<<endl;



    P->next = L.first;
    L.first = P;
    //----------------------------------------
}

@@ -55,9 +40,15 @@ void insertLast(List &L, address P) {
    * FS : element pointed by P became the last element in List L
    */
    //-------------your code here-------------
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
    if (L.first == NULL) {
        P = NULL;                 
    } else {
        P = L.first;
        L.first = P->next;        
        P->next = NULL;          
    }
}
 
void deleteLast(List &L, address &P) {
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
    if (Prec == NULL || Prec->next == NULL) {
        P = NULL;                 
    } else {
        P = Prec->next;
        Prec->next = P->next;    
    }
}
 