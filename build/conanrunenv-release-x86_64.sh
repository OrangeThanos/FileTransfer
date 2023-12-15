script_folder="/home/stanislau/filetransfer/build"
echo "echo Restoring environment" > "$script_folder/deactivate_conanrunenv-release-x86_64.sh"
for v in GRPC_DEFAULT_SSL_ROOTS_FILE_PATH OPENSSL_MODULES PATH LD_LIBRARY_PATH DYLD_LIBRARY_PATH
do
    is_defined="true"
    value=$(printenv $v) || is_defined="" || true
    if [ -n "$value" ] || [ -n "$is_defined" ]
    then
        echo export "$v='$value'" >> "$script_folder/deactivate_conanrunenv-release-x86_64.sh"
    else
        echo unset $v >> "$script_folder/deactivate_conanrunenv-release-x86_64.sh"
    fi
done


export GRPC_DEFAULT_SSL_ROOTS_FILE_PATH="/home/stanislau/.conan2/p/b/grpc0015deb0ad245/p/res/grpc/roots.pem"
export OPENSSL_MODULES="/home/stanislau/.conan2/p/b/opensb2bff77582128/p/lib/ossl-modules"
export PATH="/home/stanislau/.conan2/p/b/protoc2b58b5bcfec4/p/bin:$PATH"
export LD_LIBRARY_PATH="/home/stanislau/.conan2/p/b/protoc2b58b5bcfec4/p/lib:$LD_LIBRARY_PATH"
export DYLD_LIBRARY_PATH="/home/stanislau/.conan2/p/b/protoc2b58b5bcfec4/p/lib:$DYLD_LIBRARY_PATH"