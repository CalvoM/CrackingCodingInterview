from distutils import extension
from distutils.core import setup, Extension
import os

moduleName = "cracking"

srcFiles = ["src/source/isUnique.cpp","src/source/isPerm.cpp",
            "cracking.cpp","src/source/Urlify.cpp","src/source/isPalindromePerm.cpp"]
headerFiles = ["src/includes"]

extensions = Extension(moduleName,srcFiles,headerFiles)
setup(name=moduleName,
      version='1.0',
      description='Cracking the coding interview methods',
      author='CalvoM',
      ext_modules=[extensions],
      url='https://github.com/CalvoM/CrackingCodingInterview',
      download_url='https://github.com/CalvoM/CrackingCodingInterview',
      headers=["src/includes/cracking.h"]
    )