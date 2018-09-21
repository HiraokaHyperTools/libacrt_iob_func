# libacrt_iob_func

`MSYS2 MinGW 32-bit` のために MSVC14 の `__acrt_iob_func` を実装します…

## ビルド方法

```sh
mkdir build
cd build
cmake -G "MSYS Makefiles" -DCMAKE_INSTALL_PREFIX=/mingw32 -DSTATIC=0 ..
make install
cmake -G "MSYS Makefiles" -DCMAKE_INSTALL_PREFIX=/mingw32 -DSTATIC=1 ..
make install
~/notdll.sh /mingw32/lib/libacrt_iob_func.dll.a
```

[notdll.sh](https://gist.github.com/kenjiuno/bdbd6c3311f4abc94e6ad1b3ac74bdbf)
