echo "Building objects"
em++ -c lib/lib_src.cpp -o lib/lib_src.o
echo "Building lib"
emar rcs lib/libSanitize.a lib/lib_src.o 
echo "Building sources"
emcc -c entry.cpp -o entry.o
echo "Building html"
emcc entry.o lib/libSanitize.a -o final.html
