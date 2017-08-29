void k1()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Mon Mar 13 15:18:52 2017) by ROOT version6.06/02
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",264,94,1412,784);
   Canvas_1->Range(-16.625,0.9511807,112.625,6.55988);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("Mode 14 log(rate)vs 0.900000 efficiency cut");
   
   
   Double_t k1[59] = {
   5.795057,
   5.547414,
   5.205351,
   4.915685,
   4.647852,
   4.474697,
   4.329703,
   4.234543,
   4.154819,
   4.099301,
   4.03563,
   3.992686,
   3.956697,
   3.923607,
   3.885248,
   3.856003,
   3.830075,
   3.811843,
   3.795741,
   3.772395,
   3.7577,
   3.727379,
   3.718419,
   3.704408,
   3.694868,
   3.67339,
   3.65925,
   3.65925,
   3.657247,
   3.639486,
   3.622835,
   3.618466,
   3.613207,
   3.602711,
   3.596817,
   3.579097,
   3.579097,
   3.572523,
   3.560504,
   3.551938,
   3.54108,
   3.544936,
   3.544936,
   3.529174,
   3.520745,
   3.518251,
   3.503927,
   3.518251,
   3.503927,
   3.49038,
   3.481729,
   3.431042,
   3.272538,
   3.232488,
   3.165244,
   3.051924,
   2.742725,
   2.687529,
   2.620136};
   TGraph *graph = new TGraph(59,Graph_fx1,Graph_fy1);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerColor(2);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,0,104.4);
   Graph_Graph1->SetMinimum(2.302644);
   Graph_Graph1->SetMaximum(6.112549);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx2[59] = {
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
   Double_t EMTF[59] = {
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
   graph = new TGraph(59,Graph_fx2,Graph_fy2);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0,104.4);
   Graph_Graph2->SetMinimum(1.308098);
   Graph_Graph2->SetMaximum(6.202963);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2);
   
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
   
   TPaveText *pt = new TPaveText(0.1992199,0.936688,0.8007801,0.995,"blNDC");
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
