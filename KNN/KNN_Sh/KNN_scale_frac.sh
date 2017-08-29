#!/usr/bin/expect -f

set timeout 86400
set pass "YOURPASSWORD"
set ScaleFrac [list 0.64 0.63 0.62 0.61]
set SCALEFRAC [list 0p64 0p63 0p62 0p61]
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


for { set i 0 } { $i < [llength $ScaleFrac] } { incr i } {

set SCALE [lindex $ScaleFrac $i]
set SCALEF [lindex $SCALEFRAC $i]

send "sed -i '596s/ScaleFrac=0.8/ScaleFrac=$SCALE/' PtRegression_v0_KNN.C\r"
expect "$ "
send "root -l -q PtRegression_v0_KNN.C\r"
expect "$ "
sleep 3
send "root -l -q ReadMVAOut_KNN.C >& Standard_Deviation_$SCALEF\_Scale.log &\r"
expect "$ "
sleep 40
send "sed -i '596s/ScaleFrac=$SCALE/ScaleFrac=0.8/' PtRegression_v0_KNN.C\r"
expect "$ "
send "mv PtRegression_v0_KNN.root PtRegression_v0_KNN_$SCALEF\_Scale.root\r"
expect "$ "
send "mv Output_v0_KNN.root Output_v0_KNN_$SCALEF\_Scale.root\r"

expect "$ "
send "date >> TMVA_KNN.log\r"
expect "$ "
send "echo \'User, ScaleFrac : \' >> TMVA_KNN.log \r"
expect "$ "
send "echo \'wshi, $SCALE  \' >> TMVA_KNN.log \r"
expect "$ "
send "echo \'\\n\' >> TMVA_KNN.log \r"
expect "$ "
}

send "exit\r"
expect "$ "
