echo "Building html"
emcc simple_thread.cpp -s USE_PTHREADS=1 -s PTHREAD_POOL_SIZE=4 -o target/final.html
