Package: libwebp[core,libwebpmux,nearlossless,simd,unicode]:x64-windows@1.4.0

**Host Environment**

- Host: x64-windows
- Compiler: MSVC 19.41.34120.0
-    vcpkg-tool version: 2024-04-23-d6945642ee5c3076addd1a42c331bbf4cfc97457
    vcpkg-scripts version: 955803787 2024-10-11 (16 hours ago)

**To Reproduce**

`vcpkg install `

**Failure logs**

```
-- Using cached webmproject-libwebp-v1.4.0.tar.gz.
-- Cleaning sources at D:/repos/vcpkg/buildtrees/libwebp/src/v1.4.0-3f90aab08d.clean. Use --editable to skip cleaning for the packages you specify.
-- Extracting source D:/repos/vcpkg/downloads/webmproject-libwebp-v1.4.0.tar.gz
-- Applying patch 0002-cmake-config.patch
-- Applying patch 0003-simd.patch
-- Applying patch 0008-sdl.patch
-- Using source at D:/repos/vcpkg/buildtrees/libwebp/src/v1.4.0-3f90aab08d.clean
-- Configuring x64-windows
CMake Error at scripts/cmake/vcpkg_execute_required_process.cmake:127 (message):
    Command failed: D:/repos/vcpkg/downloads/tools/ninja/1.10.2-windows/ninja.exe -v
    Working Directory: D:/repos/vcpkg/buildtrees/libwebp/x64-windows-rel/vcpkg-parallel-configure
    Error code: 1
    See logs for more information:
      D:\repos\vcpkg\buildtrees\libwebp\config-x64-windows-dbg-CMakeCache.txt.log
      D:\repos\vcpkg\buildtrees\libwebp\config-x64-windows-rel-CMakeCache.txt.log
      D:\repos\vcpkg\buildtrees\libwebp\config-x64-windows-out.log

Call Stack (most recent call first):
  D:/repos/ImageRegion/vcpkg_installed/x64-windows/share/vcpkg-cmake/vcpkg_cmake_configure.cmake:252 (vcpkg_execute_required_process)
  C:/Users/lishi/AppData/Local/vcpkg/registries/git-trees/1423eee644e6b8ba75d0f936115d8709980a3c52/portfile.cmake:34 (vcpkg_cmake_configure)
  scripts/ports.cmake:192 (include)



```

<details><summary>D:\repos\vcpkg\buildtrees\libwebp\config-x64-windows-out.log</summary>

