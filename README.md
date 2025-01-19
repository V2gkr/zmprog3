Projekty z użyciem patternów dekorator i adapter w odpowiednich folderach.
Cmake był tworzony w papce build z poleceniem "cmake .. -G "MinGW Makefiles" -DCMAKE_C_COMPILER=gcc -DCMAKE_CXX_COMPILER=g++"
Po tworzeniu Makefile polecenie make.


Przykładowa operacja Adapteru:
PS C:\Users\vovag\Documents\Projects\VScode\zmprog3\AdapterApp\build> ./AdapterApp
Moving to 63.4349 [deg], 2.23607[m] 

Przykładowa operacja Dekoratoru
PS C:\Users\vovag\Documents\Projects\VScode\zmprog3\DecoratorApp\build> ./DecoratorApp
Robot moving somewhere...
Robot shooting with something
Robot observing something with camera
