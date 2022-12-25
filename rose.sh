#! /bin/bash   
cd ..
cd chem_lab/linux-5.19.9
make -j$(nproc)
make modules
make modules_install