void k95()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 11 20:30:19 2017) by ROOT version6.06/02
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",260,94,1416,829);
   Canvas_1->Range(-16.625,0.9511807,112.625,6.55988);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("Mode 14 log(rate)vs 0.900000 efficiency cut");
   
   Double_t Graph_fx23[59] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11,
   12,
   13,
   14,
   15,
   16,
   17,
   18,
   19,
   20,
   21,
   22,
   23,
   24,
   25,
   26,
   27,
   28,
   29,
   30,
   31,
   32,
   33,
   34,
   35,
   36,
   37,
   38,
   39,
   40,
   41,
   42,
   43,
   44,
   45,
   46,
   47,
   48,
   49,
   50,
   55,
   60,
   65,
   70,
   75,
   80,
   85,
   90,
   95};
   Double_t k95[59] = {
   5.795057,
   5.485581,
   5.114391,
   4.768401,
   4.453716,
   4.224274,
   4.062206,
   3.902438,
   3.761778,
   3.645029,
   3.558469,
   3.465532,
   3.365862,
   3.305566,
   3.236285,
   3.155336,
   3.087781,
   3.067815,
   3.011993,
   2.963316,
   2.923762,
   2.860937,
   2.808886,
   2.761176,
   2.752048,
   2.737193,
   2.695482,
   2.642465,
   2.642465,
   2.612784,
   2.576341,
   2.576341,
   2.546543,
   2.506505,
   2.523746,
   2.50515,
   2.49276,
   2.50515,
   2.480007,
   2.419956,
   2.374748,
   2.369216,
   2.369216,
   2.281033,
   2.369216,
   2.346353,
   2.278754,
   2.281033,
   2.311754,
   2.278754,
   2.255273,
   2.123852,
   1.913814,
   1.857332,
   1.819544,
   1.792392,
   1.748188,
   1.724276,
   1.724276};
   TGraph *graph = new TGraph(59,Graph_fx23,Graph_fy23);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerColor(2);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph23 = new TH1F("Graph_Graph23","Graph",100,0,104.4);
   Graph_Graph23->SetMinimum(1.317198);
   Graph_Graph23->SetMaximum(6.202135);
   Graph_Graph23->SetDirectory(0);
   Graph_Graph23->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph23->SetLineColor(ci);
   Graph_Graph23->GetXaxis()->SetLabelFont(42);
   Graph_Graph23->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph23->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph23->GetXaxis()->SetTitleFont(42);
   Graph_Graph23->GetYaxis()->SetLabelFont(42);
   Graph_Graph23->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph23->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph23->GetYaxis()->SetTitleFont(42);
   Graph_Graph23->GetZaxis()->SetLabelFont(42);
   Graph_Graph23->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph23->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph23->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph23);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx24[59] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11,
   12,
   13,
   14,
   15,
   16,
   17,
   18,
   19,
   20,
   21,
   22,
   23,
   24,
   25,
   26,
   27,
   28,
   29,
   30,
   31,
   32,
   33,
   34,
   35,
   36,
   37,
   38,
   39,
   40,
   41,
   42,
   43,
   44,
   45,
   46,
   47,
   48,
   49,
   50,
   55,
   60,
   65,
   70,
   75,
   80,
   85,
   90,
   95};
   Double_t Graph_fy24[59] = {
   5.795057,
   5.463721,
   5.117967,
   4.797662,
   4.502318,
   4.254645,
   4.069076,
   3.914977,
   3.783546,
   3.668852,
   3.614686,
   3.474508,
   3.431685,
   3.34986,
   3.270446,
   3.210853,
   3.180413,
   3.117934,
   3.092721,
   3.017451,
   3.017451,
   2.960946,
   2.9154,
   2.854306,
   2.840106,
   2.808211,
   2.790988,
   2.761928,
   2.744293,
   2.744293,
   2.703291,
   2.674861,
   2.657056,
   2.634477,
   2.599883,
   2.586587,
   2.586587,
   2.564666,
   2.564666,
   2.509203,
   2.49276,
   2.466868,
   2.466868,
   2.439333,
   2.439333,
   2.439333,
   2.389166,
   2.396199,
   2.396199,
   2.303196,
   2.245513,
   2.117271,
   1.892095,
   1.838849,
   1.812913,
   1.792392,
   1.748188,
   1.716003,
   1.716003};
   graph = new TGraph(59,Graph_fx24,Graph_fy24);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph24 = new TH1F("Graph_Graph24","Graph",100,0,104.4);
   Graph_Graph24->SetMinimum(1.308098);
   Graph_Graph24->SetMaximum(6.202963);
   Graph_Graph24->SetDirectory(0);
   Graph_Graph24->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph24->SetLineColor(ci);
   Graph_Graph24->GetXaxis()->SetLabelFont(42);
   Graph_Graph24->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph24->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph24->GetXaxis()->SetTitleFont(42);
   Graph_Graph24->GetYaxis()->SetLabelFont(42);
   Graph_Graph24->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph24->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph24->GetYaxis()->SetTitleFont(42);
   Graph_Graph24->GetZaxis()->SetLabelFont(42);
   Graph_Graph24->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph24->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph24->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph24);
   
   multigraph->Add(graph,"");
   multigraph->Draw("alp");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.035);
   multigraph->GetXaxis()->SetTitleSize(0.035);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.035);
   multigraph->GetYaxis()->SetTitleSize(0.035);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TPaveText *pt = new TPaveText(0.1855446,0.9369589,0.8144554,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("Mode 14 log(rate)vs 0.900000 efficiency cut");
   pt->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
