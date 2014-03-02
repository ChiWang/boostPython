
        Project:    python
>--------------------------------------------
This is an example how to use boostPython.


Note:
-------------
    1. compile all *.cc files as one shared library; (only the extendPthon.cc is the new feature)
    2. in python script, using the created shared library just before to reset conditions and to run test() function

Compilation:
-------------
    scons       // will create executable file sss at ./, and temporary files in ./Scons
    scons -c    // clean up
    more details in SConstruct


