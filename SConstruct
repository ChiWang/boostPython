'''
 *  $Id: SConstruct, 2014-02-28 23:56:28 chi $
 *  Author(s):
 *    Chi WANG (chiwang@mail.ustc.edu.cn) 23/09/2013
 *----------------------------------------------------------
 *  Setup install method for python
 *   1. if you want to install the whole python, execute
 *       scons
 *----------------------------------------------------------
'''

import os

# functions
#--------------------------------------------------------------------
def checkSysEnv(var):
    if not os.environ.has_key(var):
        print "\tERROR:\tNot has environment variable: %s" % var
        Exit(1)

def useCLHEP(aEnv):
    aEnv.ParseConfig("clhep-config --include --libs")

def useRoot(aEnv):
    checkSysEnv('ROOTSYS')
    aEnv.ParseConfig("root-config --cflags --libs")
    aEnv.Append(LIBS=['RooFitCore','RooFit'])

def useGeant4(aEnv):
    checkSysEnv('G4INSTALL')
    g4sys=os.environ['G4INSTALL']
    aEnv.PrependENVPath('PATH', g4sys+'/../../../bin')
    aEnv.ParseConfig("geant4-config --cflags --libs")

def useBoostPython(aEnv):
    aEnv.ParseConfig("python-config --include --libs")
    aEnv.Append(LIBS=['boost_python'])
    #aEnv.Append(LIBS=['boost_program_options-mt'])

def useExternal(aEnv):
    aEnv.Append(LIBS=['XXX','xxxx2'])
    aEnv.Append(LIBPATH=['xxxx'])

# set basical environment
#--------------------------------------------------------------------
envBase = Environment(ENV = os.environ)
#useRoot(envBase)
#useGeant4(envBase)
#useCLHEP(envBase)
useBoostPython(envBase)
#useExternal(envBase)

#   set OpenMP
#if int(ARGUMENTS.get('omp',0)):
#    target=target+"_omp"
#    env.MergeFlags('-fopenmp')

# set general variables
#--------------------------------------------------------------------
project="python"    # or you can set an ABBREVIATION
prefix=project+'Install'
'''
if os.environ.has_key(project+'SYS'):
    prefix=os.environ[project+'SYS']
else:
    UsrPrefix=raw_input('Where to install python (press Enter to use default "%s"): ' %prefix)
    if UsrPrefix is not None:
        prefix=UsrPrefix
'''
prefix=os.path.abspath(prefix)
print "install python into: ", prefix

# mode tag
#--------------------------------------------------------------------
if int(ARGUMENTS.get('debug',1)):
    envBase.Append(CCFLAGS = ['-g','-DMy_Debug'])

# invoke *.scons file of top-1 packages
#--------------------------------------------------------------------
pkgList='src'
pkgList=ARGUMENTS.get('package',pkgList)
pkgList=pkgList.split(',')
subScript=[]
for key in pkgList:
    subScript=subScript+[key+'/'+key+'.scons']

SConscript(subScript,exports=['prefix','project','envBase'])
#SConscript(subScript,exports=['prefix','project','envBase'],variant_dir='Scons',duplicate=0)

