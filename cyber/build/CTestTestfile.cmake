# CMake generated Testfile for 
# Source directory: /mnt/hgfs/share/github/allcode/cyber
# Build directory: /mnt/hgfs/share/github/allcode/cyber/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_hello "/mnt/hgfs/share/github/allcode/cyber/build/test_hello")
set_tests_properties(test_hello PROPERTIES  _BACKTRACE_TRIPLES "/mnt/hgfs/share/github/allcode/cyber/CMakeLists.txt;59;add_test;/mnt/hgfs/share/github/allcode/cyber/CMakeLists.txt;0;")
add_test(test_atomic_hash_map "/mnt/hgfs/share/github/allcode/cyber/build/test_atomic_hash_map")
set_tests_properties(test_atomic_hash_map PROPERTIES  _BACKTRACE_TRIPLES "/mnt/hgfs/share/github/allcode/cyber/CMakeLists.txt;63;add_test;/mnt/hgfs/share/github/allcode/cyber/CMakeLists.txt;0;")
add_test(test_atomic_hash_map1 "/mnt/hgfs/share/github/allcode/cyber/build/test_atomic_hash_map1")
set_tests_properties(test_atomic_hash_map1 PROPERTIES  _BACKTRACE_TRIPLES "/mnt/hgfs/share/github/allcode/cyber/CMakeLists.txt;67;add_test;/mnt/hgfs/share/github/allcode/cyber/CMakeLists.txt;0;")
add_test(test_signal "/mnt/hgfs/share/github/allcode/cyber/build/test_signal")
set_tests_properties(test_signal PROPERTIES  _BACKTRACE_TRIPLES "/mnt/hgfs/share/github/allcode/cyber/CMakeLists.txt;71;add_test;/mnt/hgfs/share/github/allcode/cyber/CMakeLists.txt;0;")
subdirs("third_party/googletest-release-1.10.0")
