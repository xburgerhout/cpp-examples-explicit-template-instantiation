build_dir=../debug

case0_dir=${build_dir}/case0/CMakeFiles/case0_simple_template_class.dir
case1_dir=${build_dir}/case1/CMakeFiles/case1_extern_template_class.dir
case2_dir=${build_dir}/case2/CMakeFiles/case2_simple_template_member_method.dir
case3_dir=${build_dir}/case3/CMakeFiles/case3_extern_template_member_method.dir

echo "========= case 0 =========="
nm -g -C -A ${case0_dir}/*.o | sed -e 's|.*/||' | grep MyClass

echo "========= case 1 =========="
nm -g -C -A ${case1_dir}/*.o | sed -e 's|.*/||' | grep MyClass

echo "========= case 2 =========="
nm -g -C -A ${case2_dir}/*.o | sed -e 's|.*/||' | grep 'MyClass::addValue'

echo "========= case 3 =========="
nm -g -C -A ${case3_dir}/*.o | sed -e 's|.*/||' | grep 'MyClass::addValue'