```
[1/2] "D:/repos/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/bin/cmake.exe" -E chdir ".." "D:/repos/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/bin/cmake.exe" "D:/repos/vcpkg/buildtrees/libwebp/src/v1.4.0-3f90aab08d.clean" "-G" "Ninja" "-DCMAKE_BUILD_TYPE=Release" "-DCMAKE_INSTALL_PREFIX=D:/repos/vcpkg/packages/libwebp_x64-windows" "-DFETCHCONTENT_FULLY_DISCONNECTED=ON" "-DWEBP_BUILD_ANIM_UTILS=OFF" "-DWEBP_BUILD_CWEBP=OFF" "-DWEBP_BUILD_DWEBP=OFF" "-DWEBP_BUILD_EXTRAS=OFF" "-DWEBP_BUILD_GIF2WEBP=OFF" "-DWEBP_BUILD_IMG2WEBP=OFF" "-DWEBP_BUILD_WEBPINFO=OFF" "-DWEBP_BUILD_LIBWEBPMUX=ON" "-DWEBP_BUILD_WEBPMUX=OFF" "-DWEBP_NEAR_LOSSLESS=ON" "-DWEBP_ENABLE_SIMD=ON" "-DWEBP_ENABLE_SWAP_16BIT_CSP=OFF" "-DWEBP_UNICODE=ON" "-DWEBP_BUILD_VWEBP=OFF" "-DCMAKE_REQUIRE_FIND_PACKAGE_SDL=OFF" "-DCMAKE_DISABLE_FIND_PACKAGE_SDL=ON" "-DCMAKE_MAKE_PROGRAM=D:/repos/vcpkg/downloads/tools/ninja/1.10.2-windows/ninja.exe" "-DBUILD_SHARED_LIBS=ON" "-DVCPKG_CHAINLOAD_TOOLCHAIN_FILE=D:/repos/vcpkg/scripts/toolchains/windows.cmake" "-DVCPKG_TARGET_TRIPLET=x64-windows" "-DVCPKG_SET_CHARSET_FLAG=ON" "-DVCPKG_PLATFORM_TOOLSET=v143" "-DCMAKE_EXPORT_NO_PACKAGE_REGISTRY=ON" "-DCMAKE_FIND_PACKAGE_NO_PACKAGE_REGISTRY=ON" "-DCMAKE_FIND_PACKAGE_NO_SYSTEM_PACKAGE_REGISTRY=ON" "-DCMAKE_INSTALL_SYSTEM_RUNTIME_LIBS_SKIP=TRUE" "-DCMAKE_VERBOSE_MAKEFILE=ON" "-DVCPKG_APPLOCAL_DEPS=OFF" "-DCMAKE_TOOLCHAIN_FILE=D:/repos/vcpkg/scripts/buildsystems/vcpkg.cmake" "-DCMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION=ON" "-DVCPKG_CXX_FLAGS=" "-DVCPKG_CXX_FLAGS_RELEASE=" "-DVCPKG_CXX_FLAGS_DEBUG=" "-DVCPKG_C_FLAGS=" "-DVCPKG_C_FLAGS_RELEASE=" "-DVCPKG_C_FLAGS_DEBUG=" "-DVCPKG_CRT_LINKAGE=dynamic" "-DVCPKG_LINKER_FLAGS=" "-DVCPKG_LINKER_FLAGS_RELEASE=" "-DVCPKG_LINKER_FLAGS_DEBUG=" "-DVCPKG_TARGET_ARCHITECTURE=x64" "-DCMAKE_INSTALL_LIBDIR:STRING=lib" "-DCMAKE_INSTALL_BINDIR:STRING=bin" "-D_VCPKG_ROOT_DIR=D:/repos/vcpkg" "-D_VCPKG_INSTALLED_DIR=D:/repos/ImageRegion/vcpkg_installed" "-DVCPKG_MANIFEST_INSTALL=OFF"
FAILED: ../CMakeCache.txt 
"D:/repos/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/bin/cmake.exe" -E chdir ".." "D:/repos/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/bin/cmake.exe" "D:/repos/vcpkg/buildtrees/libwebp/src/v1.4.0-3f90aab08d.clean" "-G" "Ninja" "-DCMAKE_BUILD_TYPE=Release" "-DCMAKE_INSTALL_PREFIX=D:/repos/vcpkg/packages/libwebp_x64-windows" "-DFETCHCONTENT_FULLY_DISCONNECTED=ON" "-DWEBP_BUILD_ANIM_UTILS=OFF" "-DWEBP_BUILD_CWEBP=OFF" "-DWEBP_BUILD_DWEBP=OFF" "-DWEBP_BUILD_EXTRAS=OFF" "-DWEBP_BUILD_GIF2WEBP=OFF" "-DWEBP_BUILD_IMG2WEBP=OFF" "-DWEBP_BUILD_WEBPINFO=OFF" "-DWEBP_BUILD_LIBWEBPMUX=ON" "-DWEBP_BUILD_WEBPMUX=OFF" "-DWEBP_NEAR_LOSSLESS=ON" "-DWEBP_ENABLE_SIMD=ON" "-DWEBP_ENABLE_SWAP_16BIT_CSP=OFF" "-DWEBP_UNICODE=ON" "-DWEBP_BUILD_VWEBP=OFF" "-DCMAKE_REQUIRE_FIND_PACKAGE_SDL=OFF" "-DCMAKE_DISABLE_FIND_PACKAGE_SDL=ON" "-DCMAKE_MAKE_PROGRAM=D:/repos/vcpkg/downloads/tools/ninja/1.10.2-windows/ninja.exe" "-DBUILD_SHARED_LIBS=ON" "-DVCPKG_CHAINLOAD_TOOLCHAIN_FILE=D:/repos/vcpkg/scripts/toolchains/windows.cmake" "-DVCPKG_TARGET_TRIPLET=x64-windows" "-DVCPKG_SET_CHARSET_FLAG=ON" "-DVCPKG_PLATFORM_TOOLSET=v143" "-DCMAKE_EXPORT_NO_PACKAGE_REGISTRY=ON" "-DCMAKE_FIND_PACKAGE_NO_PACKAGE_REGISTRY=ON" "-DCMAKE_FIND_PACKAGE_NO_SYSTEM_PACKAGE_REGISTRY=ON" "-DCMAKE_INSTALL_SYSTEM_RUNTIME_LIBS_SKIP=TRUE" "-DCMAKE_VERBOSE_MAKEFILE=ON" "-DVCPKG_APPLOCAL_DEPS=OFF" "-DCMAKE_TOOLCHAIN_FILE=D:/repos/vcpkg/scripts/buildsystems/vcpkg.cmake" "-DCMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION=ON" "-DVCPKG_CXX_FLAGS=" "-DVCPKG_CXX_FLAGS_RELEASE=" "-DVCPKG_CXX_FLAGS_DEBUG=" "-DVCPKG_C_FLAGS=" "-DVCPKG_C_FLAGS_RELEASE=" "-DVCPKG_C_FLAGS_DEBUG=" "-DVCPKG_CRT_LINKAGE=dynamic" "-DVCPKG_LINKER_FLAGS=" "-DVCPKG_LINKER_FLAGS_RELEASE=" "-DVCPKG_LINKER_FLAGS_DEBUG=" "-DVCPKG_TARGET_ARCHITECTURE=x64" "-DCMAKE_INSTALL_LIBDIR:STRING=lib" "-DCMAKE_INSTALL_BINDIR:STRING=bin" "-D_VCPKG_ROOT_DIR=D:/repos/vcpkg" "-D_VCPKG_INSTALLED_DIR=D:/repos/ImageRegion/vcpkg_installed" "-DVCPKG_MANIFEST_INSTALL=OFF"
-- The C compiler identification is MSVC 19.41.34120.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - failed
-- Check for working C compiler: C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.41.34120/bin/Hostx64/x64/cl.exe
-- Check for working C compiler: C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.41.34120/bin/Hostx64/x64/cl.exe - broken
CMake Error at D:/repos/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/share/cmake-3.30/Modules/CMakeTestCCompiler.cmake:67 (message):
  The C compiler

    "C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.41.34120/bin/Hostx64/x64/cl.exe"

  is not able to compile a simple test program.

  It fails with the following output:

    Change Dir: 'D:/repos/vcpkg/buildtrees/libwebp/x64-windows-rel/CMakeFiles/CMakeScratch/TryCompile-4b5d15'
    
    Run Build Command(s): D:/repos/vcpkg/downloads/tools/ninja/1.10.2-windows/ninja.exe -v cmTC_76faa
    [1/2] C:\PROGRA~1\MICROS~3\2022\COMMUN~1\VC\Tools\MSVC\1441~1.341\bin\Hostx64\x64\cl.exe  /nologo   /nologo /DWIN32 /D_WINDOWS /utf-8 /MP   /D_DEBUG /MDd /Z7 /Ob0 /Od /RTC1 /showIncludes /FoCMakeFiles\cmTC_76faa.dir\testCCompiler.c.obj /FdCMakeFiles\cmTC_76faa.dir\ /FS -c D:\repos\vcpkg\buildtrees\libwebp\x64-windows-rel\CMakeFiles\CMakeScratch\TryCompile-4b5d15\testCCompiler.c
    [2/2] C:\Windows\system32\cmd.exe /C "cd . && D:\repos\vcpkg\downloads\tools\cmake-3.30.1-windows\cmake-3.30.1-windows-i386\bin\cmake.exe -E vs_link_exe --intdir=CMakeFiles\cmTC_76faa.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100226~1.0\x64\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100226~1.0\x64\mt.exe --manifests  -- C:\PROGRA~1\MICROS~3\2022\COMMUN~1\VC\Tools\MSVC\1441~1.341\bin\Hostx64\x64\link.exe /nologo CMakeFiles\cmTC_76faa.dir\testCCompiler.c.obj  /out:cmTC_76faa.exe /implib:cmTC_76faa.lib /pdb:cmTC_76faa.pdb /version:0.0 /machine:x64  /nologo    /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib && cd ."
    FAILED: cmTC_76faa.exe 
    C:\Windows\system32\cmd.exe /C "cd . && D:\repos\vcpkg\downloads\tools\cmake-3.30.1-windows\cmake-3.30.1-windows-i386\bin\cmake.exe -E vs_link_exe --intdir=CMakeFiles\cmTC_76faa.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100226~1.0\x64\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100226~1.0\x64\mt.exe --manifests  -- C:\PROGRA~1\MICROS~3\2022\COMMUN~1\VC\Tools\MSVC\1441~1.341\bin\Hostx64\x64\link.exe /nologo CMakeFiles\cmTC_76faa.dir\testCCompiler.c.obj  /out:cmTC_76faa.exe /implib:cmTC_76faa.lib /pdb:cmTC_76faa.pdb /version:0.0 /machine:x64  /nologo    /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib && cd ."
    FINAL LINK: command "C:\PROGRA~1\MICROS~3\2022\COMMUN~1\VC\Tools\MSVC\1441~1.341\bin\Hostx64\x64\link.exe /nologo CMakeFiles\cmTC_76faa.dir\testCCompiler.c.obj /out:cmTC_76faa.exe /implib:cmTC_76faa.lib /pdb:cmTC_76faa.pdb /version:0.0 /machine:x64 /nologo /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib /MANIFEST /MANIFESTFILE:CMakeFiles\cmTC_76faa.dir/intermediate.manifest CMakeFiles\cmTC_76faa.dir/manifest.res" failed (exit code 1104) with the following output:
    LINK : fatal error LNK1104: 无法打开文件“cmTC_76faa.exe”
    ninja: build stopped: subcommand failed.
    
    

  

  CMake will not be able to correctly generate this project.
Call Stack (most recent call first):
  CMakeLists.txt:19 (project)


-- Configuring incomplete, errors occurred!
[2/2] "D:/repos/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/bin/cmake.exe" -E chdir "../../x64-windows-dbg" "D:/repos/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/bin/cmake.exe" "D:/repos/vcpkg/buildtrees/libwebp/src/v1.4.0-3f90aab08d.clean" "-G" "Ninja" "-DCMAKE_BUILD_TYPE=Debug" "-DCMAKE_INSTALL_PREFIX=D:/repos/vcpkg/packages/libwebp_x64-windows/debug" "-DFETCHCONTENT_FULLY_DISCONNECTED=ON" "-DWEBP_BUILD_ANIM_UTILS=OFF" "-DWEBP_BUILD_CWEBP=OFF" "-DWEBP_BUILD_DWEBP=OFF" "-DWEBP_BUILD_EXTRAS=OFF" "-DWEBP_BUILD_GIF2WEBP=OFF" "-DWEBP_BUILD_IMG2WEBP=OFF" "-DWEBP_BUILD_WEBPINFO=OFF" "-DWEBP_BUILD_LIBWEBPMUX=ON" "-DWEBP_BUILD_WEBPMUX=OFF" "-DWEBP_NEAR_LOSSLESS=ON" "-DWEBP_ENABLE_SIMD=ON" "-DWEBP_ENABLE_SWAP_16BIT_CSP=OFF" "-DWEBP_UNICODE=ON" "-DWEBP_BUILD_VWEBP=OFF" "-DCMAKE_REQUIRE_FIND_PACKAGE_SDL=OFF" "-DCMAKE_DISABLE_FIND_PACKAGE_SDL=ON" "-DCMAKE_MAKE_PROGRAM=D:/repos/vcpkg/downloads/tools/ninja/1.10.2-windows/ninja.exe" "-DBUILD_SHARED_LIBS=ON" "-DVCPKG_CHAINLOAD_TOOLCHAIN_FILE=D:/repos/vcpkg/scripts/toolchains/windows.cmake" "-DVCPKG_TARGET_TRIPLET=x64-windows" "-DVCPKG_SET_CHARSET_FLAG=ON" "-DVCPKG_PLATFORM_TOOLSET=v143" "-DCMAKE_EXPORT_NO_PACKAGE_REGISTRY=ON" "-DCMAKE_FIND_PACKAGE_NO_PACKAGE_REGISTRY=ON" "-DCMAKE_FIND_PACKAGE_NO_SYSTEM_PACKAGE_REGISTRY=ON" "-DCMAKE_INSTALL_SYSTEM_RUNTIME_LIBS_SKIP=TRUE" "-DCMAKE_VERBOSE_MAKEFILE=ON" "-DVCPKG_APPLOCAL_DEPS=OFF" "-DCMAKE_TOOLCHAIN_FILE=D:/repos/vcpkg/scripts/buildsystems/vcpkg.cmake" "-DCMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION=ON" "-DVCPKG_CXX_FLAGS=" "-DVCPKG_CXX_FLAGS_RELEASE=" "-DVCPKG_CXX_FLAGS_DEBUG=" "-DVCPKG_C_FLAGS=" "-DVCPKG_C_FLAGS_RELEASE=" "-DVCPKG_C_FLAGS_DEBUG=" "-DVCPKG_CRT_LINKAGE=dynamic" "-DVCPKG_LINKER_FLAGS=" "-DVCPKG_LINKER_FLAGS_RELEASE=" "-DVCPKG_LINKER_FLAGS_DEBUG=" "-DVCPKG_TARGET_ARCHITECTURE=x64" "-DCMAKE_INSTALL_LIBDIR:STRING=lib" "-DCMAKE_INSTALL_BINDIR:STRING=bin" "-D_VCPKG_ROOT_DIR=D:/repos/vcpkg" "-D_VCPKG_INSTALLED_DIR=D:/repos/ImageRegion/vcpkg_installed" "-DVCPKG_MANIFEST_INSTALL=OFF" "-DWEBP_BUILD_ANIM_UTILS=OFF" "-DWEBP_BUILD_CWEBP=OFF" "-DWEBP_BUILD_DWEBP=OFF" "-DWEBP_BUILD_EXTRAS=OFF" "-DWEBP_BUILD_GIF2WEBP=OFF" "-DWEBP_BUILD_IMG2WEBP=OFF" "-DWEBP_BUILD_VWEBP=OFF" "-DWEBP_BUILD_WEBPINFO=OFF" "-DWEBP_BUILD_WEBPMUX=OFF"
-- The C compiler identification is MSVC 19.41.34120.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.41.34120/bin/Hostx64/x64/cl.exe - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Performing Test HAVE_BUILTIN_BSWAP16
-- Performing Test HAVE_BUILTIN_BSWAP16 - Failed
-- Performing Test HAVE_BUILTIN_BSWAP32
-- Performing Test HAVE_BUILTIN_BSWAP32 - Failed
-- Performing Test HAVE_BUILTIN_BSWAP64
-- Performing Test HAVE_BUILTIN_BSWAP64 - Failed
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD - Failed
-- Looking for pthread_create in pthreads
-- Looking for pthread_create in pthreads - not found
-- Looking for pthread_create in pthread
-- Looking for pthread_create in pthread - not found
-- Found Threads: TRUE
-- Found OpenGL: opengl32
-- Performing Test HAVE_MATH_LIBRARY
-- Performing Test HAVE_MATH_LIBRARY - Success
-- Looking for include file GLUT/glut.h
-- Looking for include file GLUT/glut.h - not found
-- Looking for include file GL/glut.h
-- Looking for include file GL/glut.h - not found
-- Looking for include file OpenGL/glut.h
-- Looking for include file OpenGL/glut.h - not found
-- Looking for include file shlwapi.h
-- Looking for include file shlwapi.h - found
-- Looking for include file unistd.h
-- Looking for include file unistd.h - not found
-- Looking for include file wincodec.h
-- Looking for include file wincodec.h - found
-- Looking for include file windows.h
-- Looking for include file windows.h - found
-- Performing Test WEBP_HAVE_FLAG_SSE41
-- Performing Test WEBP_HAVE_FLAG_SSE41 - Success
-- Performing Test WEBP_HAVE_FLAG_SSE2
-- Performing Test WEBP_HAVE_FLAG_SSE2 - Failed
-- Performing Test WEBP_HAVE_FLAG_SSE2
-- Performing Test WEBP_HAVE_FLAG_SSE2 - Success
-- Performing Test WEBP_HAVE_FLAG_MIPS32
-- Performing Test WEBP_HAVE_FLAG_MIPS32 - Failed
-- Performing Test WEBP_HAVE_FLAG_MIPS32
-- Performing Test WEBP_HAVE_FLAG_MIPS32 - Failed
-- Performing Test WEBP_HAVE_FLAG_MIPS_DSP_R2
-- Performing Test WEBP_HAVE_FLAG_MIPS_DSP_R2 - Failed
-- Performing Test WEBP_HAVE_FLAG_MIPS_DSP_R2
-- Performing Test WEBP_HAVE_FLAG_MIPS_DSP_R2 - Failed
-- Performing Test WEBP_HAVE_FLAG_NEON
-- Performing Test WEBP_HAVE_FLAG_NEON - Failed
-- Performing Test WEBP_HAVE_FLAG_NEON
-- Performing Test WEBP_HAVE_FLAG_NEON - Failed
-- Performing Test WEBP_HAVE_FLAG_MSA
-- Performing Test WEBP_HAVE_FLAG_MSA - Failed
-- Performing Test WEBP_HAVE_FLAG_MSA
-- Performing Test WEBP_HAVE_FLAG_MSA - Failed
-- Configuring done (14.7s)
-- Generating done (0.2s)
CMake Warning:
  Manually-specified variables were not used by the project:

    CMAKE_DISABLE_FIND_PACKAGE_SDL
    CMAKE_REQUIRE_FIND_PACKAGE_SDL
    FETCHCONTENT_FULLY_DISCONNECTED
    _VCPKG_ROOT_DIR


-- Build files have been written to: D:/repos/vcpkg/buildtrees/libwebp/x64-windows-dbg
ninja: build stopped: subcommand failed.
```
</details>

