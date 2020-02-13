

unwind : unwind.cc unwindf.cc
	clang++ -std=c++11 -stdlib=libc++ -o unwind -O3 unwind.cc
