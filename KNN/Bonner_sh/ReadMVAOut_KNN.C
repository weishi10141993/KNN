
/////////////////////////////////////////////////////////
///          Macro to compute Deviation               ///
///            Andrew Brinkerhoff 10.12.16            ///
///   Wei Shi revised, add pT and trigger efficiency  ///
/////////////////////////////////////////////////////////

#include "TFile.h"
#include "TSystem.h"
#include "TChain.h"
#include "TTree.h"
#include "TBranch.h"
#include "TH1.h"
#include "TH2.h"
#include "TCanvas.h"
#include <vector>
#include "stdio.h"
#include "math.h"
#include "TMath.h"
#include "TGraph.h"

void ReadMVAOut_KNN() {

  // Initialize empty file to access each file in the list
  TFile *file_tmp(0);

  // List of input files
  std::vector<TString> in_file_names;
  in_file_names.push_back("/home/ws13/TMVA/TMVA/EMTFPtAssign2017/PtRegression_v0_KNN.root");

  // Open all input files
  for (UInt_t i = 0; i < in_file_names.size(); i++) {
    if ( !gSystem->AccessPathName(in_file_names.at(i)) )
      file_tmp = TFile::Open( in_file_names.at(i) ); // Check if file exists
    if (!file_tmp) {
      std::cout << "ERROR: could not open data file " << in_file_names.at(i) << std::endl;
      return;
    }
  }

  // Add trees from the input files to the TChain
  TChain *train_chain = new TChain("dataset/TrainTree");
  TChain *test_chain = new TChain("dataset/TestTree");
  for (UInt_t i = 0; i < in_file_names.size(); i++) {
    train_chain->Add( in_file_names.at(i) );
    test_chain->Add( in_file_names.at(i) );
  }

    //trigger cut
    double trigger_Cut_1 = 8;
    double trigger_Cut_2 = 16;
    double trigger_Cut_3 = 24;
    
    //bins for trigger efficiency
    double trigger[34]={1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,36,41,46,51,56,61,66,71,76,81,86,91,96,101,106,111,116,121};
    double count[33]={0};//total count in each bin
    
    double pass_count_1[33]={0};//KNN predict
    double EMTF_pass_count_1[33]={0};//current EMTF
    double efficiency_1[33]={0};//KNN efficiency
    double EMTF_efficiency_1[33]={0};//EMTF efficiency
    
    double pass_count_2[33]={0};//KNN predict
    double EMTF_pass_count_2[33]={0};//current EMTF
    double efficiency_2[33]={0};//KNN efficiency
    double EMTF_efficiency_2[33]={0};//EMTF efficiency
    
    double pass_count_3[33]={0};//KNN predict
    double EMTF_pass_count_3[33]={0};//current EMTF
    double efficiency_3[33]={0};//KNN efficiency
    double EMTF_efficiency_3[33]={0};//EMTF efficiency
    
  // Get branches from the chains
    Long64_t train_events=0;
    Long64_t train_events_1_8=0;
    Long64_t train_events_8_30=0;
    Long64_t train_events_30_120=0;
    Long64_t train_events_120_1000=0;
    
    Long64_t test_events=0;
    Long64_t test_events_1_8=0;
    Long64_t test_events_8_30=0;
    Long64_t test_events_30_120=0;
    Long64_t test_events_120_1000=0;
    
    //KNN
    Double_t Deviation_test=0;
    Double_t Standard_Deviation_test=0;
    Double_t Deviation_train=0;
    Double_t Standard_Deviation_train=0;
    //1-8GeV
    Double_t Deviation_test_1_8=0;
    Double_t Standard_Deviation_test_1_8=0;
    Double_t Deviation_train_1_8=0;
    Double_t Standard_Deviation_train_1_8=0;
    //8-30GeV
    Double_t Deviation_test_8_30=0;
    Double_t Standard_Deviation_test_8_30=0;
    Double_t Deviation_train_8_30=0;
    Double_t Standard_Deviation_train_8_30=0;
    //30-120GeV
    Double_t Deviation_test_30_120=0;
    Double_t Standard_Deviation_test_30_120=0;
    Double_t Deviation_train_30_120=0;
    Double_t Standard_Deviation_train_30_120=0;
    //120-1000GeV
    Double_t Deviation_test_120_1000=0;
    Double_t Standard_Deviation_test_120_1000=0;
    Double_t Deviation_train_120_1000=0;
    Double_t Standard_Deviation_train_120_1000=0;
    
    //EMTF SD for comparision
    Double_t EMTF_Deviation_test=0;
    Double_t EMTF_Standard_Deviation_test=0;
    Double_t EMTF_Deviation_train=0;
    Double_t EMTF_Standard_Deviation_train=0;
    
    Double_t EMTF_Deviation_test_1_8=0;
    Double_t EMTF_Standard_Deviation_test_1_8=0;
    Double_t EMTF_Deviation_train_1_8=0;
    Double_t EMTF_Standard_Deviation_train_1_8=0;
    
    Double_t EMTF_Deviation_test_8_30=0;
    Double_t EMTF_Standard_Deviation_test_8_30=0;
    Double_t EMTF_Deviation_train_8_30=0;
    Double_t EMTF_Standard_Deviation_train_8_30=0;
    
    Double_t EMTF_Deviation_test_30_120=0;
    Double_t EMTF_Standard_Deviation_test_30_120=0;
    Double_t EMTF_Deviation_train_30_120=0;
    Double_t EMTF_Standard_Deviation_train_30_120=0;
    
    Double_t EMTF_Deviation_test_120_1000=0;
    Double_t EMTF_Standard_Deviation_test_120_1000=0;
    Double_t EMTF_Deviation_train_120_1000=0;
    Double_t EMTF_Standard_Deviation_train_120_1000=0;
    
    Float_t dPhiSum3_train_br;
    Int_t FR_1_train_br;
    Float_t dTh_13_train_br;
    Int_t bend_1_train_br;
    Float_t theta_train_br;
    Float_t dPhi_12_train_br;
    Float_t dPhi_23_train_br;
    Float_t dPhi_34_train_br;
    Float_t EMTF_pt_train_br;
    Float_t GEN_pt_train_br;
    Float_t inv_EMTF_pt_train_br;
    Float_t inv_GEN_pt_train_br;
    Float_t KNN_train_br;
  
    Float_t dPhiSum3_test_br;
    Int_t FR_1_test_br;
    Float_t dTh_13_test_br;
    Int_t bend_1_test_br;
    Float_t theta_test_br;
    Float_t dPhi_12_test_br;
    Float_t dPhi_23_test_br;
    Float_t dPhi_34_test_br;
    Float_t EMTF_pt_test_br;
    Float_t GEN_pt_test_br;
    Float_t inv_EMTF_pt_test_br;
    Float_t inv_GEN_pt_test_br;
    Float_t KNN_test_br;
    
    //train
    train_chain->SetBranchAddress("dPhiSum3", &dPhiSum3_train_br);
    //train_chain->SetBranchAddress("FR_1", &FR_1_train_br);
    //train_chain->SetBranchAddress("dTh_13", &dTh_13_train_br);
    //train_chain->SetBranchAddress("bend_1", &bend_1_train_br);
    train_chain->SetBranchAddress("theta", &theta_train_br);
    train_chain->SetBranchAddress("dPhi_12", &dPhi_12_train_br);
    train_chain->SetBranchAddress("dPhi_23", &dPhi_23_train_br);
    //train_chain->SetBranchAddress("dPhi_34", &dPhi_34_train_br);
    train_chain->SetBranchAddress("EMTF_pt", &EMTF_pt_train_br);
    train_chain->SetBranchAddress("GEN_pt", &GEN_pt_train_br);
    train_chain->SetBranchAddress("inv_GEN_pt", &inv_GEN_pt_train_br);
    train_chain->SetBranchAddress("inv_EMTF_pt", &inv_EMTF_pt_train_br);
    train_chain->SetBranchAddress("KNN", &KNN_train_br);

    //test
    test_chain->SetBranchAddress("dPhiSum3", &dPhiSum3_test_br);
    //test_chain->SetBranchAddress("FR_1", &FR_1_test_br);
    //test_chain->SetBranchAddress("dTh_13", &dTh_13_test_br);
    //test_chain->SetBranchAddress("bend_1", &bend_1_test_br);
    test_chain->SetBranchAddress("theta", &theta_test_br);
    test_chain->SetBranchAddress("dPhi_12", &dPhi_12_test_br);
    test_chain->SetBranchAddress("dPhi_23", &dPhi_23_test_br);
    //test_chain->SetBranchAddress("dPhi_34", &dPhi_34_test_br);
    test_chain->SetBranchAddress("EMTF_pt", &EMTF_pt_test_br);
    test_chain->SetBranchAddress("GEN_pt", &GEN_pt_test_br);
    test_chain->SetBranchAddress("inv_EMTF_pt", &inv_EMTF_pt_test_br);
    test_chain->SetBranchAddress("inv_GEN_pt", &inv_GEN_pt_test_br);
    test_chain->SetBranchAddress("KNN", &KNN_test_br);
    
    //===================================================
    //book histograms for target/input for train sample
    //===================================================
    
    TH2F *Deviation_dPhiSum3_train = new TH2F("Deviation_dPhiSum3_train","Deviation vs dPhiSum3 train",30,-2,2,100,-0.1,0.1);
    TH2F *Deviation_FR_1_train = new TH2F("Deviation_FR_1_train","Deviation vs FR_1 train",3,-1,2,100,-0.1,0.1);
    TH2F *Deviation_dTh_13_train = new TH2F("Deviation_dTh_13_train","Deviation vs dTh_13 train",100,-10,10,100,-0.1,0.1);
    TH2F *Deviation_bend_1_train = new TH2F("Deviation_bend_1_train","Deviation vs bend_1 train",3,-1,2,100,-0.1,0.1);
    TH2F *Deviation_theta_train = new TH2F("Deviation_theta_train","Deviation vs theta train",100,0,90,100,-0.1,0.1);
    TH2F *Deviation_dPhi_12_train = new TH2F("Deviation_dPhi_12_train","Deviation vs dPhi_12 train",100,-4,4,100,-0.1,0.1);
    TH2F *Deviation_dPhi_23_train = new TH2F("Deviation_dPhi_23_train","Deviation vs dPhi_23 train",100,-4,4,100,-0.1,0.1);
    TH2F *Deviation_dPhi_34_train = new TH2F("Deviation_dPhi_34_train","Deviation vs dPhi_34 train",100,-4,4,100,-0.1,0.1);
    TH2F *Deviation_GEN_pt_train = new TH2F("Deviation_GEN_pt_train","Deviation vs GEN_pt train",100,0,1000,100,-0.1,0.1);
    TH2F *EMTF_Deviation_GEN_pt_train = new TH2F("EMTF_Deviation_GEN_pt_train","EMTF Deviation vs GEN_pt train",100,0,1000,100,-0.1,0.1);
    
    //for GEN pT: 1-8 GeV
    TH2F *Deviation_dPhiSum3_train_1_8 = new TH2F("Deviation_dPhiSum3_train_1_8","Deviation vs dPhiSum3 train 1<pT<=8 GeV",30,-2,2,100,-0.1,0.1);
    TH2F *Deviation_FR_1_train_1_8 = new TH2F("Deviation_FR_1_train_1_8","Deviation vs FR_1 train 1<pT<=8 GeV",3,-1,2,100,-0.1,0.1);
    TH2F *Deviation_dTh_13_train_1_8 = new TH2F("Deviation_dTh_13_train_1_8","Deviation vs dTh_13 train 1<pT<=8 GeV",100,-10,10,100,-0.1,0.1);
    TH2F *Deviation_bend_1_train_1_8 = new TH2F("Deviation_bend_1_train_1_8","Deviation vs bend_1 train 1<pT<=8 GeV",3,-1,2,100,-0.1,0.1);
    TH2F *Deviation_theta_train_1_8 = new TH2F("Deviation_theta_train_1_8","Deviation vs theta train 1<pT<=8 GeV",100,0,90,100,-0.1,0.1);
    TH2F *Deviation_dPhi_12_train_1_8 = new TH2F("Deviation_dPhi_12_train_1_8","Deviation vs dPhi_12 train 1<pT<=8 GeV",100,-4,4,100,-0.1,0.1);
    TH2F *Deviation_dPhi_23_train_1_8 = new TH2F("Deviation_dPhi_23_train_1_8","Deviation vs dPhi_23 train 1<pT<=8 GeV",100,-4,4,100,-0.1,0.1);
    TH2F *Deviation_dPhi_34_train_1_8 = new TH2F("Deviation_dPhi_34_train_1_8","Deviation vs dPhi_34 train 1<pT<=8 GeV",100,-4,4,100,-0.1,0.1);
    TH2F *Deviation_GEN_pt_train_1_8 = new TH2F("Deviation_GEN_pt_train_1_8","Deviation vs GEN_pt train 1<pT<=8 GeV",100,0,10,100,-0.1,0.1);
    TH2F *EMTF_Deviation_GEN_pt_train_1_8 = new TH2F("EMTF_Deviation_GEN_pt_train_1_8","EMTF Deviation vs GEN_pt train 1<pT<=8 GeV",100,0,10,100,-0.1,0.1);
    
    //for GEN pT: 8-30 GeV
    TH2F *Deviation_dPhiSum3_train_8_30 = new TH2F("Deviation_dPhiSum3_train_8_30","Deviation vs dPhiSum3 train 8<pT<=30 GeV",30,-2,2,100,-0.1,0.1);
    TH2F *Deviation_FR_1_train_8_30 = new TH2F("Deviation_FR_1_train_8_30","Deviation vs FR_1 train 8<pT<=30 GeV",3,-1,2,100,-0.1,0.1);
    TH2F *Deviation_dTh_13_train_8_30 = new TH2F("Deviation_dTh_13_train_8_30","Deviation vs dTh_13 train 8<pT<=30 GeV",100,-10,10,100,-0.1,0.1);
    TH2F *Deviation_bend_1_train_8_30 = new TH2F("Deviation_bend_1_train_8_30","Deviation vs bend_1 train 8<pT<=30 GeV",3,-1,2,100,-0.1,0.1);
    TH2F *Deviation_theta_train_8_30 = new TH2F("Deviation_theta_train_8_30","Deviation vs theta train 8<pT<=30 GeV",100,0,90,100,-0.1,0.1);
    TH2F *Deviation_dPhi_12_train_8_30 = new TH2F("Deviation_dPhi_12_train_8_30","Deviation vs dPhi_12 train 8<pT<=30 GeV",100,-4,4,100,-0.1,0.1);
    TH2F *Deviation_dPhi_23_train_8_30 = new TH2F("Deviation_dPhi_23_train_8_30","Deviation vs dPhi_23 train 8<pT<=30 GeV",100,-4,4,100,-0.1,0.1);
    TH2F *Deviation_dPhi_34_train_8_30 = new TH2F("Deviation_dPhi_34_train_8_30","Deviation vs dPhi_34 train 8<pT<=30 GeV",100,-4,4,100,-0.1,0.1);
    TH2F *Deviation_GEN_pt_train_8_30 = new TH2F("Deviation_GEN_pt_train_8_30","Deviation vs GEN_pt train 8<pT<=30 GeV",100,8,30,100,-0.1,0.1);
    TH2F *EMTF_Deviation_GEN_pt_train_8_30 = new TH2F("EMTF_Deviation_GEN_pt_train_8_30","EMTF Deviation vs GEN_pt train 8<pT<=30 GeV",100,8,30,100,-0.1,0.1);
    
    //for GEN pT: 30-120 GeV
    TH2F *Deviation_dPhiSum3_train_30_120 = new TH2F("Deviation_dPhiSum3_train_30_120","Deviation vs dPhiSum3 train 30<pT<=120 GeV",30,-2,2,100,-0.1,0.1);
    TH2F *Deviation_FR_1_train_30_120 = new TH2F("Deviation_FR_1_train_30_120","Deviation vs FR_1 train 30<pT<=120 GeV",3,-1,2,100,-0.1,0.1);
    TH2F *Deviation_dTh_13_train_30_120 = new TH2F("Deviation_dTh_13_train_30_120","Deviation vs dTh_13 train 30<pT<=120 GeV",100,-10,10,100,-0.1,0.1);
    TH2F *Deviation_bend_1_train_30_120 = new TH2F("Deviation_bend_1_train_30_120","Deviation vs bend_1 train 30<pT<=120 GeV",3,-1,2,100,-0.1,0.1);
    TH2F *Deviation_theta_train_30_120 = new TH2F("Deviation_theta_train_30_120","Deviation vs theta train 30<pT<=120 GeV",100,0,90,100,-0.1,0.1);
    TH2F *Deviation_dPhi_12_train_30_120 = new TH2F("Deviation_dPhi_12_train_30_120","Deviation vs dPhi_12 train 30<pT<=120 GeV",100,-4,4,100,-0.1,0.1);
    TH2F *Deviation_dPhi_23_train_30_120 = new TH2F("Deviation_dPhi_23_train_30_120","Deviation vs dPhi_23 train 30<pT<=120 GeV",100,-4,4,100,-0.1,0.1);
    TH2F *Deviation_dPhi_34_train_30_120 = new TH2F("Deviation_dPhi_34_train_30_120","Deviation vs dPhi_34 train 30<pT<=120 GeV",100,-4,4,100,-0.1,0.1);
    TH2F *Deviation_GEN_pt_train_30_120 = new TH2F("Deviation_GEN_pt_train_30_120","Deviation vs GEN_pt train 30<pT<=120 GeV",100,30,120,100,-0.1,0.1);
    TH2F *EMTF_Deviation_GEN_pt_train_30_120 = new TH2F("EMTF_Deviation_GEN_pt_train_30_120","EMTF Deviation vs GEN_pt train 30<pT<=120 GeV",100,30,120,100,-0.1,0.1);
    
    //for GEN pT: 120-1000 GeV
    TH2F *Deviation_dPhiSum3_train_120_1000 = new TH2F("Deviation_dPhiSum3_train_120_1000","Deviation vs dPhiSum3 train 120<pT<=1000 GeV",30,-2,2,100,-0.1,0.1);
    TH2F *Deviation_FR_1_train_120_1000 = new TH2F("Deviation_FR_1_train_120_1000","Deviation vs FR_1 train 120<pT<=1000 GeV",3,-1,2,100,-0.1,0.1);
    TH2F *Deviation_dTh_13_train_120_1000 = new TH2F("Deviation_dTh_13_train_120_1000","Deviation vs dTh_13 train 120<pT<=1000 GeV",100,-10,10,100,-0.1,0.1);
    TH2F *Deviation_bend_1_train_120_1000 = new TH2F("Deviation_bend_1_train_120_1000","Deviation vs bend_1 train 120<pT<=1000 GeV",3,-1,2,100,-0.1,0.1);
    TH2F *Deviation_theta_train_120_1000 = new TH2F("Deviation_theta_train_120_1000","Deviation vs theta train 120<pT<=1000 GeV",100,0,90,100,-0.1,0.1);
    TH2F *Deviation_dPhi_12_train_120_1000 = new TH2F("Deviation_dPhi_12_train_120_1000","Deviation vs dPhi_12 train 120<pT<=1000 GeV",100,-4,4,100,-0.1,0.1);
    TH2F *Deviation_dPhi_23_train_120_1000 = new TH2F("Deviation_dPhi_23_train_120_1000","Deviation vs dPhi_23 train 120<pT<=1000 GeV",100,-4,4,100,-0.1,0.1);
    TH2F *Deviation_dPhi_34_train_120_1000 = new TH2F("Deviation_dPhi_34_train_120_1000","Deviation vs dPhi_34 train 120<pT<=1000 GeV",100,-4,4,100,-0.1,0.1);
    TH2F *Deviation_GEN_pt_train_120_1000 = new TH2F("Deviation_GEN_pt_train_120_1000","Deviation vs GEN_pt train 120<pT<=1000 GeV",100,120,1000,100,-0.1,0.1);
    TH2F *EMTF_Deviation_GEN_pt_train_120_1000 = new TH2F("EMTF_Deviation_GEN_pt_train_120_1000","EMTF Deviation vs GEN_pt train 120<pT<=1000 GeV",100,120,1000,100,-0.1,0.1);

    //==================================================
    //book histograms for target/input for test sample
    //==================================================
    
    TH2F *Deviation_dPhiSum3_test = new TH2F("Deviation_dPhiSum3_test","Deviation vs dPhiSum3 test",30,-2,2,100,-0.1,0.1);
    TH2F *Deviation_FR_1_test = new TH2F("Deviation_FR_1_test","Deviation vs FR_1 test",3,-1,2,100,-0.1,0.1);
    TH2F *Deviation_dTh_13_test = new TH2F("Deviation_dTh_13_test","Deviation vs dTh_13 test",100,-10,10,100,-0.1,0.1);
    TH2F *Deviation_bend_1_test = new TH2F("Deviation_bend_1_test","Deviation vs bend_1 test",3,-1,2,100,-0.1,0.1);
    TH2F *Deviation_theta_test = new TH2F("Deviation_theta_test","Deviation vs theta test",100,0,90,100,-0.1,0.1);
    TH2F *Deviation_dPhi_12_test = new TH2F("Deviation_dPhi_12_test","Deviation vs dPhi_12 test",100,-4,4,100,-0.1,0.1);
    TH2F *Deviation_dPhi_23_test = new TH2F("Deviation_dPhi_23_test","Deviation vs dPhi_23 test",100,-4,4,100,-0.1,0.1);
    TH2F *Deviation_dPhi_34_test = new TH2F("Deviation_dPhi_34_test","Deviation vs dPhi_34 test",100,-4,4,100,-0.1,0.1);
    TH2F *Deviation_GEN_pt_test = new TH2F("Deviation_GEN_pt_test","Deviation vs GEN_pt test",100,0,1000,100,-0.1,0.1);
    TH2F *EMTF_Deviation_GEN_pt_test = new TH2F("EMTF_Deviation_GEN_pt_test","EMTF Deviation vs GEN_pt test",100,0,1000,100,-0.1,0.1);
    
    //for GEN pT: 1-8 GeV
    TH2F *Deviation_dPhiSum3_test_1_8 = new TH2F("Deviation_dPhiSum3_test_1_8","Deviation vs dPhiSum3 test 1<pT<=8 GeV",30,-2,2,100,-0.1,0.1);
    TH2F *Deviation_FR_1_test_1_8 = new TH2F("Deviation_FR_1_test_1_8","Deviation vs FR_1 test 1<pT<=8 GeV",3,-1,2,100,-0.1,0.1);
    TH2F *Deviation_dTh_13_test_1_8 = new TH2F("Deviation_dTh_13_test_1_8","Deviation vs dTh_13 test 1<pT<=8 GeV",100,-10,10,100,-0.1,0.1);
    TH2F *Deviation_bend_1_test_1_8 = new TH2F("Deviation_bend_1_test_1_8","Deviation vs bend_1 test 1<pT<=8 GeV",3,-1,2,100,-0.1,0.1);
    TH2F *Deviation_theta_test_1_8 = new TH2F("Deviation_theta_test_1_8","Deviation vs theta test 1<pT<=8 GeV",100,0,90,100,-0.1,0.1);
    TH2F *Deviation_dPhi_12_test_1_8 = new TH2F("Deviation_dPhi_12_test_1_8","Deviation vs dPhi_12 test 1<pT<=8 GeV",100,-4,4,100,-0.1,0.1);
    TH2F *Deviation_dPhi_23_test_1_8 = new TH2F("Deviation_dPhi_23_test_1_8","Deviation vs dPhi_23 test 1<pT<=8 GeV",100,-4,4,100,-0.1,0.1);
    TH2F *Deviation_dPhi_34_test_1_8 = new TH2F("Deviation_dPhi_34_test_1_8","Deviation vs dPhi_34 test 1<pT<=8 GeV",100,-4,4,100,-0.1,0.1);
    TH2F *Deviation_GEN_pt_test_1_8 = new TH2F("Deviation_GEN_pt_test_1_8","Deviation vs GEN_pt test 1<pT<=8 GeV",100,0,10,100,-0.1,0.1);
    TH2F *EMTF_Deviation_GEN_pt_test_1_8 = new TH2F("EMTF_Deviation_GEN_pt_test_1_8","EMTF Deviation vs GEN_pt test 1<pT<=8 GeV",100,0,10,100,-0.1,0.1);
    
    //for GEN pT: 8-30 GeV
    TH2F *Deviation_dPhiSum3_test_8_30 = new TH2F("Deviation_dPhiSum3_test_8_30","Deviation vs dPhiSum3 test 8<pT<=30 GeV",30,-2,2,100,-0.1,0.1);
    TH2F *Deviation_FR_1_test_8_30 = new TH2F("Deviation_FR_1_test_8_30","Deviation vs FR_1 test 8<pT<=30 GeV",3,-1,2,100,-0.1,0.1);
    TH2F *Deviation_dTh_13_test_8_30 = new TH2F("Deviation_dTh_13_test_8_30","Deviation vs dTh_13 test 8<pT<=30 GeV",100,-10,10,100,-0.1,0.1);
    TH2F *Deviation_bend_1_test_8_30 = new TH2F("Deviation_bend_1_test_8_30","Deviation vs bend_1 test 8<pT<=30 GeV",3,-1,2,100,-0.1,0.1);
    TH2F *Deviation_theta_test_8_30 = new TH2F("Deviation_theta_test_8_30","Deviation vs theta test 8<pT<=30 GeV",100,0,90,100,-0.1,0.1);
    TH2F *Deviation_dPhi_12_test_8_30 = new TH2F("Deviation_dPhi_12_test_8_30","Deviation vs dPhi_12 test 8<pT<=30 GeV",100,-4,4,100,-0.1,0.1);
    TH2F *Deviation_dPhi_23_test_8_30 = new TH2F("Deviation_dPhi_23_test_8_30","Deviation vs dPhi_23 test 8<pT<=30 GeV",100,-4,4,100,-0.1,0.1);
    TH2F *Deviation_dPhi_34_test_8_30 = new TH2F("Deviation_dPhi_34_test_8_30","Deviation vs dPhi_34 test 8<pT<=30 GeV",100,-4,4,100,-0.1,0.1);
    TH2F *Deviation_GEN_pt_test_8_30 = new TH2F("Deviation_GEN_pt_test_8_30","Deviation vs GEN_pt test 8<pT<=30 GeV",100,8,30,100,-0.1,0.1);
    TH2F *EMTF_Deviation_GEN_pt_test_8_30 = new TH2F("EMTF_Deviation_GEN_pt_test_8_30","EMTF Deviation vs GEN_pt test 8<pT<=30 GeV",100,8,30,100,-0.1,0.1);
    
    //for GEN pT: 30-120 GeV
    TH2F *Deviation_dPhiSum3_test_30_120 = new TH2F("Deviation_dPhiSum3_test_30_120","Deviation vs dPhiSum3 test 30<pT<=120 GeV",30,-2,2,100,-0.1,0.1);
    TH2F *Deviation_FR_1_test_30_120 = new TH2F("Deviation_FR_1_test_30_120","Deviation vs FR_1 test 30<pT<=120 GeV",3,-1,2,100,-0.1,0.1);
    TH2F *Deviation_dTh_13_test_30_120 = new TH2F("Deviation_dTh_13_test_30_120","Deviation vs dTh_13 test 30<pT<=120 GeV",100,-10,10,100,-0.1,0.1);
    TH2F *Deviation_bend_1_test_30_120 = new TH2F("Deviation_bend_1_test_30_120","Deviation vs bend_1 test 30<pT<=120 GeV",3,-1,2,100,-0.1,0.1);
    TH2F *Deviation_theta_test_30_120 = new TH2F("Deviation_theta_test_30_120","Deviation vs theta test 30<pT<=120 GeV",100,0,90,100,-0.1,0.1);
    TH2F *Deviation_dPhi_12_test_30_120 = new TH2F("Deviation_dPhi_12_test_30_120","Deviation vs dPhi_12 test 30<pT<=120 GeV",100,-4,4,100,-0.1,0.1);
    TH2F *Deviation_dPhi_23_test_30_120 = new TH2F("Deviation_dPhi_23_test_30_120","Deviation vs dPhi_23 test 30<pT<=120 GeV",100,-4,4,100,-0.1,0.1);
    TH2F *Deviation_dPhi_34_test_30_120 = new TH2F("Deviation_dPhi_34_test_30_120","Deviation vs dPhi_34 test 30<pT<=120 GeV",100,-4,4,100,-0.1,0.1);
    TH2F *Deviation_GEN_pt_test_30_120 = new TH2F("Deviation_GEN_pt_test_30_120","Deviation vs GEN_pt test 30<pT<=120 GeV",100,30,120,100,-0.1,0.1);
    TH2F *EMTF_Deviation_GEN_pt_test_30_120 = new TH2F("EMTF_Deviation_GEN_pt_test_30_120","EMTF Deviation vs GEN_pt test 30<pT<=120 GeV",100,30,120,100,-0.1,0.1);
    
    //for GEN pT: 120-1000 GeV
    TH2F *Deviation_dPhiSum3_test_120_1000 = new TH2F("Deviation_dPhiSum3_test_120_1000","Deviation vs dPhiSum3 test 120<pT<=1000 GeV",30,-2,2,100,-0.1,0.1);
    TH2F *Deviation_FR_1_test_120_1000 = new TH2F("Deviation_FR_1_test_120_1000","Deviation vs FR_1 test 120<pT<=1000 GeV",3,-1,2,100,-0.1,0.1);
    TH2F *Deviation_dTh_13_test_120_1000 = new TH2F("Deviation_dTh_13_test_120_1000","Deviation vs dTh_13 test 120<pT<=1000 GeV",100,-10,10,100,-0.1,0.1);
    TH2F *Deviation_bend_1_test_120_1000 = new TH2F("Deviation_bend_1_test_120_1000","Deviation vs bend_1 test 120<pT<=1000 GeV",3,-1,2,100,-0.1,0.1);
    TH2F *Deviation_theta_test_120_1000 = new TH2F("Deviation_theta_test_120_1000","Deviation vs theta test 120<pT<=1000 GeV",100,0,90,100,-0.1,0.1);
    TH2F *Deviation_dPhi_12_test_120_1000 = new TH2F("Deviation_dPhi_12_test_120_1000","Deviation vs dPhi_12 test 120<pT<=1000 GeV",100,-4,4,100,-0.1,0.1);
    TH2F *Deviation_dPhi_23_test_120_1000 = new TH2F("Deviation_dPhi_23_test_120_1000","Deviation vs dPhi_23 test 120<pT<=1000 GeV",100,-4,4,100,-0.1,0.1);
    TH2F *Deviation_dPhi_34_test_120_1000 = new TH2F("Deviation_dPhi_34_test_120_1000","Deviation vs dPhi_34 test 120<pT<=1000 GeV",100,-4,4,100,-0.1,0.1);
    TH2F *Deviation_GEN_pt_test_120_1000 = new TH2F("Deviation_GEN_pt_test_120_1000","Deviation vs GEN_pt test 120<pT<=1000 GeV",100,120,1000,100,-0.1,0.1);
    TH2F *EMTF_Deviation_GEN_pt_test_120_1000 = new TH2F("EMTF_Deviation_GEN_pt_test_120_1000","EMTF Deviation vs GEN_pt test 120<pT<=1000 GeV",100,120,1000,100,-0.1,0.1);
    
    train_events = train_chain->GetEntries();
    test_events = test_chain->GetEntries();
    
  //std::cout << "\n******* About to enter the train event loop *******" << std::endl;
  for (UInt_t iEvt = 0; iEvt < train_chain->GetEntries(); iEvt++) {

  //  if (iEvt > 10) break;
  //  if ( (iEvt % 1) == 0 )
    //  std::cout << "\n*** Looking at event " << iEvt << " ***" <<  std::endl;

    train_chain->GetEntry(iEvt);

    //std::cout << "EMTF_pt = " << EMTF_pt_train_br << std::endl;
    //std::cout << "GEN_pt = " << GEN_pt_train_br << std::endl;
    //std::cout << "inv_GEN_pt_train = " << inv_GEN_pt_train_br << std::endl;
    //std::cout << "KNN_train = " << KNN_train_br << std::endl;
    //std::cout << "dPhi_12 = " << dPhi_12_train_br << std::endl;
      
      Deviation_dPhiSum3_train->Fill(dPhiSum3_train_br,KNN_train_br-inv_GEN_pt_train_br);
      //Deviation_FR_1_train->Fill(FR_1_train_br,KNN_train_br-inv_GEN_pt_train_br);
      //Deviation_dTh_13_train->Fill(dTh_13_train_br,KNN_train_br-inv_GEN_pt_train_br);
      //Deviation_bend_1_train->Fill(bend_1_train_br,KNN_train_br-inv_GEN_pt_train_br);
      Deviation_theta_train->Fill(theta_train_br,KNN_train_br-inv_GEN_pt_train_br);
      Deviation_dPhi_12_train->Fill(dPhi_12_train_br,KNN_train_br-inv_GEN_pt_train_br);
      Deviation_dPhi_23_train->Fill(dPhi_23_train_br,KNN_train_br-inv_GEN_pt_train_br);
      //Deviation_dPhi_34_train->Fill(dPhi_34_train_br,KNN_train_br-inv_GEN_pt_train_br);
      Deviation_GEN_pt_train->Fill(GEN_pt_train_br,KNN_train_br-inv_GEN_pt_train_br);
      EMTF_Deviation_GEN_pt_train->Fill(GEN_pt_train_br,inv_EMTF_pt_train_br-inv_GEN_pt_train_br);
      
      Deviation_train += (KNN_train_br-inv_GEN_pt_train_br)*(KNN_train_br-inv_GEN_pt_train_br);
      EMTF_Deviation_train += (inv_EMTF_pt_train_br-inv_GEN_pt_train_br)*(inv_EMTF_pt_train_br-inv_GEN_pt_train_br);
      
      //devide by pT:1-8GeV
      if (GEN_pt_train_br > 1 && GEN_pt_train_br <= 8){
          
          Deviation_dPhiSum3_train_1_8->Fill(dPhiSum3_train_br,KNN_train_br-inv_GEN_pt_train_br);
          //Deviation_FR_1_train_1_8->Fill(FR_1_train_br,KNN_train_br-inv_GEN_pt_train_br);
          //Deviation_dTh_13_train_1_8->Fill(dTh_13_train_br,KNN_train_br-inv_GEN_pt_train_br);
          //Deviation_bend_1_train_1_8->Fill(bend_1_train_br,KNN_train_br-inv_GEN_pt_train_br);
          Deviation_theta_train_1_8->Fill(theta_train_br,KNN_train_br-inv_GEN_pt_train_br);
          Deviation_dPhi_12_train_1_8->Fill(dPhi_12_train_br,KNN_train_br-inv_GEN_pt_train_br);
          Deviation_dPhi_23_train_1_8->Fill(dPhi_23_train_br,KNN_train_br-inv_GEN_pt_train_br);
          //Deviation_dPhi_34_train_1_8->Fill(dPhi_34_train_br,KNN_train_br-inv_GEN_pt_train_br);
          Deviation_GEN_pt_train_1_8->Fill(GEN_pt_train_br,KNN_train_br-inv_GEN_pt_train_br);
          EMTF_Deviation_GEN_pt_train_1_8->Fill(GEN_pt_train_br,inv_EMTF_pt_train_br-inv_GEN_pt_train_br);
          
          train_events_1_8 += 1;
          Deviation_train_1_8 += (KNN_train_br-inv_GEN_pt_train_br)*(KNN_train_br-inv_GEN_pt_train_br);
          EMTF_Deviation_train_1_8 += (inv_EMTF_pt_train_br-inv_GEN_pt_train_br)*(inv_EMTF_pt_train_br-inv_GEN_pt_train_br);
      }
      else if (GEN_pt_train_br > 8 && GEN_pt_train_br <= 30){
          
          Deviation_dPhiSum3_train_8_30->Fill(dPhiSum3_train_br,KNN_train_br-inv_GEN_pt_train_br);
          //Deviation_FR_1_train_8_30->Fill(FR_1_train_br,KNN_train_br-inv_GEN_pt_train_br);
          //Deviation_dTh_13_train_8_30->Fill(dTh_13_train_br,KNN_train_br-inv_GEN_pt_train_br);
          //Deviation_bend_1_train_8_30->Fill(bend_1_train_br,KNN_train_br-inv_GEN_pt_train_br);
          Deviation_theta_train_8_30->Fill(theta_train_br,KNN_train_br-inv_GEN_pt_train_br);
          Deviation_dPhi_12_train_8_30->Fill(dPhi_12_train_br,KNN_train_br-inv_GEN_pt_train_br);
          Deviation_dPhi_23_train_8_30->Fill(dPhi_23_train_br,KNN_train_br-inv_GEN_pt_train_br);
          //Deviation_dPhi_34_train_8_30->Fill(dPhi_34_train_br,KNN_train_br-inv_GEN_pt_train_br);
          Deviation_GEN_pt_train_8_30->Fill(GEN_pt_train_br,KNN_train_br-inv_GEN_pt_train_br);
          EMTF_Deviation_GEN_pt_train_8_30->Fill(GEN_pt_train_br,inv_EMTF_pt_train_br-inv_GEN_pt_train_br);
          
          train_events_8_30 += 1;
          Deviation_train_8_30 += (KNN_train_br-inv_GEN_pt_train_br)*(KNN_train_br-inv_GEN_pt_train_br);
          EMTF_Deviation_train_8_30 += (inv_EMTF_pt_train_br-inv_GEN_pt_train_br)*(inv_EMTF_pt_train_br-inv_GEN_pt_train_br);
      }
      else if (GEN_pt_train_br > 30 && GEN_pt_train_br <= 120){
          
          Deviation_dPhiSum3_train_30_120->Fill(dPhiSum3_train_br,KNN_train_br-inv_GEN_pt_train_br);
          //Deviation_FR_1_train_30_120->Fill(FR_1_train_br,KNN_train_br-inv_GEN_pt_train_br);
          //Deviation_dTh_13_train_30_120->Fill(dTh_13_train_br,KNN_train_br-inv_GEN_pt_train_br);
          //Deviation_bend_1_train_30_120->Fill(bend_1_train_br,KNN_train_br-inv_GEN_pt_train_br);
          Deviation_theta_train_30_120->Fill(theta_train_br,KNN_train_br-inv_GEN_pt_train_br);
          Deviation_dPhi_12_train_30_120->Fill(dPhi_12_train_br,KNN_train_br-inv_GEN_pt_train_br);
          Deviation_dPhi_23_train_30_120->Fill(dPhi_23_train_br,KNN_train_br-inv_GEN_pt_train_br);
          //Deviation_dPhi_34_train_30_120->Fill(dPhi_34_train_br,KNN_train_br-inv_GEN_pt_train_br);
          Deviation_GEN_pt_train_30_120->Fill(GEN_pt_train_br,KNN_train_br-inv_GEN_pt_train_br);
          EMTF_Deviation_GEN_pt_train_30_120->Fill(GEN_pt_train_br,inv_EMTF_pt_train_br-inv_GEN_pt_train_br);
          
          train_events_30_120 += 1;
          Deviation_train_30_120 += (KNN_train_br-inv_GEN_pt_train_br)*(KNN_train_br-inv_GEN_pt_train_br);
          EMTF_Deviation_train_30_120 += (inv_EMTF_pt_train_br-inv_GEN_pt_train_br)*(inv_EMTF_pt_train_br-inv_GEN_pt_train_br);
      }
      else if (GEN_pt_train_br > 120 && GEN_pt_train_br <= 1000){
          
          Deviation_dPhiSum3_train_120_1000->Fill(dPhiSum3_train_br,KNN_train_br-inv_GEN_pt_train_br);
          //Deviation_FR_1_train_120_1000->Fill(FR_1_train_br,KNN_train_br-inv_GEN_pt_train_br);
          //Deviation_dTh_13_train_120_1000->Fill(dTh_13_train_br,KNN_train_br-inv_GEN_pt_train_br);
          //Deviation_bend_1_train_120_1000->Fill(bend_1_train_br,KNN_train_br-inv_GEN_pt_train_br);
          Deviation_theta_train_120_1000->Fill(theta_train_br,KNN_train_br-inv_GEN_pt_train_br);
          Deviation_dPhi_12_train_120_1000->Fill(dPhi_12_train_br,KNN_train_br-inv_GEN_pt_train_br);
          Deviation_dPhi_23_train_120_1000->Fill(dPhi_23_train_br,KNN_train_br-inv_GEN_pt_train_br);
          //Deviation_dPhi_34_train_120_1000->Fill(dPhi_34_train_br,KNN_train_br-inv_GEN_pt_train_br);
          Deviation_GEN_pt_train_120_1000->Fill(GEN_pt_train_br,KNN_train_br-inv_GEN_pt_train_br);
          EMTF_Deviation_GEN_pt_train_120_1000->Fill(GEN_pt_train_br,inv_EMTF_pt_train_br-inv_GEN_pt_train_br);
          
          train_events_120_1000 += 1;
          Deviation_train_120_1000 += (KNN_train_br-inv_GEN_pt_train_br)*(KNN_train_br-inv_GEN_pt_train_br);
          EMTF_Deviation_train_120_1000 += (inv_EMTF_pt_train_br-inv_GEN_pt_train_br)*(inv_EMTF_pt_train_br-inv_GEN_pt_train_br);
      }
      
  } // End loop: for (UInt_t iEvt = 0; iEvt < train_chain->GetEntries(); iEvt++)
    //std::cout << "\n******* Leaving the train event loop *******" << std::endl;
    
  //std::cout << "\n******* About to enter the test event loop *******" << std::endl;
  for (UInt_t iEvt = 0; iEvt < test_chain->GetEntries(); iEvt++) {

  //  if (iEvt > 10) break;
  //  if ( (iEvt % 1) == 0 ) 
      //std::cout << "\n*** Looking at event " << iEvt << " ***" <<  std::endl;

    test_chain->GetEntry(iEvt);

    //std::cout << "EMTF_pt = " << EMTF_pt_test_br << std::endl;
    //std::cout << "GEN_pt = " << GEN_pt_test_br << std::endl;
    //std::cout << "inv_GEN_pt_test = " << inv_GEN_pt_test_br << std::endl;
    //std::cout << "KNN_test = " << KNN_test_br << std::endl;
    //std::cout << "dPhi_12 = " << dPhi_12_test_br << std::endl;
     
      Deviation_dPhiSum3_test->Fill(dPhiSum3_test_br,KNN_test_br-inv_GEN_pt_test_br);
      //Deviation_FR_1_test->Fill(FR_1_test_br,KNN_test_br-inv_GEN_pt_test_br);
      //Deviation_dTh_13_test->Fill(dTh_13_test_br,KNN_test_br-inv_GEN_pt_test_br);
      //Deviation_bend_1_test->Fill(bend_1_test_br,KNN_test_br-inv_GEN_pt_test_br);
      Deviation_theta_test->Fill(theta_test_br,KNN_test_br-inv_GEN_pt_test_br);
      Deviation_dPhi_12_test->Fill(dPhi_12_test_br,KNN_test_br-inv_GEN_pt_test_br);
      Deviation_dPhi_23_test->Fill(dPhi_23_test_br,KNN_test_br-inv_GEN_pt_test_br);
      //Deviation_dPhi_34_test->Fill(dPhi_34_test_br,KNN_test_br-inv_GEN_pt_test_br);
      Deviation_GEN_pt_test->Fill(GEN_pt_test_br,KNN_test_br-inv_GEN_pt_test_br);
      EMTF_Deviation_GEN_pt_test->Fill(GEN_pt_test_br,inv_EMTF_pt_test_br-inv_GEN_pt_test_br);
      
      Deviation_test += (KNN_test_br-inv_GEN_pt_test_br)*(KNN_test_br-inv_GEN_pt_test_br);
      EMTF_Deviation_test += (inv_EMTF_pt_test_br-inv_GEN_pt_test_br)*(inv_EMTF_pt_test_br-inv_GEN_pt_test_br);
      
      //devide by pT:1-8GeV
      if (GEN_pt_test_br > 1 && GEN_pt_test_br <= 8){
          
          Deviation_dPhiSum3_test_1_8->Fill(dPhiSum3_test_br,KNN_test_br-inv_GEN_pt_test_br);
          //Deviation_FR_1_test_1_8->Fill(FR_1_test_br,KNN_test_br-inv_GEN_pt_test_br);
          //Deviation_dTh_13_test_1_8->Fill(dTh_13_test_br,KNN_test_br-inv_GEN_pt_test_br);
          //Deviation_bend_1_test_1_8->Fill(bend_1_test_br,KNN_test_br-inv_GEN_pt_test_br);
          Deviation_theta_test_1_8->Fill(theta_test_br,KNN_test_br-inv_GEN_pt_test_br);
          Deviation_dPhi_12_test_1_8->Fill(dPhi_12_test_br,KNN_test_br-inv_GEN_pt_test_br);
          Deviation_dPhi_23_test_1_8->Fill(dPhi_23_test_br,KNN_test_br-inv_GEN_pt_test_br);
          //Deviation_dPhi_34_test_1_8->Fill(dPhi_34_test_br,KNN_test_br-inv_GEN_pt_test_br);
          Deviation_GEN_pt_test_1_8->Fill(GEN_pt_test_br,KNN_test_br-inv_GEN_pt_test_br);
          EMTF_Deviation_GEN_pt_test_1_8->Fill(GEN_pt_test_br,inv_EMTF_pt_test_br-inv_GEN_pt_test_br);
          
          test_events_1_8 += 1;
          Deviation_test_1_8 += (KNN_test_br-inv_GEN_pt_test_br)*(KNN_test_br-inv_GEN_pt_test_br);
          EMTF_Deviation_test_1_8 += (inv_EMTF_pt_test_br-inv_GEN_pt_test_br)*(inv_EMTF_pt_test_br-inv_GEN_pt_test_br);
      }
      else if (GEN_pt_test_br > 8 && GEN_pt_test_br <= 30){
          
          Deviation_dPhiSum3_test_8_30->Fill(dPhiSum3_test_br,KNN_test_br-inv_GEN_pt_test_br);
          //Deviation_FR_1_test_8_30->Fill(FR_1_test_br,KNN_test_br-inv_GEN_pt_test_br);
          //Deviation_dTh_13_test_8_30->Fill(dTh_13_test_br,KNN_test_br-inv_GEN_pt_test_br);
          //Deviation_bend_1_test_8_30->Fill(bend_1_test_br,KNN_test_br-inv_GEN_pt_test_br);
          Deviation_theta_test_8_30->Fill(theta_test_br,KNN_test_br-inv_GEN_pt_test_br);
          Deviation_dPhi_12_test_8_30->Fill(dPhi_12_test_br,KNN_test_br-inv_GEN_pt_test_br);
          Deviation_dPhi_23_test_8_30->Fill(dPhi_23_test_br,KNN_test_br-inv_GEN_pt_test_br);
          //Deviation_dPhi_34_test_8_30->Fill(dPhi_34_test_br,KNN_test_br-inv_GEN_pt_test_br);
          Deviation_GEN_pt_test_8_30->Fill(GEN_pt_test_br,KNN_test_br-inv_GEN_pt_test_br);
          EMTF_Deviation_GEN_pt_test_8_30->Fill(GEN_pt_test_br,inv_EMTF_pt_test_br-inv_GEN_pt_test_br);
          
          test_events_8_30 += 1;
          Deviation_test_8_30 += (KNN_test_br-inv_GEN_pt_test_br)*(KNN_test_br-inv_GEN_pt_test_br);
          EMTF_Deviation_test_8_30 += (inv_EMTF_pt_test_br-inv_GEN_pt_test_br)*(inv_EMTF_pt_test_br-inv_GEN_pt_test_br);
      }
      else if (GEN_pt_test_br > 30 && GEN_pt_test_br <= 120){
          Deviation_dPhiSum3_test_30_120->Fill(dPhiSum3_test_br,KNN_test_br-inv_GEN_pt_test_br);
          //Deviation_FR_1_test_30_120->Fill(FR_1_test_br,KNN_test_br-inv_GEN_pt_test_br);
          //Deviation_dTh_13_test_30_120->Fill(dTh_13_test_br,KNN_test_br-inv_GEN_pt_test_br);
          //Deviation_bend_1_test_30_120->Fill(bend_1_test_br,KNN_test_br-inv_GEN_pt_test_br);
          Deviation_theta_test_30_120->Fill(theta_test_br,KNN_test_br-inv_GEN_pt_test_br);
          Deviation_dPhi_12_test_30_120->Fill(dPhi_12_test_br,KNN_test_br-inv_GEN_pt_test_br);
          Deviation_dPhi_23_test_30_120->Fill(dPhi_23_test_br,KNN_test_br-inv_GEN_pt_test_br);
          //Deviation_dPhi_34_test_30_120->Fill(dPhi_34_test_br,KNN_test_br-inv_GEN_pt_test_br);
          Deviation_GEN_pt_test_30_120->Fill(GEN_pt_test_br,KNN_test_br-inv_GEN_pt_test_br);
          EMTF_Deviation_GEN_pt_test_30_120->Fill(GEN_pt_test_br,inv_EMTF_pt_test_br-inv_GEN_pt_test_br);
          
          test_events_30_120 += 1;
          Deviation_test_30_120 += (KNN_test_br-inv_GEN_pt_test_br)*(KNN_test_br-inv_GEN_pt_test_br);
          EMTF_Deviation_test_30_120 += (inv_EMTF_pt_test_br-inv_GEN_pt_test_br)*(inv_EMTF_pt_test_br-inv_GEN_pt_test_br);
      }
      else if (GEN_pt_test_br > 120 && GEN_pt_test_br <= 1000){
          Deviation_dPhiSum3_test_120_1000->Fill(dPhiSum3_test_br,KNN_test_br-inv_GEN_pt_test_br);
          //Deviation_FR_1_test_120_1000->Fill(FR_1_test_br,KNN_test_br-inv_GEN_pt_test_br);
          //Deviation_dTh_13_test_120_1000->Fill(dTh_13_test_br,KNN_test_br-inv_GEN_pt_test_br);
          //Deviation_bend_1_test_120_1000->Fill(bend_1_test_br,KNN_test_br-inv_GEN_pt_test_br);
          Deviation_theta_test_120_1000->Fill(theta_test_br,KNN_test_br-inv_GEN_pt_test_br);
          Deviation_dPhi_12_test_120_1000->Fill(dPhi_12_test_br,KNN_test_br-inv_GEN_pt_test_br);
          Deviation_dPhi_23_test_120_1000->Fill(dPhi_23_test_br,KNN_test_br-inv_GEN_pt_test_br);
          //Deviation_dPhi_34_test_120_1000->Fill(dPhi_34_test_br,KNN_test_br-inv_GEN_pt_test_br);
          Deviation_GEN_pt_test_120_1000->Fill(GEN_pt_test_br,KNN_test_br-inv_GEN_pt_test_br);
          EMTF_Deviation_GEN_pt_test_120_1000->Fill(GEN_pt_test_br,inv_EMTF_pt_test_br-inv_GEN_pt_test_br);
          
          test_events_120_1000 += 1;
          Deviation_test_120_1000 += (KNN_test_br-inv_GEN_pt_test_br)*(KNN_test_br-inv_GEN_pt_test_br);
          EMTF_Deviation_test_120_1000 += (inv_EMTF_pt_test_br-inv_GEN_pt_test_br)*(inv_EMTF_pt_test_br-inv_GEN_pt_test_br);
      }
      
      //test trigger efficiency 8 GeV: 1-30 use 2GeV as unit,15 bins; 31-121 use 5GeV as unit, 18 bins
      for (int bin=0;bin<33;bin++) {
          if (GEN_pt_test_br > trigger[bin] && GEN_pt_test_br <= trigger[bin+1]){
              //need to count muons in all bins, don't use break
              count[bin]++;
              //KNN is targeting 1/pT, need to convert
              //trigger efficiency 8 GeV
              if (1./KNN_test_br > trigger_Cut_1){
                  pass_count_1[bin]++;
              }
              if (EMTF_pt_test_br > trigger_Cut_1){
                  EMTF_pass_count_1[bin]++;
              }
              //trigger efficiency 16 GeV
              if (1./KNN_test_br > trigger_Cut_2){
                  pass_count_2[bin]++;
              }
              if (EMTF_pt_test_br > trigger_Cut_2){
                  EMTF_pass_count_2[bin]++;
              }
              //trigger efficiency 24 GeV
              if (1./KNN_test_br > trigger_Cut_3){
                  pass_count_3[bin]++;
              }
              if (EMTF_pt_test_br > trigger_Cut_3){
                  EMTF_pass_count_3[bin]++;
              }
          }//end if GEN_pt
      }//end for bin
      
      
    
  } // End loop: for (UInt_t iEvt = 0; iEvt < test_chain->GetEntries(); iEvt++)
  //std::cout << "\n******* Leaving the test event loop *******" << std::endl;
    
    //KNN
    Standard_Deviation_test = Deviation_test/test_events;
    Standard_Deviation_test_1_8 = Deviation_test_1_8/test_events_1_8;
    Standard_Deviation_test_8_30 = Deviation_test_8_30/test_events_8_30;
    Standard_Deviation_test_30_120 = Deviation_test_30_120/test_events_30_120;
    Standard_Deviation_test_120_1000 = Deviation_test_120_1000/test_events_120_1000;
    
    Standard_Deviation_train = Deviation_train/train_events;
    Standard_Deviation_train_1_8 = Deviation_train_1_8/train_events_1_8;
    Standard_Deviation_train_8_30 = Deviation_train_8_30/train_events_8_30;
    Standard_Deviation_train_30_120 = Deviation_train_30_120/train_events_30_120;
    Standard_Deviation_train_120_1000 = Deviation_train_120_1000/train_events_120_1000;
    //EMTF
    EMTF_Standard_Deviation_test = EMTF_Deviation_test/test_events;
    EMTF_Standard_Deviation_test_1_8 = EMTF_Deviation_test_1_8/test_events_1_8;
    EMTF_Standard_Deviation_test_8_30 = EMTF_Deviation_test_8_30/test_events_8_30;
    EMTF_Standard_Deviation_test_30_120 = EMTF_Deviation_test_30_120/test_events_30_120;
    EMTF_Standard_Deviation_test_120_1000 = EMTF_Deviation_test_120_1000/test_events_120_1000;
    
    EMTF_Standard_Deviation_train = EMTF_Deviation_train/train_events;
    EMTF_Standard_Deviation_train_1_8 = EMTF_Deviation_train_1_8/train_events_1_8;
    EMTF_Standard_Deviation_train_8_30 = EMTF_Deviation_train_8_30/train_events_8_30;
    EMTF_Standard_Deviation_train_30_120 = EMTF_Deviation_train_30_120/train_events_30_120;
    EMTF_Standard_Deviation_train_120_1000 = EMTF_Deviation_train_120_1000/train_events_120_1000;
    
    //calculate trigger efficiency
    for (int bin=0;bin<33;bin++) {
   //     std::cout << "bin: " <<bin<<", count: "<<count[bin]<<", KNN_pass: "<<pass_count[bin]<<", EMTF_pass: "<<EMTF_pass_count[bin]<< std::endl;
        efficiency_1[bin]=pass_count_1[bin]/count[bin];
        EMTF_efficiency_1[bin]=EMTF_pass_count_1[bin]/count[bin];
        
        efficiency_2[bin]=pass_count_2[bin]/count[bin];
        EMTF_efficiency_2[bin]=EMTF_pass_count_2[bin]/count[bin];
        
        efficiency_3[bin]=pass_count_3[bin]/count[bin];
        EMTF_efficiency_3[bin]=EMTF_pass_count_3[bin]/count[bin];
        
    }
    //write to output file
    TFile myPlot("/home/ws13/TMVA/TMVA/EMTFPtAssign2017/Output_v0_KNN.root","RECREATE");
    
    //book graph
    TGraph *KNN_eff_1 = new TGraph(34,trigger,efficiency_1); KNN_eff_1->SetMarkerStyle(21); KNN_eff_1->SetMarkerColor(2);//red
    TGraph *EMTF_eff_1 = new TGraph(34,trigger,EMTF_efficiency_1); EMTF_eff_1->SetMarkerStyle(21); EMTF_eff_1->SetMarkerColor(1);//black
                  
    TGraph *KNN_eff_2 = new TGraph(34,trigger,efficiency_2); KNN_eff_2->SetMarkerStyle(21); KNN_eff_2->SetMarkerColor(2);//red
    TGraph *EMTF_eff_2 = new TGraph(34,trigger,EMTF_efficiency_2); EMTF_eff_2->SetMarkerStyle(21); EMTF_eff_2->SetMarkerColor(1);//black
                  
    TGraph *KNN_eff_3 = new TGraph(34,trigger,efficiency_3); KNN_eff_3->SetMarkerStyle(21); KNN_eff_3->SetMarkerColor(2);//red
    TGraph *EMTF_eff_3 = new TGraph(34,trigger,EMTF_efficiency_3); EMTF_eff_3->SetMarkerStyle(21); EMTF_eff_3->SetMarkerColor(1);//black
    
    TCanvas *C1=new TCanvas("C1","Efficiency_1",700,500);
    TCanvas *C2=new TCanvas("C2","Efficiency_2",700,500);
    TCanvas *C3=new TCanvas("C3","Efficiency_3",700,500);
                  
    TMultiGraph *mg_1=new TMultiGraph();
    C1->cd();
    mg_1->SetTitle("Mode 14 trigger effciency pT > 8 GeV");
    mg_1->Add(KNN_eff_1);
    mg_1->Add(EMTF_eff_1);
    mg_1->Draw();
    mg_1->Write();
                  
    TMultiGraph *mg_2=new TMultiGraph();
    C2->cd();
    mg_2->SetTitle("Mode 14 trigger effciency pT > 16 GeV");
    mg_2->Add(KNN_eff_2);
    mg_2->Add(EMTF_eff_2);
    mg_2->Draw();
    mg_2->Write();
                  
    TMultiGraph *mg_3=new TMultiGraph();
    C3->cd();
    mg_3->SetTitle("Mode 14 trigger effciency pT > 24 GeV");
    mg_3->Add(KNN_eff_3);
    mg_3->Add(EMTF_eff_3);
    mg_3->Draw();
    mg_3->Write();
    
    
    //=====
    //test
    //=====
    Deviation_dPhiSum3_test->Write();
    Deviation_FR_1_test->Write();
    Deviation_dTh_13_test->Write();
    Deviation_bend_1_test->Write();
    Deviation_theta_test->Write();
    Deviation_dPhi_12_test->Write();
    Deviation_dPhi_23_test->Write();
    Deviation_dPhi_34_test->Write();
    Deviation_GEN_pt_test->Write();
    EMTF_Deviation_GEN_pt_test->Write();
    
    Deviation_dPhiSum3_test_1_8->Write();
    Deviation_FR_1_test_1_8->Write();
    Deviation_dTh_13_test_1_8->Write();
    Deviation_bend_1_test_1_8->Write();
    Deviation_theta_test_1_8->Write();
    Deviation_dPhi_12_test_1_8->Write();
    Deviation_dPhi_23_test_1_8->Write();
    Deviation_dPhi_34_test_1_8->Write();
    Deviation_GEN_pt_test_1_8->Write();
    EMTF_Deviation_GEN_pt_test_1_8->Write();
    
    Deviation_dPhiSum3_test_8_30->Write();
    Deviation_FR_1_test_8_30->Write();
    Deviation_dTh_13_test_8_30->Write();
    Deviation_bend_1_test_8_30->Write();
    Deviation_theta_test_8_30->Write();
    Deviation_dPhi_12_test_8_30->Write();
    Deviation_dPhi_23_test_8_30->Write();
    Deviation_dPhi_34_test_8_30->Write();
    Deviation_GEN_pt_test_8_30->Write();
    EMTF_Deviation_GEN_pt_test_8_30->Write();
    
    Deviation_dPhiSum3_test_30_120->Write();
    Deviation_FR_1_test_30_120->Write();
    Deviation_dTh_13_test_30_120->Write();
    Deviation_bend_1_test_30_120->Write();
    Deviation_theta_test_30_120->Write();
    Deviation_dPhi_12_test_30_120->Write();
    Deviation_dPhi_23_test_30_120->Write();
    Deviation_dPhi_34_test_30_120->Write();
    Deviation_GEN_pt_test_30_120->Write();
    EMTF_Deviation_GEN_pt_test_30_120->Write();
    
    Deviation_dPhiSum3_test_120_1000->Write();
    Deviation_FR_1_test_120_1000->Write();
    Deviation_dTh_13_test_120_1000->Write();
    Deviation_bend_1_test_120_1000->Write();
    Deviation_theta_test_120_1000->Write();
    Deviation_dPhi_12_test_120_1000->Write();
    Deviation_dPhi_23_test_120_1000->Write();
    Deviation_dPhi_34_test_120_1000->Write();
    Deviation_GEN_pt_test_120_1000->Write();
    EMTF_Deviation_GEN_pt_test_120_1000->Write();
    
    //=====
    //train
    //=====
    Deviation_dPhiSum3_train->Write();
    Deviation_FR_1_train->Write();
    Deviation_dTh_13_train->Write();
    Deviation_bend_1_train->Write();
    Deviation_theta_train->Write();
    Deviation_dPhi_12_train->Write();
    Deviation_dPhi_23_train->Write();
    Deviation_dPhi_34_train->Write();
    Deviation_GEN_pt_train->Write();
    EMTF_Deviation_GEN_pt_train->Write();
    
    Deviation_dPhiSum3_train_1_8->Write();
    Deviation_FR_1_train_1_8->Write();
    Deviation_dTh_13_train_1_8->Write();
    Deviation_bend_1_train_1_8->Write();
    Deviation_theta_train_1_8->Write();
    Deviation_dPhi_12_train_1_8->Write();
    Deviation_dPhi_23_train_1_8->Write();
    Deviation_dPhi_34_train_1_8->Write();
    Deviation_GEN_pt_train_1_8->Write();
    EMTF_Deviation_GEN_pt_train_1_8->Write();
    
    Deviation_dPhiSum3_train_8_30->Write();
    Deviation_FR_1_train_8_30->Write();
    Deviation_dTh_13_train_8_30->Write();
    Deviation_bend_1_train_8_30->Write();
    Deviation_theta_train_8_30->Write();
    Deviation_dPhi_12_train_8_30->Write();
    Deviation_dPhi_23_train_8_30->Write();
    Deviation_dPhi_34_train_8_30->Write();
    Deviation_GEN_pt_train_8_30->Write();
    EMTF_Deviation_GEN_pt_train_8_30->Write();
    
    Deviation_dPhiSum3_train_30_120->Write();
    Deviation_FR_1_train_30_120->Write();
    Deviation_dTh_13_train_30_120->Write();
    Deviation_bend_1_train_30_120->Write();
    Deviation_theta_train_30_120->Write();
    Deviation_dPhi_12_train_30_120->Write();
    Deviation_dPhi_23_train_30_120->Write();
    Deviation_dPhi_34_train_30_120->Write();
    Deviation_GEN_pt_train_30_120->Write();
    EMTF_Deviation_GEN_pt_train_30_120->Write();
    
    Deviation_dPhiSum3_train_120_1000->Write();
    Deviation_FR_1_train_120_1000->Write();
    Deviation_dTh_13_train_120_1000->Write();
    Deviation_bend_1_train_120_1000->Write();
    Deviation_theta_train_120_1000->Write();
    Deviation_dPhi_12_train_120_1000->Write();
    Deviation_dPhi_23_train_120_1000->Write();
    Deviation_dPhi_34_train_120_1000->Write();
    Deviation_GEN_pt_train_120_1000->Write();
    EMTF_Deviation_GEN_pt_train_120_1000->Write();
    
    //KNN
    //std::cout << "D of train: " << Deviation_train << std::endl;
    //std::cout << "D of test: " << Deviation_test << std::endl;
    std::cout << "In the order of train and test: overall train, test; 1-8 train, test; 8-30 train,test; 30-120 train, test; 120-1000 train,test;" << std::endl;
    std::cout << Standard_Deviation_train << std::endl;
    std::cout << Standard_Deviation_test << std::endl;
    std::cout << Standard_Deviation_train_1_8 << std::endl;
    std::cout << Standard_Deviation_test_1_8 << std::endl;
    std::cout << Standard_Deviation_train_8_30 << std::endl;
    std::cout << Standard_Deviation_test_8_30 << std::endl;
    std::cout << Standard_Deviation_train_30_120 << std::endl;
    std::cout << Standard_Deviation_test_30_120 << std::endl;
    std::cout << Standard_Deviation_train_120_1000 << std::endl;
    std::cout << Standard_Deviation_test_120_1000 << std::endl;
    
    //EMTF peformance
    //std::cout << "EMTF D of train: " << EMTF_Deviation_train << std::endl;
    //std::cout << "EMTF D of test: " << EMTF_Deviation_test << std::endl;
    std::cout << "****************" << std::endl;
    std::cout << "train events: " << train_events << std::endl;
    std::cout << "test events: " << test_events << std::endl;
    std::cout << "EMTF SD of train: " << EMTF_Standard_Deviation_train << std::endl;
    std::cout << "EMTF SD of test: " << EMTF_Standard_Deviation_test << std::endl;
    
    std::cout << "***1-8 GeV***" << std::endl;
    std::cout << "train events: " << train_events_1_8 << std::endl;
    std::cout << "test events: " << test_events_1_8 << std::endl;
    std::cout << "EMTF SD of train: " << EMTF_Standard_Deviation_train_1_8 << std::endl;
    std::cout << "EMTF SD of test: " << EMTF_Standard_Deviation_test_1_8 << std::endl;
    
    std::cout << "***8-30 GeV***" << std::endl;
    std::cout << "train events: " << train_events_8_30 << std::endl;
    std::cout << "test events: " << test_events_8_30 << std::endl;
    std::cout << "EMTF SD of train: " << EMTF_Standard_Deviation_train_8_30 << std::endl;
    std::cout << "EMTF SD of test: " << EMTF_Standard_Deviation_test_8_30 << std::endl;
    
    std::cout << "***30-120 GeV***" << std::endl;
    std::cout << "train events: " << train_events_30_120 << std::endl;
    std::cout << "test events: " << test_events_30_120 << std::endl;
    std::cout << "EMTF SD of train: " << EMTF_Standard_Deviation_train_30_120 << std::endl;
    std::cout << "EMTF SD of test: " << EMTF_Standard_Deviation_test_30_120 << std::endl;
    
    std::cout << "***120-1000 GeV***" << std::endl;
    std::cout << "train events: " << train_events_120_1000 << std::endl;
    std::cout << "test events: " << test_events_120_1000 << std::endl;
    std::cout << "EMTF SD of train: " << EMTF_Standard_Deviation_train_120_1000 << std::endl;
    std::cout << "EMTF SD of test: " << EMTF_Standard_Deviation_test_120_1000 << std::endl;
    
    
  //std::cout << "\nExiting ReadMVAOut_KNN()\n";

} // End void ReadMVAOut()
