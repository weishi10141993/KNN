void Muon_trigger_16GeV()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Thu Mar  2 17:07:10 2017) by ROOT version6.06/02
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",439,151,1187,723);
   Canvas_1->Range(-16.625,-0.1312475,112.625,1.181228);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("Mode 14 trigger efficiency pT > 16.000000 GeV");
   
   Double_t Graph_fx1[59] = {
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
   Double_t Graph_fy1[59] = {
   0.001244721,
   0.001232196,
   0.001575117,
   0.003184531,
   0.005364045,
   0.008764242,
   0.01398399,
   0.01992162,
   0.03265245,
   0.05210856,
   0.08756174,
   0.1329841,
   0.2073738,
   0.2864756,
   0.3936278,
   0.5017981,
   0.5894645,
   0.6565987,
   0.7217951,
   0.7887844,
   0.8190841,
   0.8699293,
   0.8806319,
   0.9015638,
   0.9127713,
   0.9303688,
   0.9287351,
   0.9427196,
   0.9403974,
   0.9470147,
   0.9542024,
   0.9556733,
   0.9559102,
   0.9650411,
   0.9556779,
   0.959905,
   0.9661972,
   0.9584044,
   0.9674743,
   0.963715,
   0.9656239,
   0.9662276,
   0.9621105,
   0.9741697,
   0.9629213,
   0.9654235,
   0.9688854,
   0.9659044,
   0.9678179,
   0.9666753,
   0.9672493,
   0.9705336,
   0.9827586,
   0.9883582,
   0.9874891,
   0.9919905,
   0.9919113,
   0.9949882,
   0.9932266};
   TGraph *graph = new TGraph(59,Graph_fx1,Graph_fy1);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerColor(2);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,0,104.4);
   Graph_Graph1->SetMinimum(0);
   Graph_Graph1->SetMaximum(1.094364);
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
   Double_t Graph_fy2[59] = {
   0.0004000889,
   0.0006891943,
   0.001834314,
   0.008434703,
   0.02287607,
   0.03812445,
   0.06110015,
   0.08569562,
   0.1411958,
   0.2292276,
   0.3645263,
   0.5011082,
   0.6283215,
   0.7327096,
   0.8170856,
   0.8723375,
   0.9065448,
   0.9254575,
   0.9333124,
   0.948959,
   0.9517674,
   0.9544101,
   0.9625512,
   0.9693264,
   0.9695326,
   0.9613883,
   0.9676902,
   0.9677497,
   0.9659063,
   0.9669165,
   0.9750195,
   0.9724003,
   0.9678117,
   0.9747356,
   0.9684241,
   0.971488,
   0.9674491,
   0.9659052,
   0.9631596,
   0.9713715,
   0.9666552,
   0.9729821,
   0.9677762,
   0.9749077,
   0.9659176,
   0.970474,
   0.9692792,
   0.964657,
   0.9701727,
   0.9701467,
   0.9673454,
   0.9691717,
   0.9996921,
   1,
   0.999709,
   0.9991101,
   0.9991013,
   0.9994104,
   0.9993842};
   graph = new TGraph(59,Graph_fx2,Graph_fy2);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0,104.4);
   Graph_Graph2->SetMinimum(0);
   Graph_Graph2->SetMaximum(1.09996);
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
   
   TPaveText *pt = new TPaveText(0.15,0.9350832,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("Mode 14 trigger efficiency pT > 16.000000 GeV");
   pt->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
