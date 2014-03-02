#! /usr/bin/python
'''
import os
import sys

if os.environ['DMPSWSYS'] not in sys.path:
    sys.path.append(os.getenv('DMPSWSYS'))
    import libpythonmain
'''
import libpythonmain

libpythonmain.helloworld("DAMPE")
libpythonmain.test()

libpythonmain.setN(7)
libpythonmain.helloworld("new run")
libpythonmain.test()
