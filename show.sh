build_dir=../debug

case0_dir=${build_dir}/case0/CMakeFiles/case0*.dir
case1_dir=${build_dir}/case1/CMakeFiles/case1*.dir
case2_dir=${build_dir}/case2/CMakeFiles/case2*.dir
case3_dir=${build_dir}/case3/CMakeFiles/case3*.dir
case4_dir=${build_dir}/case4/CMakeFiles/case4*.dir
case4_libexe=${build_dir}/case4/*case4*
case5_dir=${build_dir}/case5/CMakeFiles/case5*.dir
case5_libexe=${build_dir}/case5/*case5*

echo "========= case 0 =========="
nm -g -C -A ${case0_dir}/*.o | sed -e 's|.*/||' | grep MyClass

echo "========= case 1 =========="
nm -g -C -A ${case1_dir}/*.o | sed -e 's|.*/||' | grep MyClass

echo "========= case 2 =========="
nm -g -C -A ${case2_dir}/*.o | sed -e 's|.*/||' | grep 'MyClass::addValue'

echo "========= case 3 =========="
nm -g -C -A ${case3_dir}/*.o | sed -e 's|.*/||' | grep 'MyClass::addValue'

echo "========= case 4 =========="
nm -g -C -A ${case4_dir}/*.o ${case4_libexe} | sed -e 's|.*/||' | grep 'MyClass::addValue'

echo "========= case 5 =========="
nm -g -C -A ${case5_dir}/*.o ${case5_libexe} | sed -e 's|.*/||' | grep 'MyClass::addValue'

