mkdir -p target
echo "Building html"
emcc simple_file_source.cpp -o target/final.html --preload-file preload_dir
