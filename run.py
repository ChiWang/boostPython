#! /usr/bin/python
'''
import os
import sys

if os.environ['DMPSWSYS'] not in sys.path:
    sys.path.append(os.getenv('DMPSWSYS'))
    import libpythonmain
'''
import libpythonmain as DmpSimu

DmpSimu.helloworld("DAMPE")
DmpSimu.test()

DmpSimu.setN(7)
DmpSimu.helloworld("new run")
DmpSimu.test()
