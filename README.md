# mycythonlib

## Set Up

1. Open cpp directory using CLion
2. Open examples directory using CLion
3. Open python directory using PyCharm
4. Build the cpp projects using the IDE 

## Run and Test CPP

In examples package

### Run Command

```bash
 ./cmake-build-debug/mycythonexamples 
```

### Output

```bash
Initial Array 
0 1 2 3 4 
Array Multiplied by 2
0 4 8 12 16 
Array Multiplied by 2
0 16 32 48 64 
```

## Install Python Lib

1. Go to python package folder in the repo. 
2. Create a virtualenvironment
3. Make sure you have Python 3.7

```bash
python3 -m venv ENV
```

Then activate the virtual environment `ENV`

```
source ENV/bin/activate
```

4. Install Python libs

```
python3 setup.py install
```

5. Test the installation

```bash
python3 test/test_mycythonlib.py 
```

Output

```text
Before Multiply [1. 2. 3. 4. 5.]
After Multiply [ 3.  6.  9. 12. 15.]
```
