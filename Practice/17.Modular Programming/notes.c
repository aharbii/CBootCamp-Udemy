/**********************************************************************************************************************
 * Thiking in Modules:
 *      --> When you write large programs, organize the functionalities into modules.
 *      --> Think of the source file as a module, not a single function or even a bunch of code.
 *      --> Top-Down approach: from big tasks, divide to small problems.
 *      --> Bottom-Up approach: by aggregating simple features you get a big program.
 * 
 * How to Modularize:
 *      --> Information Hiding:
 *              -> Think of a module as a black box.
 *              -> From the outside you're only interested in interfacing with the module.
 *      --> Low Coupling, High Cohesion:
 *              -> Tasks that work on the same data should be in a single module.
 *              -> Tasks related to the same functionality should be in the same module.
 *              -> Minimize coupling between different modules.
 *      --> Design For change:
 *              -> You should foresee future maintenance and evolution of the system.
 *              -> Don't break the whole system when tweaking just one task.
 * 
 * Sharing Modules:
 *      -> The interface to a module is defined in the header file (module_name.h).
 *      -> The actual implementation of a module is in the source file (module_name.c).
 *      -> When you want to use another module you have to include its header file.
 *      -> Inclusion is done with the #include preprocessor directive.
 * 
 * Using Modules:
 *      -> stack.h contains the prototypes of the functions defined in stack.c
 *      -> stack.h must also be included in stack.c
 *      -> All source files that want to use the functionalities exposed by stack.h must include it
 *      -> stack.h hides the actual implementation of stack.c
**********************************************************************************************************************/

