#!/usr/bin/expect -f

set timeout 86400
set pass "{1dfKMhh"
set nkNN [list 450 550]
################
spawn ssh -X -Y wshi@lxplus.cern.ch
expect "Password: "
send "$pass\r"
expect "$ "
send "tmux\r"
expect "$ "
send "cd /afs/cern.ch/work/w/wshi/public/TMVA_2017/TMVA/EMTFPtAssign2017\r"
expect "$ "
send "source /afs/cern.ch/sw/lcg/app/releases/ROOT-externals/ROOT-latest/x86_64-slc6-gcc49-opt/setup.sh\r"
expect "$ "
send "source /afs/cern.ch/work/w/wshi/public/TMVA_2017/ROOT/bin/thisroot.sh\r"
expect "$ "


for { set i 0 } { $i < [llength $nkNN] } { incr i } {

set NKNN [lindex $nkNN $i]

send "sed -i '31s/PtRegression_v1_KNN_k_4.root/PtRegression_v1_KNN_k_$NKNN\.root/' ReadMVAOut_v1_KNN.C\r"
expect "$ "
send "root -l -q ReadMVAOut_v1_KNN.C\r"
expect "$ "
sleep 4
send "sed -i '31s/PtRegression_v1_KNN_k_$NKNN\.root/PtRegression_v1_KNN_k_4.root/' ReadMVAOut_v1_KNN.C\r"
expect "$ "
sleep 4
send "mv Output_v1_KNN.root Output_v1_KNN_k_$NKNN\.root\r"

expect "$ "
send "date >> TMVA_KNN_Read.log\r"
expect "$ "
send "echo \'User, nkNN : \' >> TMVA_KNN_Read.log \r"
expect "$ "
send "echo \'wshi, $NKNN  \' >> TMVA_KNN_Read.log \r"
expect "$ "
send "echo \'\\n\' >> TMVA_KNN_Read.log \r"
expect "$ "
}

send "exit\r"
expect "$ "
