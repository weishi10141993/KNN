#!/usr/bin/expect -f

set timeout 86400
set pass "YOURPASS"
set gridpass "YOUR"
set nkNN [list 2 3 4 5 6 7 8 9 10 15 20 25 30 35 40 45]
set ScaleFrac [list 0.1 0.2 0.3 0.4 0.5 0.6 0.7 0.8 0.9]
################
spawn ssh -X -Y wshi@lxplus.cern.ch
expect "Password: "
send "$pass\r"
expect "$ "
send "tmux\r"
expect "$ "
send "cd /afs/cern.ch/work/w/wshi/public/TMVA_2017/TMVA/EMTFPtAssign2017/KNN/mode_14/unweighted/dPhis_theta_dTh13_2_inv_pT\r"
expect "$ "
send "source /afs/cern.ch/sw/lcg/app/releases/ROOT-externals/ROOT-latest/x86_64-slc6-gcc49-opt/setup.sh\r"
expect "$ "
send "source /afs/cern.ch/work/w/wshi/public/TMVA_2017/ROOT/bin/thisroot.sh\r"
expect "$ "


for { set i 0 } { $i < [llength $nkNN] } { incr i } {

set NKNN [lindex $nkNN $i]

send "sed -i '29s/PtRegression_v0_KNN_k_1/PtRegression_v0_KNN_k_$NKNN/' ReadMVAOut_KNN.C\r"
expect "$ "
send "root -l -q ReadMVAOut_KNN.C >& Standard_Deviation_k_$NKNN\.log &\r"
expect "$ "
sleep 30
send "sed -i '29s/PtRegression_v0_KNN_k_$NKNN/PtRegression_v0_KNN_k_1/' ReadMVAOut_KNN.C\r"
expect "$ "
send "mv Output_v0_KNN.root Output_v0_KNN_k_$NKNN\.root\r"

expect "$ "
send "date >> TMVA_KNN.log\r"
expect "$ "
send "echo \'User, nkNN : \' >> TMVA_KNN.log \r"
expect "$ "
send "echo \'wshi, $NKNN  \' >> TMVA_KNN.log \r"
expect "$ "
send "echo \'\\n\' >> TMVA_KNN.log \r"
expect "$ "
}

send "exit\r"
expect "$ "