<details><summary>D:\repos\vcpkg\buildtrees\libwebp\config-x64-windows-rel-CMakeCache.txt.log</summary>

```
# This is the CMakeCache file.
# For build in directory: d:/repos/vcpkg/buildtrees/libwebp/x64-windows-rel
# It was generated by CMake: D:/repos/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/bin/cmake.exe
# You can edit this file to change values found and used by cmake.
# If you do not want to change any of the values, simply exit the editor.
# If you do want to change a value, simply edit, save, and exit the editor.
# The syntax for the file is as follows:
# KEY:TYPE=VALUE
# KEY is the name of a variable in the cache.
# TYPE is a hint to GUIs for the type of VALUE, DO NOT EDIT TYPE!.
# VALUE is the current value for the KEY.

########################
# EXTERNAL cache entries
########################

//No help, variable specified on the command line.
BUILD_SHARED_LIBS:UNINITIALIZED=ON

//Path to a program.
CMAKE_AR:FILEPATH=C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.41.34120/bin/Hostx64/x64/lib.exe

//Choose the type of build, options are: None Debug Release RelWithDebInfo
// MinSizeRel ...
CMAKE_BUILD_TYPE:STRING=Release

CMAKE_CROSSCOMPILING:STRING=OFF

CMAKE_CXX_FLAGS:STRING=' /nologo /DWIN32 /D_WINDOWS /utf-8 /GR /EHsc /MP '

CMAKE_CXX_FLAGS_DEBUG:STRING='/D_DEBUG /MDd /Z7 /Ob0 /Od /RTC1 '

CMAKE_CXX_FLAGS_RELEASE:STRING='/MD /O2 /Oi /Gy /DNDEBUG /Z7 '

//C compiler
CMAKE_C_COMPILER:FILEPATH=C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.41.34120/bin/Hostx64/x64/cl.exe

CMAKE_C_FLAGS:STRING=' /nologo /DWIN32 /D_WINDOWS /utf-8 /MP '

CMAKE_C_FLAGS_DEBUG:STRING='/D_DEBUG /MDd /Z7 /Ob0 /Od /RTC1 '

//Flags used by the C compiler during MINSIZEREL builds.
CMAKE_C_FLAGS_MINSIZEREL:STRING=/MD /O1 /Ob1 /DNDEBUG

CMAKE_C_FLAGS_RELEASE:STRING='/MD /O2 /Oi /Gy /DNDEBUG /Z7 '

//Flags used by the C compiler during RELWITHDEBINFO builds.
CMAKE_C_FLAGS_RELWITHDEBINFO:STRING=/MD /Zi /O2 /Ob1 /DNDEBUG

//Libraries linked by default with all C applications.
CMAKE_C_STANDARD_LIBRARIES:STRING=kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib

//No help, variable specified on the command line.
CMAKE_DISABLE_FIND_PACKAGE_SDL:UNINITIALIZED=ON

//No help, variable specified on the command line.
CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION:UNINITIALIZED=ON

//Flags used by the linker during all build types.
CMAKE_EXE_LINKER_FLAGS:STRING=/machine:x64

//Flags used by the linker during DEBUG builds.
CMAKE_EXE_LINKER_FLAGS_DEBUG:STRING=/nologo    /debug /INCREMENTAL

//Flags used by the linker during MINSIZEREL builds.
CMAKE_EXE_LINKER_FLAGS_MINSIZEREL:STRING=/INCREMENTAL:NO

CMAKE_EXE_LINKER_FLAGS_RELEASE:STRING='/nologo /DEBUG /INCREMENTAL:NO /OPT:REF /OPT:ICF  '

//Flags used by the linker during RELWITHDEBINFO builds.
CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO:STRING=/debug /INCREMENTAL

//Enable/Disable output of compile commands during generation.
CMAKE_EXPORT_COMPILE_COMMANDS:BOOL=

//No help, variable specified on the command line.
CMAKE_EXPORT_NO_PACKAGE_REGISTRY:UNINITIALIZED=ON

//No help, variable specified on the command line.
CMAKE_FIND_PACKAGE_NO_PACKAGE_REGISTRY:UNINITIALIZED=ON

//No help, variable specified on the command line.
CMAKE_FIND_PACKAGE_NO_SYSTEM_PACKAGE_REGISTRY:UNINITIALIZED=ON

//Value Computed by CMake.
CMAKE_FIND_PACKAGE_REDIRECTS_DIR:STATIC=D:/repos/vcpkg/buildtrees/libwebp/x64-windows-rel/CMakeFiles/pkgRedirects

//No help, variable specified on the command line.
CMAKE_INSTALL_BINDIR:STRING=bin

//No help, variable specified on the command line.
CMAKE_INSTALL_LIBDIR:STRING=lib

//Install path prefix, prepended onto install directories.
CMAKE_INSTALL_PREFIX:PATH=D:/repos/vcpkg/packages/libwebp_x64-windows

//No help, variable specified on the command line.
CMAKE_INSTALL_SYSTEM_RUNTIME_LIBS_SKIP:UNINITIALIZED=TRUE

//Path to a program.
CMAKE_LINKER:FILEPATH=C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.41.34120/bin/Hostx64/x64/link.exe

//No help, variable specified on the command line.
CMAKE_MAKE_PROGRAM:UNINITIALIZED=D:/repos/vcpkg/downloads/tools/ninja/1.10.2-windows/ninja.exe

//Flags used by the linker during the creation of modules during
// all build types.
CMAKE_MODULE_LINKER_FLAGS:STRING=/machine:x64

//Flags used by the linker during the creation of modules during
// DEBUG builds.
CMAKE_MODULE_LINKER_FLAGS_DEBUG:STRING=/nologo    /debug /INCREMENTAL

//Flags used by the linker during the creation of modules during
// MINSIZEREL builds.
CMAKE_MODULE_LINKER_FLAGS_MINSIZEREL:STRING=/INCREMENTAL:NO

CMAKE_MODULE_LINKER_FLAGS_RELEASE:STRING='/nologo /DEBUG /INCREMENTAL:NO /OPT:REF /OPT:ICF  '

//Flags used by the linker during the creation of modules during
// RELWITHDEBINFO builds.
CMAKE_MODULE_LINKER_FLAGS_RELWITHDEBINFO:STRING=/debug /INCREMENTAL

CMAKE_MSVC_RUNTIME_LIBRARY:STRING=MultiThreaded$<$<CONFIG:Debug>:Debug>$<$<STREQUAL:dynamic,dynamic>:DLL>

//Path to a program.
CMAKE_MT:FILEPATH=C:/Program Files (x86)/Windows Kits/10/bin/10.0.22621.0/x64/mt.exe

//Value Computed by CMake
CMAKE_PROJECT_DESCRIPTION:STATIC=

//Value Computed by CMake
CMAKE_PROJECT_HOMEPAGE_URL:STATIC=

//Value Computed by CMake
CMAKE_PROJECT_NAME:STATIC=WebP

//RC compiler
CMAKE_RC_COMPILER:FILEPATH=C:/Program Files (x86)/Windows Kits/10/bin/10.0.22621.0/x64/rc.exe

CMAKE_RC_FLAGS:STRING=-c65001 /DWIN32

//Flags for Windows Resource Compiler during DEBUG builds.
CMAKE_RC_FLAGS_DEBUG:STRING=-D_DEBUG

//Flags for Windows Resource Compiler during MINSIZEREL builds.
CMAKE_RC_FLAGS_MINSIZEREL:STRING=

//Flags for Windows Resource Compiler during RELEASE builds.
CMAKE_RC_FLAGS_RELEASE:STRING=

//Flags for Windows Resource Compiler during RELWITHDEBINFO builds.
CMAKE_RC_FLAGS_RELWITHDEBINFO:STRING=

//No help, variable specified on the command line.
CMAKE_REQUIRE_FIND_PACKAGE_SDL:UNINITIALIZED=OFF

//Flags used by the linker during the creation of shared libraries
// during all build types.
CMAKE_SHARED_LINKER_FLAGS:STRING=/machine:x64

//Flags used by the linker during the creation of shared libraries
// during DEBUG builds.
CMAKE_SHARED_LINKER_FLAGS_DEBUG:STRING=/nologo    /debug /INCREMENTAL

//Flags used by the linker during the creation of shared libraries
// during MINSIZEREL builds.
CMAKE_SHARED_LINKER_FLAGS_MINSIZEREL:STRING=/INCREMENTAL:NO

CMAKE_SHARED_LINKER_FLAGS_RELEASE:STRING='/nologo /DEBUG /INCREMENTAL:NO /OPT:REF /OPT:ICF  '

//Flags used by the linker during the creation of shared libraries
// during RELWITHDEBINFO builds.
CMAKE_SHARED_LINKER_FLAGS_RELWITHDEBINFO:STRING=/debug /INCREMENTAL

//If set, runtime paths are not added when installing shared libraries,
// but are added when building.
CMAKE_SKIP_INSTALL_RPATH:BOOL=NO

//If set, runtime paths are not added when using shared libraries.
CMAKE_SKIP_RPATH:BOOL=NO

//Flags used by the linker during the creation of static libraries
// during all build types.
CMAKE_STATIC_LINKER_FLAGS:STRING=/machine:x64

//Flags used by the linker during the creation of static libraries
// during DEBUG builds.
CMAKE_STATIC_LINKER_FLAGS_DEBUG:STRING=/nologo

//Flags used by the linker during the creation of static libraries
// during MINSIZEREL builds.
CMAKE_STATIC_LINKER_FLAGS_MINSIZEREL:STRING=

//Flags used by the linker during the creation of static libraries
// during RELEASE builds.
CMAKE_STATIC_LINKER_FLAGS_RELEASE:STRING=/nologo

//Flags used by the linker during the creation of static libraries
// during RELWITHDEBINFO builds.
CMAKE_STATIC_LINKER_FLAGS_RELWITHDEBINFO:STRING=

CMAKE_SYSTEM_NAME:STRING=Windows

CMAKE_SYSTEM_PROCESSOR:STRING=AMD64

CMAKE_SYSTEM_VERSION:STRING=10.0.22631

//The CMake toolchain file
CMAKE_TOOLCHAIN_FILE:FILEPATH=D:/repos/vcpkg/scripts/buildsystems/vcpkg.cmake

//If this value is on, makefiles will be generated without the
// .SILENT directive, and all commands will be echoed to the console
// during the make.  This is useful for debugging only. With Visual
// Studio IDE projects all commands are done without /nologo.
CMAKE_VERBOSE_MAKEFILE:BOOL=ON

//No help, variable specified on the command line.
FETCHCONTENT_FULLY_DISCONNECTED:UNINITIALIZED=ON

//Automatically copy dependencies into the output directory for
// executables.
VCPKG_APPLOCAL_DEPS:BOOL=OFF

//No help, variable specified on the command line.
VCPKG_CHAINLOAD_TOOLCHAIN_FILE:UNINITIALIZED=D:/repos/vcpkg/scripts/toolchains/windows.cmake

//No help, variable specified on the command line.
VCPKG_CRT_LINKAGE:UNINITIALIZED=dynamic

//No help, variable specified on the command line.
VCPKG_CXX_FLAGS:UNINITIALIZED=

//No help, variable specified on the command line.
VCPKG_CXX_FLAGS_DEBUG:UNINITIALIZED=

//No help, variable specified on the command line.
VCPKG_CXX_FLAGS_RELEASE:UNINITIALIZED=

//No help, variable specified on the command line.
VCPKG_C_FLAGS:UNINITIALIZED=

//No help, variable specified on the command line.
VCPKG_C_FLAGS_DEBUG:UNINITIALIZED=

//No help, variable specified on the command line.
VCPKG_C_FLAGS_RELEASE:UNINITIALIZED=

//The directory which contains the installed libraries for each
// triplet
VCPKG_INSTALLED_DIR:PATH=D:/repos/ImageRegion/vcpkg_installed

//No help, variable specified on the command line.
VCPKG_LINKER_FLAGS:UNINITIALIZED=

//No help, variable specified on the command line.
VCPKG_LINKER_FLAGS_DEBUG:UNINITIALIZED=

//No help, variable specified on the command line.
VCPKG_LINKER_FLAGS_RELEASE:UNINITIALIZED=

//The path to the vcpkg manifest directory.
VCPKG_MANIFEST_DIR:PATH=

//Use manifest mode, as opposed to classic mode.
VCPKG_MANIFEST_MODE:BOOL=OFF

//No help, variable specified on the command line.
VCPKG_PLATFORM_TOOLSET:UNINITIALIZED=v143

//Appends the vcpkg paths to CMAKE_PREFIX_PATH, CMAKE_LIBRARY_PATH
// and CMAKE_FIND_ROOT_PATH so that vcpkg libraries/packages are
// found after toolchain/system libraries/packages.
VCPKG_PREFER_SYSTEM_LIBS:BOOL=OFF

//Enable the setup of CMAKE_PROGRAM_PATH to vcpkg paths
VCPKG_SETUP_CMAKE_PROGRAM_PATH:BOOL=ON

//No help, variable specified on the command line.
VCPKG_SET_CHARSET_FLAG:UNINITIALIZED=ON

//No help, variable specified on the command line.
VCPKG_TARGET_ARCHITECTURE:UNINITIALIZED=x64

//Vcpkg target triplet (ex. x86-windows)
VCPKG_TARGET_TRIPLET:STRING=x64-windows

//Trace calls to find_package()
VCPKG_TRACE_FIND_PACKAGE:BOOL=OFF

//Enables messages from the VCPKG toolchain for debugging purposes.
VCPKG_VERBOSE:BOOL=OFF

//No help, variable specified on the command line.
WEBP_BUILD_ANIM_UTILS:UNINITIALIZED=OFF

//No help, variable specified on the command line.
WEBP_BUILD_CWEBP:UNINITIALIZED=OFF

//No help, variable specified on the command line.
WEBP_BUILD_DWEBP:UNINITIALIZED=OFF

//No help, variable specified on the command line.
WEBP_BUILD_EXTRAS:UNINITIALIZED=OFF

//No help, variable specified on the command line.
WEBP_BUILD_GIF2WEBP:UNINITIALIZED=OFF

//No help, variable specified on the command line.
WEBP_BUILD_IMG2WEBP:UNINITIALIZED=OFF

//No help, variable specified on the command line.
WEBP_BUILD_LIBWEBPMUX:UNINITIALIZED=ON

//No help, variable specified on the command line.
WEBP_BUILD_VWEBP:UNINITIALIZED=OFF

//No help, variable specified on the command line.
WEBP_BUILD_WEBPINFO:UNINITIALIZED=OFF

//No help, variable specified on the command line.
WEBP_BUILD_WEBPMUX:UNINITIALIZED=OFF

//No help, variable specified on the command line.
WEBP_ENABLE_SIMD:UNINITIALIZED=ON

//No help, variable specified on the command line.
WEBP_ENABLE_SWAP_16BIT_CSP:UNINITIALIZED=OFF

//No help, variable specified on the command line.
WEBP_NEAR_LOSSLESS:UNINITIALIZED=ON

//No help, variable specified on the command line.
WEBP_UNICODE:UNINITIALIZED=ON

//Value Computed by CMake
WebP_BINARY_DIR:STATIC=D:/repos/vcpkg/buildtrees/libwebp/x64-windows-rel

//Value Computed by CMake
WebP_IS_TOP_LEVEL:STATIC=ON

//Value Computed by CMake
WebP_SOURCE_DIR:STATIC=D:/repos/vcpkg/buildtrees/libwebp/src/v1.4.0-3f90aab08d.clean

//(experimental) Automatically copy dependencies into the install
// target directory for executables. Requires CMake 3.14.
X_VCPKG_APPLOCAL_DEPS_INSTALL:BOOL=OFF

//(experimental) Add USES_TERMINAL to VCPKG_APPLOCAL_DEPS to force
// serialization.
X_VCPKG_APPLOCAL_DEPS_SERIALIZED:BOOL=OFF

//The directory which contains the installed libraries for each
// triplet
_VCPKG_INSTALLED_DIR:PATH=D:/repos/ImageRegion/vcpkg_installed

//No help, variable specified on the command line.
_VCPKG_ROOT_DIR:UNINITIALIZED=D:/repos/vcpkg


########################
# INTERNAL cache entries
########################

//ADVANCED property for variable: CMAKE_AR
CMAKE_AR-ADVANCED:INTERNAL=1
//This is the directory where this CMakeCache.txt was created
CMAKE_CACHEFILE_DIR:INTERNAL=d:/repos/vcpkg/buildtrees/libwebp/x64-windows-rel
//Major version of cmake used to create the current loaded cache
CMAKE_CACHE_MAJOR_VERSION:INTERNAL=3
//Minor version of cmake used to create the current loaded cache
CMAKE_CACHE_MINOR_VERSION:INTERNAL=30
//Patch version of cmake used to create the current loaded cache
CMAKE_CACHE_PATCH_VERSION:INTERNAL=1
//Path to CMake executable.
CMAKE_COMMAND:INTERNAL=D:/repos/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/bin/cmake.exe
//Path to cpack program executable.
CMAKE_CPACK_COMMAND:INTERNAL=D:/repos/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/bin/cpack.exe
//Path to ctest program executable.
CMAKE_CTEST_COMMAND:INTERNAL=D:/repos/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/bin/ctest.exe
//ADVANCED property for variable: CMAKE_C_COMPILER
CMAKE_C_COMPILER-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_FLAGS
CMAKE_C_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_FLAGS_DEBUG
CMAKE_C_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_FLAGS_MINSIZEREL
CMAKE_C_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_FLAGS_RELEASE
CMAKE_C_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_FLAGS_RELWITHDEBINFO
CMAKE_C_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_STANDARD_LIBRARIES
CMAKE_C_STANDARD_LIBRARIES-ADVANCED:INTERNAL=1
//Path to cache edit program executable.
CMAKE_EDIT_COMMAND:INTERNAL=D:/repos/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/bin/cmake-gui.exe
//Executable file format
CMAKE_EXECUTABLE_FORMAT:INTERNAL=Unknown
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS
CMAKE_EXE_LINKER_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS_DEBUG
CMAKE_EXE_LINKER_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS_MINSIZEREL
CMAKE_EXE_LINKER_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS_RELEASE
CMAKE_EXE_LINKER_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO
CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXPORT_COMPILE_COMMANDS
CMAKE_EXPORT_COMPILE_COMMANDS-ADVANCED:INTERNAL=1
//Name of external makefile project generator.
CMAKE_EXTRA_GENERATOR:INTERNAL=
//Name of generator.
CMAKE_GENERATOR:INTERNAL=Ninja
//Generator instance identifier.
CMAKE_GENERATOR_INSTANCE:INTERNAL=
//Name of generator platform.
CMAKE_GENERATOR_PLATFORM:INTERNAL=
//Name of generator toolset.
CMAKE_GENERATOR_TOOLSET:INTERNAL=
//Source directory with the top level CMakeLists.txt file for this
// project
CMAKE_HOME_DIRECTORY:INTERNAL=D:/repos/vcpkg/buildtrees/libwebp/src/v1.4.0-3f90aab08d.clean
//ADVANCED property for variable: CMAKE_LINKER
CMAKE_LINKER-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS
CMAKE_MODULE_LINKER_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS_DEBUG
CMAKE_MODULE_LINKER_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS_MINSIZEREL
CMAKE_MODULE_LINKER_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS_RELEASE
CMAKE_MODULE_LINKER_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS_RELWITHDEBINFO
CMAKE_MODULE_LINKER_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MT
CMAKE_MT-ADVANCED:INTERNAL=1
//number of local generators
CMAKE_NUMBER_OF_MAKEFILES:INTERNAL=1
//Platform information initialized
CMAKE_PLATFORM_INFO_INITIALIZED:INTERNAL=1
//noop for ranlib
CMAKE_RANLIB:INTERNAL=:
//ADVANCED property for variable: CMAKE_RC_COMPILER
CMAKE_RC_COMPILER-ADVANCED:INTERNAL=1
CMAKE_RC_COMPILER_WORKS:INTERNAL=1
//ADVANCED property for variable: CMAKE_RC_FLAGS
CMAKE_RC_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_RC_FLAGS_DEBUG
CMAKE_RC_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_RC_FLAGS_MINSIZEREL
CMAKE_RC_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_RC_FLAGS_RELEASE
CMAKE_RC_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_RC_FLAGS_RELWITHDEBINFO
CMAKE_RC_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//Path to CMake installation.
CMAKE_ROOT:INTERNAL=D:/repos/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/share/cmake-3.30
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS
CMAKE_SHARED_LINKER_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS_DEBUG
CMAKE_SHARED_LINKER_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS_MINSIZEREL
CMAKE_SHARED_LINKER_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS_RELEASE
CMAKE_SHARED_LINKER_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS_RELWITHDEBINFO
CMAKE_SHARED_LINKER_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SKIP_INSTALL_RPATH
CMAKE_SKIP_INSTALL_RPATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SKIP_RPATH
CMAKE_SKIP_RPATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS
CMAKE_STATIC_LINKER_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS_DEBUG
CMAKE_STATIC_LINKER_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS_MINSIZEREL
CMAKE_STATIC_LINKER_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS_RELEASE
CMAKE_STATIC_LINKER_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS_RELWITHDEBINFO
CMAKE_STATIC_LINKER_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_TOOLCHAIN_FILE
CMAKE_TOOLCHAIN_FILE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_VERBOSE_MAKEFILE
CMAKE_VERBOSE_MAKEFILE-ADVANCED:INTERNAL=1
//Install the dependencies listed in your manifest:
//\n    If this is off, you will have to manually install your dependencies.
//\n    See https://github.com/microsoft/vcpkg/tree/master/docs/specifications/manifests.md
// for more info.
//\n
VCPKG_MANIFEST_INSTALL:INTERNAL=OFF
//ADVANCED property for variable: VCPKG_VERBOSE
VCPKG_VERBOSE-ADVANCED:INTERNAL=1
//Making sure VCPKG_MANIFEST_MODE doesn't change
Z_VCPKG_CHECK_MANIFEST_MODE:INTERNAL=OFF
//Vcpkg root directory
Z_VCPKG_ROOT_DIR:INTERNAL=D:/repos/vcpkg

```
</details>

