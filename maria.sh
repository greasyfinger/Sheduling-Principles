#! /bin/bash   
cd ..
cd physc_lab/linux-5.19.9
make -j$(nproc)
make modules
make modules_install