# References
'''
https://github.com/FedericoStra/cython-package-example/blob/master/setup.py
https://github.com/thewtex/cython-cmake-example/blob/master/setup.py
'''

import os
from setuptools import setup, find_packages, Extension
from Cython.Build import cythonize

import numpy

mpi_compile_args = os.popen("mpic++ --showme:compile").read().strip().split(' ')
mpi_link_args = os.popen("mpic++ --showme:link").read().strip().split(' ')

ext_modules = [
    Extension("mycythonlibs",
              sources=["lib/simplelibrary.pyx", "/home/vibhatha/github/mycythonlib/cpp/src/simplelibrary.cpp",
                       "lib/Rectangle.cpp"],
              include_dirs=[numpy.get_include(), "/home/vibhatha/github/mycythonlib/cpp/include/simplelibrary.h"],
              language='c++',
              extra_compile_args=mpi_compile_args,
              extra_link_args=mpi_link_args,
              ),
    Extension("polygonlibs",
              sources=["lib/Rectangle.cpp", "lib/rect.pyx"],
              include_dirs=[numpy.get_include(), "lib"],
              language='c++',
              extra_compile_args=mpi_compile_args,
              extra_link_args=mpi_link_args,
              ),
    Extension("geometrylibs",
              sources=["../cpp/src/Circle.cpp", "geometry/circle.pyx"],
              include_dirs=[numpy.get_include(), "../cpp/include"],
              language='c++',
              extra_compile_args=mpi_compile_args,
              extra_link_args=mpi_link_args,
              )
]

compiler_directives = {"language_level": 3, "embedsignature": True}
ext_modules = cythonize(ext_modules, compiler_directives=compiler_directives)

setup(
    name="mycythonlib",
    version='0.0.1',
    ext_modules=ext_modules,
    python_requires='>=3.7',
    install_requires=[
        'numpy',
        'cython',
    ],
)

###########################################
#
# from distutils.core import setup
# from distutils.extension import Extension
# from Cython.Distutils import build_ext
#
# import os
#
# os.environ['CC'] = '/home/vibhatha/software/openmpi/build/bin/mpic++'
#
# import numpy
#
# setup(
#     cmdclass={'build_ext': build_ext},
#     ext_modules=[Extension("multiply",
#                            sources=["multiply.pyx", "c_multiply.c"],
#                            include_dirs=[numpy.get_include()])],
# )