<details><summary>D:\repos\vcpkg\buildtrees\libwebp\config-x64-windows-dbg-CMakeCache.txt.log</summary>

```
# This is the CMakeCache file.
# For build in directory: d:/repos/vcpkg/buildtrees/libwebp/x64-windows-dbg
# It was generated by CMake: D:/repos/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/bin/cmake.exe
# You can edit this file to change values found and used by cmake.
# If you do not want to change any of the values, simply exit the editor.
# If you do want to change a value, simply edit, save, and exit the editor.
# The syntax for the file is as follows:
# KEY:TYPE=VALUE
# KEY is the name of a variable in the cache.
# TYPE is a hint to GUIs for the type of VALUE, DO NOT EDIT TYPE!.
# VALUE is the current value for the KEY.

########################
# EXTERNAL cache entries
########################

//No help, variable specified on the command line.
BUILD_SHARED_LIBS:UNINITIALIZED=ON

//Path to a program.
CMAKE_AR:FILEPATH=C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.41.34120/bin/Hostx64/x64/lib.exe

//Choose the type of build, options are: None Debug Release RelWithDebInfo
// MinSizeRel ...
CMAKE_BUILD_TYPE:STRING=Debug

CMAKE_CROSSCOMPILING:STRING=OFF

CMAKE_CXX_FLAGS:STRING=' /nologo /DWIN32 /D_WINDOWS /utf-8 /GR /EHsc /MP '

CMAKE_CXX_FLAGS_DEBUG:STRING='/D_DEBUG /MDd /Z7 /Ob0 /Od /RTC1 '

CMAKE_CXX_FLAGS_RELEASE:STRING='/MD /O2 /Oi /Gy /DNDEBUG /Z7 '

//C compiler
CMAKE_C_COMPILER:FILEPATH=C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.41.34120/bin/Hostx64/x64/cl.exe

CMAKE_C_FLAGS:STRING=' /nologo /DWIN32 /D_WINDOWS /utf-8 /MP '

CMAKE_C_FLAGS_DEBUG:STRING='/D_DEBUG /MDd /Z7 /Ob0 /Od /RTC1 '

//Flags used by the C compiler during MINSIZEREL builds.
CMAKE_C_FLAGS_MINSIZEREL:STRING=/MD /O1 /Ob1 /DNDEBUG

CMAKE_C_FLAGS_RELEASE:STRING='/MD /O2 /Oi /Gy /DNDEBUG /Z7 '

//Flags used by the C compiler during RELWITHDEBINFO builds.
CMAKE_C_FLAGS_RELWITHDEBINFO:STRING=/MD /Zi /O2 /Ob1 /DNDEBUG

//Libraries linked by default with all C applications.
CMAKE_C_STANDARD_LIBRARIES:STRING=kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib

//No help, variable specified on the command line.
CMAKE_DISABLE_FIND_PACKAGE_SDL:UNINITIALIZED=ON

//No help, variable specified on the command line.
CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION:UNINITIALIZED=ON

//Flags used by the linker during all build types.
CMAKE_EXE_LINKER_FLAGS:STRING=/machine:x64

//Flags used by the linker during DEBUG builds.
CMAKE_EXE_LINKER_FLAGS_DEBUG:STRING=/nologo    /debug /INCREMENTAL

//Flags used by the linker during MINSIZEREL builds.
CMAKE_EXE_LINKER_FLAGS_MINSIZEREL:STRING=/INCREMENTAL:NO

CMAKE_EXE_LINKER_FLAGS_RELEASE:STRING='/nologo /DEBUG /INCREMENTAL:NO /OPT:REF /OPT:ICF  '

//Flags used by the linker during RELWITHDEBINFO builds.
CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO:STRING=/debug /INCREMENTAL

//Enable/Disable output of compile commands during generation.
CMAKE_EXPORT_COMPILE_COMMANDS:BOOL=

//No help, variable specified on the command line.
CMAKE_EXPORT_NO_PACKAGE_REGISTRY:UNINITIALIZED=ON

//No help, variable specified on the command line.
CMAKE_FIND_PACKAGE_NO_PACKAGE_REGISTRY:UNINITIALIZED=ON

//No help, variable specified on the command line.
CMAKE_FIND_PACKAGE_NO_SYSTEM_PACKAGE_REGISTRY:UNINITIALIZED=ON

//Value Computed by CMake.
CMAKE_FIND_PACKAGE_REDIRECTS_DIR:STATIC=D:/repos/vcpkg/buildtrees/libwebp/x64-windows-dbg/CMakeFiles/pkgRedirects

//No help, variable specified on the command line.
CMAKE_INSTALL_BINDIR:STRING=bin

//Read-only architecture-independent data (DATAROOTDIR)
CMAKE_INSTALL_DATADIR:PATH=

//Read-only architecture-independent data root (share)
CMAKE_INSTALL_DATAROOTDIR:PATH=share

//Documentation root (DATAROOTDIR/doc/PROJECT_NAME)
CMAKE_INSTALL_DOCDIR:PATH=

//C header files (include)
CMAKE_INSTALL_INCLUDEDIR:PATH=include

//Info documentation (DATAROOTDIR/info)
CMAKE_INSTALL_INFODIR:PATH=

//No help, variable specified on the command line.
CMAKE_INSTALL_LIBDIR:STRING=lib

//Program executables (libexec)
CMAKE_INSTALL_LIBEXECDIR:PATH=libexec

//Locale-dependent data (DATAROOTDIR/locale)
CMAKE_INSTALL_LOCALEDIR:PATH=

//Modifiable single-machine data (var)
CMAKE_INSTALL_LOCALSTATEDIR:PATH=var

//Man documentation (DATAROOTDIR/man)
CMAKE_INSTALL_MANDIR:PATH=

//C header files for non-gcc (/usr/include)
CMAKE_INSTALL_OLDINCLUDEDIR:PATH=/usr/include

//Install path prefix, prepended onto install directories.
CMAKE_INSTALL_PREFIX:PATH=D:/repos/vcpkg/packages/libwebp_x64-windows/debug

//Run-time variable data (LOCALSTATEDIR/run)
CMAKE_INSTALL_RUNSTATEDIR:PATH=

//System admin executables (sbin)
CMAKE_INSTALL_SBINDIR:PATH=sbin

//Modifiable architecture-independent data (com)
CMAKE_INSTALL_SHAREDSTATEDIR:PATH=com

//Read-only single-machine data (etc)
CMAKE_INSTALL_SYSCONFDIR:PATH=etc

//No help, variable specified on the command line.
CMAKE_INSTALL_SYSTEM_RUNTIME_LIBS_SKIP:UNINITIALIZED=TRUE

//Path to a program.
CMAKE_LINKER:FILEPATH=C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.41.34120/bin/Hostx64/x64/link.exe

//No help, variable specified on the command line.
CMAKE_MAKE_PROGRAM:UNINITIALIZED=D:/repos/vcpkg/downloads/tools/ninja/1.10.2-windows/ninja.exe

//Flags used by the linker during the creation of modules during
// all build types.
CMAKE_MODULE_LINKER_FLAGS:STRING=/machine:x64

//Flags used by the linker during the creation of modules during
// DEBUG builds.
CMAKE_MODULE_LINKER_FLAGS_DEBUG:STRING=/nologo    /debug /INCREMENTAL

//Flags used by the linker during the creation of modules during
// MINSIZEREL builds.
CMAKE_MODULE_LINKER_FLAGS_MINSIZEREL:STRING=/INCREMENTAL:NO

CMAKE_MODULE_LINKER_FLAGS_RELEASE:STRING='/nologo /DEBUG /INCREMENTAL:NO /OPT:REF /OPT:ICF  '

//Flags used by the linker during the creation of modules during
// RELWITHDEBINFO builds.
CMAKE_MODULE_LINKER_FLAGS_RELWITHDEBINFO:STRING=/debug /INCREMENTAL

CMAKE_MSVC_RUNTIME_LIBRARY:STRING=MultiThreaded$<$<CONFIG:Debug>:Debug>$<$<STREQUAL:dynamic,dynamic>:DLL>

//Path to a program.
CMAKE_MT:FILEPATH=C:/Program Files (x86)/Windows Kits/10/bin/10.0.22621.0/x64/mt.exe

//Value Computed by CMake
CMAKE_PROJECT_DESCRIPTION:STATIC=

//Value Computed by CMake
CMAKE_PROJECT_HOMEPAGE_URL:STATIC=

//Value Computed by CMake
CMAKE_PROJECT_NAME:STATIC=WebP

//RC compiler
CMAKE_RC_COMPILER:FILEPATH=C:/Program Files (x86)/Windows Kits/10/bin/10.0.22621.0/x64/rc.exe

CMAKE_RC_FLAGS:STRING=-c65001 /DWIN32

//Flags for Windows Resource Compiler during DEBUG builds.
CMAKE_RC_FLAGS_DEBUG:STRING=-D_DEBUG

//Flags for Windows Resource Compiler during MINSIZEREL builds.
CMAKE_RC_FLAGS_MINSIZEREL:STRING=

//Flags for Windows Resource Compiler during RELEASE builds.
CMAKE_RC_FLAGS_RELEASE:STRING=

//Flags for Windows Resource Compiler during RELWITHDEBINFO builds.
CMAKE_RC_FLAGS_RELWITHDEBINFO:STRING=

//No help, variable specified on the command line.
CMAKE_REQUIRE_FIND_PACKAGE_SDL:UNINITIALIZED=OFF

//Flags used by the linker during the creation of shared libraries
// during all build types.
CMAKE_SHARED_LINKER_FLAGS:STRING=/machine:x64

//Flags used by the linker during the creation of shared libraries
// during DEBUG builds.
CMAKE_SHARED_LINKER_FLAGS_DEBUG:STRING=/nologo    /debug /INCREMENTAL

//Flags used by the linker during the creation of shared libraries
// during MINSIZEREL builds.
CMAKE_SHARED_LINKER_FLAGS_MINSIZEREL:STRING=/INCREMENTAL:NO

CMAKE_SHARED_LINKER_FLAGS_RELEASE:STRING='/nologo /DEBUG /INCREMENTAL:NO /OPT:REF /OPT:ICF  '

//Flags used by the linker during the creation of shared libraries
// during RELWITHDEBINFO builds.
CMAKE_SHARED_LINKER_FLAGS_RELWITHDEBINFO:STRING=/debug /INCREMENTAL

//If set, runtime paths are not added when installing shared libraries,
// but are added when building.
CMAKE_SKIP_INSTALL_RPATH:BOOL=NO

//If set, runtime paths are not added when using shared libraries.
CMAKE_SKIP_RPATH:BOOL=NO

//Flags used by the linker during the creation of static libraries
// during all build types.
CMAKE_STATIC_LINKER_FLAGS:STRING=/machine:x64

//Flags used by the linker during the creation of static libraries
// during DEBUG builds.
CMAKE_STATIC_LINKER_FLAGS_DEBUG:STRING=/nologo

//Flags used by the linker during the creation of static libraries
// during MINSIZEREL builds.
CMAKE_STATIC_LINKER_FLAGS_MINSIZEREL:STRING=

//Flags used by the linker during the creation of static libraries
// during RELEASE builds.
CMAKE_STATIC_LINKER_FLAGS_RELEASE:STRING=/nologo

//Flags used by the linker during the creation of static libraries
// during RELWITHDEBINFO builds.
CMAKE_STATIC_LINKER_FLAGS_RELWITHDEBINFO:STRING=

CMAKE_SYSTEM_NAME:STRING=Windows

CMAKE_SYSTEM_PROCESSOR:STRING=AMD64

CMAKE_SYSTEM_VERSION:STRING=10.0.22631

//The CMake toolchain file
CMAKE_TOOLCHAIN_FILE:FILEPATH=D:/repos/vcpkg/scripts/buildsystems/vcpkg.cmake

//If this value is on, makefiles will be generated without the
// .SILENT directive, and all commands will be echoed to the console
// during the make.  This is useful for debugging only. With Visual
// Studio IDE projects all commands are done without /nologo.
CMAKE_VERBOSE_MAKEFILE:BOOL=ON

//No help, variable specified on the command line.
FETCHCONTENT_FULLY_DISCONNECTED:UNINITIALIZED=ON

//OpenGL library for win32
OPENGL_gl_LIBRARY:STRING=opengl32

//GLU library for win32
OPENGL_glu_LIBRARY:STRING=glu32

//Automatically copy dependencies into the output directory for
// executables.
VCPKG_APPLOCAL_DEPS:BOOL=OFF

//No help, variable specified on the command line.
VCPKG_CHAINLOAD_TOOLCHAIN_FILE:UNINITIALIZED=D:/repos/vcpkg/scripts/toolchains/windows.cmake

//No help, variable specified on the command line.
VCPKG_CRT_LINKAGE:UNINITIALIZED=dynamic

//No help, variable specified on the command line.
VCPKG_CXX_FLAGS:UNINITIALIZED=

//No help, variable specified on the command line.
VCPKG_CXX_FLAGS_DEBUG:UNINITIALIZED=

//No help, variable specified on the command line.
VCPKG_CXX_FLAGS_RELEASE:UNINITIALIZED=

//No help, variable specified on the command line.
VCPKG_C_FLAGS:UNINITIALIZED=

//No help, variable specified on the command line.
VCPKG_C_FLAGS_DEBUG:UNINITIALIZED=

//No help, variable specified on the command line.
VCPKG_C_FLAGS_RELEASE:UNINITIALIZED=

//The directory which contains the installed libraries for each
// triplet
VCPKG_INSTALLED_DIR:PATH=D:/repos/ImageRegion/vcpkg_installed

//No help, variable specified on the command line.
VCPKG_LINKER_FLAGS:UNINITIALIZED=

//No help, variable specified on the command line.
VCPKG_LINKER_FLAGS_DEBUG:UNINITIALIZED=

//No help, variable specified on the command line.
VCPKG_LINKER_FLAGS_RELEASE:UNINITIALIZED=

//The path to the vcpkg manifest directory.
VCPKG_MANIFEST_DIR:PATH=

//Use manifest mode, as opposed to classic mode.
VCPKG_MANIFEST_MODE:BOOL=OFF

//No help, variable specified on the command line.
VCPKG_PLATFORM_TOOLSET:UNINITIALIZED=v143

//Appends the vcpkg paths to CMAKE_PREFIX_PATH, CMAKE_LIBRARY_PATH
// and CMAKE_FIND_ROOT_PATH so that vcpkg libraries/packages are
// found after toolchain/system libraries/packages.
VCPKG_PREFER_SYSTEM_LIBS:BOOL=OFF

//Enable the setup of CMAKE_PROGRAM_PATH to vcpkg paths
VCPKG_SETUP_CMAKE_PROGRAM_PATH:BOOL=ON

//No help, variable specified on the command line.
VCPKG_SET_CHARSET_FLAG:UNINITIALIZED=ON

//No help, variable specified on the command line.
VCPKG_TARGET_ARCHITECTURE:UNINITIALIZED=x64

//Vcpkg target triplet (ex. x86-windows)
VCPKG_TARGET_TRIPLET:STRING=x64-windows

//Trace calls to find_package()
VCPKG_TRACE_FIND_PACKAGE:BOOL=OFF

//Enables messages from the VCPKG toolchain for debugging purposes.
VCPKG_VERBOSE:BOOL=OFF

//Bit trace mode (0=none, 1=bit, 2=bytes)
WEBP_BITTRACE:STRING=0

//Build animation utilities.
WEBP_BUILD_ANIM_UTILS:BOOL=OFF

//Build the cwebp command line tool.
WEBP_BUILD_CWEBP:BOOL=OFF

//Build the dwebp command line tool.
WEBP_BUILD_DWEBP:BOOL=OFF

//Build extras.
WEBP_BUILD_EXTRAS:BOOL=OFF

//Build the gif2webp conversion tool.
WEBP_BUILD_GIF2WEBP:BOOL=OFF

//Build the img2webp animation tool.
WEBP_BUILD_IMG2WEBP:BOOL=OFF

//Build the libwebpmux library.
WEBP_BUILD_LIBWEBPMUX:BOOL=ON

//Build the vwebp viewer tool.
WEBP_BUILD_VWEBP:BOOL=OFF

//Build the webpinfo command line tool.
WEBP_BUILD_WEBPINFO:BOOL=OFF

//Build the webpmux command line tool.
WEBP_BUILD_WEBPMUX:BOOL=OFF

//Emscripten build of webp.js.
WEBP_BUILD_WEBP_JS:BOOL=OFF

//Enable any SIMD optimization.
WEBP_ENABLE_SIMD:BOOL=ON

//Enable byte swap for 16 bit colorspaces.
WEBP_ENABLE_SWAP_16BIT_CSP:BOOL=OFF

//Add [[nodiscard]] to some functions.        CMake must be at
// least 3.21 to force C23
WEBP_ENABLE_WUNUSED_RESULT:BOOL=OFF

//Link using static libraries. If OFF, use dynamic libraries.
WEBP_LINK_STATIC:BOOL=OFF

//Enable near-lossless encoding
WEBP_NEAR_LOSSLESS:BOOL=ON

//Build Unicode executables.
WEBP_UNICODE:BOOL=ON

//Enable threading support
WEBP_USE_THREAD:BOOL=ON

//Value Computed by CMake
WebP_BINARY_DIR:STATIC=D:/repos/vcpkg/buildtrees/libwebp/x64-windows-dbg

//Value Computed by CMake
WebP_IS_TOP_LEVEL:STATIC=ON

//Value Computed by CMake
WebP_SOURCE_DIR:STATIC=D:/repos/vcpkg/buildtrees/libwebp/src/v1.4.0-3f90aab08d.clean

//(experimental) Automatically copy dependencies into the install
// target directory for executables. Requires CMake 3.14.
X_VCPKG_APPLOCAL_DEPS_INSTALL:BOOL=OFF

//(experimental) Add USES_TERMINAL to VCPKG_APPLOCAL_DEPS to force
// serialization.
X_VCPKG_APPLOCAL_DEPS_SERIALIZED:BOOL=OFF

//The directory which contains the installed libraries for each
// triplet
_VCPKG_INSTALLED_DIR:PATH=D:/repos/ImageRegion/vcpkg_installed

//No help, variable specified on the command line.
_VCPKG_ROOT_DIR:UNINITIALIZED=D:/repos/vcpkg

//Dependencies for the target
libwebpmux_LIB_DEPENDS:STATIC=general;webp;

//Dependencies for the target
webp_LIB_DEPENDS:STATIC=general;sharpyuv;general;shlwapi;general;ole32;general;windowscodecs;

//Dependencies for the target
webpdecoder_LIB_DEPENDS:STATIC=general;shlwapi;general;ole32;general;windowscodecs;

//Dependencies for the target
webpdemux_LIB_DEPENDS:STATIC=general;webp;


########################
# INTERNAL cache entries
########################

//ADVANCED property for variable: CMAKE_AR
CMAKE_AR-ADVANCED:INTERNAL=1
//This is the directory where this CMakeCache.txt was created
CMAKE_CACHEFILE_DIR:INTERNAL=d:/repos/vcpkg/buildtrees/libwebp/x64-windows-dbg
//Major version of cmake used to create the current loaded cache
CMAKE_CACHE_MAJOR_VERSION:INTERNAL=3
//Minor version of cmake used to create the current loaded cache
CMAKE_CACHE_MINOR_VERSION:INTERNAL=30
//Patch version of cmake used to create the current loaded cache
CMAKE_CACHE_PATCH_VERSION:INTERNAL=1
//Path to CMake executable.
CMAKE_COMMAND:INTERNAL=D:/repos/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/bin/cmake.exe
//Path to cpack program executable.
CMAKE_CPACK_COMMAND:INTERNAL=D:/repos/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/bin/cpack.exe
//Path to ctest program executable.
CMAKE_CTEST_COMMAND:INTERNAL=D:/repos/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/bin/ctest.exe
//ADVANCED property for variable: CMAKE_C_COMPILER
CMAKE_C_COMPILER-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_FLAGS
CMAKE_C_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_FLAGS_DEBUG
CMAKE_C_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_FLAGS_MINSIZEREL
CMAKE_C_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_FLAGS_RELEASE
CMAKE_C_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_FLAGS_RELWITHDEBINFO
CMAKE_C_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_STANDARD_LIBRARIES
CMAKE_C_STANDARD_LIBRARIES-ADVANCED:INTERNAL=1
//Path to cache edit program executable.
CMAKE_EDIT_COMMAND:INTERNAL=D:/repos/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/bin/cmake-gui.exe
//Executable file format
CMAKE_EXECUTABLE_FORMAT:INTERNAL=Unknown
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS
CMAKE_EXE_LINKER_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS_DEBUG
CMAKE_EXE_LINKER_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS_MINSIZEREL
CMAKE_EXE_LINKER_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS_RELEASE
CMAKE_EXE_LINKER_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO
CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXPORT_COMPILE_COMMANDS
CMAKE_EXPORT_COMPILE_COMMANDS-ADVANCED:INTERNAL=1
//Name of external makefile project generator.
CMAKE_EXTRA_GENERATOR:INTERNAL=
//Name of generator.
CMAKE_GENERATOR:INTERNAL=Ninja
//Generator instance identifier.
CMAKE_GENERATOR_INSTANCE:INTERNAL=
//Name of generator platform.
CMAKE_GENERATOR_PLATFORM:INTERNAL=
//Name of generator toolset.
CMAKE_GENERATOR_TOOLSET:INTERNAL=
//Test CMAKE_HAVE_LIBC_PTHREAD
CMAKE_HAVE_LIBC_PTHREAD:INTERNAL=
//Have library pthreads
CMAKE_HAVE_PTHREADS_CREATE:INTERNAL=
//Have library pthread
CMAKE_HAVE_PTHREAD_CREATE:INTERNAL=
//Source directory with the top level CMakeLists.txt file for this
// project
CMAKE_HOME_DIRECTORY:INTERNAL=D:/repos/vcpkg/buildtrees/libwebp/src/v1.4.0-3f90aab08d.clean
//ADVANCED property for variable: CMAKE_INSTALL_BINDIR
CMAKE_INSTALL_BINDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_DATADIR
CMAKE_INSTALL_DATADIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_DATAROOTDIR
CMAKE_INSTALL_DATAROOTDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_DOCDIR
CMAKE_INSTALL_DOCDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_INCLUDEDIR
CMAKE_INSTALL_INCLUDEDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_INFODIR
CMAKE_INSTALL_INFODIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_LIBDIR
CMAKE_INSTALL_LIBDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_LIBEXECDIR
CMAKE_INSTALL_LIBEXECDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_LOCALEDIR
CMAKE_INSTALL_LOCALEDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_LOCALSTATEDIR
CMAKE_INSTALL_LOCALSTATEDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_MANDIR
CMAKE_INSTALL_MANDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_OLDINCLUDEDIR
CMAKE_INSTALL_OLDINCLUDEDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_RUNSTATEDIR
CMAKE_INSTALL_RUNSTATEDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_SBINDIR
CMAKE_INSTALL_SBINDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_SHAREDSTATEDIR
CMAKE_INSTALL_SHAREDSTATEDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_SYSCONFDIR
CMAKE_INSTALL_SYSCONFDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_LINKER
CMAKE_LINKER-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS
CMAKE_MODULE_LINKER_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS_DEBUG
CMAKE_MODULE_LINKER_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS_MINSIZEREL
CMAKE_MODULE_LINKER_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS_RELEASE
CMAKE_MODULE_LINKER_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS_RELWITHDEBINFO
CMAKE_MODULE_LINKER_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MT
CMAKE_MT-ADVANCED:INTERNAL=1
//number of local generators
CMAKE_NUMBER_OF_MAKEFILES:INTERNAL=1
//Platform information initialized
CMAKE_PLATFORM_INFO_INITIALIZED:INTERNAL=1
//noop for ranlib
CMAKE_RANLIB:INTERNAL=:
//ADVANCED property for variable: CMAKE_RC_COMPILER
CMAKE_RC_COMPILER-ADVANCED:INTERNAL=1
CMAKE_RC_COMPILER_WORKS:INTERNAL=1
//ADVANCED property for variable: CMAKE_RC_FLAGS
CMAKE_RC_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_RC_FLAGS_DEBUG
CMAKE_RC_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_RC_FLAGS_MINSIZEREL
CMAKE_RC_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_RC_FLAGS_RELEASE
CMAKE_RC_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_RC_FLAGS_RELWITHDEBINFO
CMAKE_RC_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//Path to CMake installation.
CMAKE_ROOT:INTERNAL=D:/repos/vcpkg/downloads/tools/cmake-3.30.1-windows/cmake-3.30.1-windows-i386/share/cmake-3.30
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS
CMAKE_SHARED_LINKER_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS_DEBUG
CMAKE_SHARED_LINKER_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS_MINSIZEREL
CMAKE_SHARED_LINKER_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS_RELEASE
CMAKE_SHARED_LINKER_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS_RELWITHDEBINFO
CMAKE_SHARED_LINKER_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SKIP_INSTALL_RPATH
CMAKE_SKIP_INSTALL_RPATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SKIP_RPATH
CMAKE_SKIP_RPATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS
CMAKE_STATIC_LINKER_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS_DEBUG
CMAKE_STATIC_LINKER_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS_MINSIZEREL
CMAKE_STATIC_LINKER_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS_RELEASE
CMAKE_STATIC_LINKER_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS_RELWITHDEBINFO
CMAKE_STATIC_LINKER_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_TOOLCHAIN_FILE
CMAKE_TOOLCHAIN_FILE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_VERBOSE_MAKEFILE
CMAKE_VERBOSE_MAKEFILE-ADVANCED:INTERNAL=1
//Details about finding OpenGL
FIND_PACKAGE_MESSAGE_DETAILS_OpenGL:INTERNAL=[opengl32][c ][v()]
//Details about finding Threads
FIND_PACKAGE_MESSAGE_DETAILS_Threads:INTERNAL=[TRUE][v()]
//Test HAVE_BUILTIN_BSWAP16
HAVE_BUILTIN_BSWAP16:INTERNAL=
//Test HAVE_BUILTIN_BSWAP32
HAVE_BUILTIN_BSWAP32:INTERNAL=
//Test HAVE_BUILTIN_BSWAP64
HAVE_BUILTIN_BSWAP64:INTERNAL=
//Have includes GLUT/glut.h
HAVE_GLUT_GLUT_H:INTERNAL=
//Have includes GL/glut.h
HAVE_GL_GLUT_H:INTERNAL=
//Test HAVE_MATH_LIBRARY
HAVE_MATH_LIBRARY:INTERNAL=1
//Have includes OpenGL/glut.h
HAVE_OPENGL_GLUT_H:INTERNAL=
//Have include shlwapi.h
HAVE_SHLWAPI_H:INTERNAL=1
//Have includes unistd.h
HAVE_UNISTD_H:INTERNAL=
//Have include wincodec.h
HAVE_WINCODEC_H:INTERNAL=1
//Have include windows.h
HAVE_WINDOWS_H:INTERNAL=1
//ADVANCED property for variable: OPENGL_gl_LIBRARY
OPENGL_gl_LIBRARY-ADVANCED:INTERNAL=1
//ADVANCED property for variable: OPENGL_glu_LIBRARY
OPENGL_glu_LIBRARY-ADVANCED:INTERNAL=1
//Install the dependencies listed in your manifest:
//\n    If this is off, you will have to manually install your dependencies.
//\n    See https://github.com/microsoft/vcpkg/tree/master/docs/specifications/manifests.md
// for more info.
//\n
VCPKG_MANIFEST_INSTALL:INTERNAL=OFF
//ADVANCED property for variable: VCPKG_VERBOSE
VCPKG_VERBOSE-ADVANCED:INTERNAL=1
//STRINGS property for variable: WEBP_BITTRACE
WEBP_BITTRACE-STRINGS:INTERNAL=0;1;2
//Test WEBP_HAVE_FLAG_MIPS32
WEBP_HAVE_FLAG_MIPS32:INTERNAL=
//Test WEBP_HAVE_FLAG_MIPS_DSP_R2
WEBP_HAVE_FLAG_MIPS_DSP_R2:INTERNAL=
//Test WEBP_HAVE_FLAG_MSA
WEBP_HAVE_FLAG_MSA:INTERNAL=
//Test WEBP_HAVE_FLAG_NEON
WEBP_HAVE_FLAG_NEON:INTERNAL=
//Test WEBP_HAVE_FLAG_SSE2
WEBP_HAVE_FLAG_SSE2:INTERNAL=1
//Test WEBP_HAVE_FLAG_SSE41
WEBP_HAVE_FLAG_SSE41:INTERNAL=1
//Making sure VCPKG_MANIFEST_MODE doesn't change
Z_VCPKG_CHECK_MANIFEST_MODE:INTERNAL=OFF
//Vcpkg root directory
Z_VCPKG_ROOT_DIR:INTERNAL=D:/repos/vcpkg
//CMAKE_INSTALL_PREFIX during last run
_GNUInstallDirs_LAST_CMAKE_INSTALL_PREFIX:INTERNAL=D:/repos/vcpkg/packages/libwebp_x64-windows/debug

```
</details>

**Additional context**

<details><summary>vcpkg.json</summary>

```
{
  "dependencies": [
    "opencv4",
    "fmt"
  ]
}

```
</details>
