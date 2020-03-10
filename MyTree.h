//
// Created by texnar on 11/11/2019.
//

#ifndef AKINATOR_MYtree_H
#define AKINATOR_MYtree_H

#define LEVEL_VERIFIC 1
#include "my_stack.h"

//#include <zconf.h>
//#include "my_stack.h"
typedef int size_tree_t;
//static size_tree_t DEFAULT_LENGHT = 100;

struct elem {
    char *name_;
    size_tree_t left_;
    size_tree_t right_;
    size_tree_t parent_;
};

struct Tree {


    explicit Tree (size_tree_t DEFAULT_LENGHT = 50, size_tree_t DEFAULT_LENGHT_NAMES = 1000);
    ~Tree ();
    void dump ();

    bool readTreeFromFile (const char name_file[]);

    bool writeTreeInFile (const char name_file[]);
    void play ();

    void definition (size_tree_t index);

    Tree(const Tree& that) = delete;

private:
    elem *one_element;
    char *all_names;
    size_tree_t size_;
    size_tree_t length_;
    size_tree_t size_names_;
    size_tree_t length_names_;
    size_tree_t root_;
    size_tree_t free_;
    void searchParents (Stack_t* stack, size_tree_t index);

    void fillingPoisonousValues();

    void writeWayTree (Stack_t* stack, size_tree_t end_index, size_tree_t new_index);
    void difference(size_tree_t first, size_tree_t second);
    void enteringNameForDifference (size_tree_t& first, size_tree_t& second);


    size_tree_t seeBranch (char* name, size_tree_t index);
    size_tree_t checkName (char* name);
    void addNewObjectInTree (char* name, size_tree_t index);

    void writeInConsole (const char* text);
    bool acceptAnswer ();
    void say (int command, char* = nullptr);
    void searchPlay ();

    void writeTree (char* text, size_tree_t index);
    void loadingTree (char text[]);
    void readTextTree (char* read_now);

    void skipSymbols (char** read_now);
    size_tree_t readNewObject (char** read_now);
    void readName (char** read_now, char name[]);
    size_tree_t creatNewObject (char name[], size_tree_t left, size_tree_t right, size_tree_t parent = 0);

    void writeFulTreeInFile (char* text, const char *name_file);
};

#endif //AKINATOR_MYtree_H
