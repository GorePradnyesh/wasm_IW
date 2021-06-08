echo "Building html"
emcc simple_thread.cpp -s USE_PTHREADS=1 -s PTHREAD_POOL_SIZE=4 -s PROXY_TO_PTHREAD -o target/final.html
