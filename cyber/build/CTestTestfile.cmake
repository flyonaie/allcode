# CMake generated Testfile for 
# Source directory: /mnt/hgfs/share/github/allcode/cyber
# Build directory: /mnt/hgfs/share/github/allcode/cyber/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_hello "/mnt/hgfs/share/github/allcode/cyber/build/test_hello")
set_tests_properties(test_hello PROPERTIES  _BACKTRACE_TRIPLES "/mnt/hgfs/share/github/allcode/cyber/CMakeLists.txt;64;add_test;/mnt/hgfs/share/github/allcode/cyber/CMakeLists.txt;0;")
add_test(test_world "/mnt/hgfs/share/github/allcode/cyber/build/test_world")
set_tests_properties(test_world PROPERTIES  _BACKTRACE_TRIPLES "/mnt/hgfs/share/github/allcode/cyber/CMakeLists.txt;65;add_test;/mnt/hgfs/share/github/allcode/cyber/CMakeLists.txt;0;")
add_test(test_helloworld "/mnt/hgfs/share/github/allcode/cyber/build/test_helloworld")
set_tests_properties(test_helloworld PROPERTIES  _BACKTRACE_TRIPLES "/mnt/hgfs/share/github/allcode/cyber/CMakeLists.txt;66;add_test;/mnt/hgfs/share/github/allcode/cyber/CMakeLists.txt;0;")
add_test(test_atomic_hash_map "/mnt/hgfs/share/github/allcode/cyber/build/test_atomic_hash_map")
set_tests_properties(test_atomic_hash_map PROPERTIES  _BACKTRACE_TRIPLES "/mnt/hgfs/share/github/allcode/cyber/CMakeLists.txt;70;add_test;/mnt/hgfs/share/github/allcode/cyber/CMakeLists.txt;0;")
add_test(test_atomic_hash_map1 "/mnt/hgfs/share/github/allcode/cyber/build/test_atomic_hash_map1")
set_tests_properties(test_atomic_hash_map1 PROPERTIES  _BACKTRACE_TRIPLES "/mnt/hgfs/share/github/allcode/cyber/CMakeLists.txt;74;add_test;/mnt/hgfs/share/github/allcode/cyber/CMakeLists.txt;0;")
add_test(test_unbounded_queue "/mnt/hgfs/share/github/allcode/cyber/build/test_unbounded_queue")
set_tests_properties(test_unbounded_queue PROPERTIES  _BACKTRACE_TRIPLES "/mnt/hgfs/share/github/allcode/cyber/CMakeLists.txt;82;add_test;/mnt/hgfs/share/github/allcode/cyber/CMakeLists.txt;0;")
add_test(test_atomic_rw_lock "/mnt/hgfs/share/github/allcode/cyber/build/test_atomic_rw_lock")
set_tests_properties(test_atomic_rw_lock PROPERTIES  _BACKTRACE_TRIPLES "/mnt/hgfs/share/github/allcode/cyber/CMakeLists.txt;86;add_test;/mnt/hgfs/share/github/allcode/cyber/CMakeLists.txt;0;")
add_test(test_bounded_queue "/mnt/hgfs/share/github/allcode/cyber/build/test_bounded_queue")
set_tests_properties(test_bounded_queue PROPERTIES  _BACKTRACE_TRIPLES "/mnt/hgfs/share/github/allcode/cyber/CMakeLists.txt;90;add_test;/mnt/hgfs/share/github/allcode/cyber/CMakeLists.txt;0;")
add_test(test_for_each "/mnt/hgfs/share/github/allcode/cyber/build/test_for_each")
set_tests_properties(test_for_each PROPERTIES  _BACKTRACE_TRIPLES "/mnt/hgfs/share/github/allcode/cyber/CMakeLists.txt;94;add_test;/mnt/hgfs/share/github/allcode/cyber/CMakeLists.txt;0;")
subdirs("third_party/googletest-release-1.10.0")
