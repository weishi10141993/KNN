#!/usr/bin/expect -f

set timeout 86400
set pass "**********"
set nkNN [list 1 2 3 4 5 6 7 8 9 10]
set ScaleFrac [list 0.1 0.2 0.3 0.4 0.5 0.6 0.7 0.8 0.9]
################
spawn ssh -X -Y ws13@bonner01
expect "ws13@bonner01's password: "
send "$pass\r"
expect "$ "
send "screen\r"
expect "$ "
send "cd /home/ws13/TMVA/TMVA/EMTFPtAssign2017\r"
expect "$ "
send "scl enable devtoolset-4 python27 bash\r"
expect "$ "
send "source /cvmfs/sft.cern.ch/lcg/contrib/gcc/4.9/x86_64-slc6/setup.sh\r"
expect "$ "
send "source /home/ws13/TMVA/ROOT/bin/thisroot.sh\r"
expect "$ "


for { set i 0 } { $i < [llength $nkNN] } { incr i } {

set NKNN [lindex $nkNN $i]

send "sed -i '596s/nkNN=10/nkNN=$NKNN/' PtRegression_v0_KNN.C\r"
expect "$ "
send "root -l -q PtRegression_v0_KNN.C\r"
expect "$ "
sleep 3
send "root -l -q ReadMVAOut_KNN.C >& Standard_Deviation_k_$NKNN\.log &\r"
expect "$ "
sleep 20
send "sed -i '596s/nkNN=$NKNN/nkNN=10/' PtRegression_v0_KNN.C\r"
expect "$ "
send "mv PtRegression_v0_KNN.root PtRegression_v0_KNN_k_$NKNN\.root\r"
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
