# CMake generated Testfile for 
# Source directory: /mnt/hgfs/share/github/gtestdemo
# Build directory: /mnt/hgfs/share/github/gtestdemo/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_hello "/mnt/hgfs/share/github/gtestdemo/build/test_hello")
set_tests_properties(test_hello PROPERTIES  _BACKTRACE_TRIPLES "/mnt/hgfs/share/github/gtestdemo/CMakeLists.txt;57;add_test;/mnt/hgfs/share/github/gtestdemo/CMakeLists.txt;0;")
add_test(test_my_gtest_demo_1 "/mnt/hgfs/share/github/gtestdemo/build/test_my_gtest_demo_1")
set_tests_properties(test_my_gtest_demo_1 PROPERTIES  _BACKTRACE_TRIPLES "/mnt/hgfs/share/github/gtestdemo/CMakeLists.txt;58;add_test;/mnt/hgfs/share/github/gtestdemo/CMakeLists.txt;0;")
subdirs("third_party/googletest-release-1.10.0")
