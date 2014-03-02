
        Project:    python
>--------------------------------------------
This is an example how to use boostPython.


Note:
-------------
    1. compile all src/*.cc files as one shared library
        (only the src/extendPython.cc is the new feature)
    2. in python script(run.py),
        will use the created shared library just before to reset conditions, and
        to run test() function 2 times

Compilation:
-------------
    scons       // will create executable file sss at ./, and temporary files in ./Scons
    scons -c    // clean up
    more details in SConstruct

How to run:
------------
    1. at top directory, do:
        scons
    2. then run the script, do:
        python run.py (or, ./run.py)
