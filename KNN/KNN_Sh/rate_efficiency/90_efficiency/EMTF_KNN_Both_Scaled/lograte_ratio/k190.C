void k190()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 11 20:42:49 2017) by ROOT version6.06/02
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",260,94,1416,829);
   Canvas_1->Range(-16.625,0.815873,112.625,6.581244);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("Mode 14 log(rate)vs 0.900000 efficiency cut");
   
   Double_t Graph_fx43[59] = {
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
   Double_t k190[59] = {
   5.795057,
   5.491758,
   5.117768,
   4.771734,
   4.461063,
   4.232793,
   4.065766,
   3.904229,
   3.780533,
   3.657438,
   3.558829,
   3.474944,
   3.392697,
   3.312177,
   3.235528,
   3.139879,
   3.077004,
   3.042969,
   2.968483,
   2.938019,
   2.909556,
   2.829947,
   2.767898,
   2.74351,
   2.7348,
   2.69897,
   2.649335,
   2.61066,
   2.598791,
   2.576341,
   2.52763,
   2.536558,
   2.501059,
   2.4843,
   2.501059,
   2.460898,
   2.460898,
   2.471292,
   2.418301,
   2.390935,
   2.367356,
   2.348305,
   2.350248,
   2.281033,
   2.344392,
   2.311754,
   2.276462,
   2.281033,
   2.311754,
   2.276462,
   2.243038,
   2.176091,
   1.977724,
   1.880814,
   1.832509,
   1.770852,
   1.770852,
   1.60206,
   1.755875};
   TGraph *graph = new TGraph(59,Graph_fx43,Graph_fy43);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerColor(2);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph43 = new TH1F("Graph_Graph43","Graph",100,0,104.4);
   Graph_Graph43->SetMinimum(1.18276);
   Graph_Graph43->SetMaximum(6.214357);
   Graph_Graph43->SetDirectory(0);
   Graph_Graph43->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph43->SetLineColor(ci);
   Graph_Graph43->GetXaxis()->SetLabelFont(42);
   Graph_Graph43->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph43->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph43->GetXaxis()->SetTitleFont(42);
   Graph_Graph43->GetYaxis()->SetLabelFont(42);
   Graph_Graph43->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph43->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph43->GetYaxis()->SetTitleFont(42);
   Graph_Graph43->GetZaxis()->SetLabelFont(42);
   Graph_Graph43->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph43->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph43->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph43);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx44[59] = {
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
   Double_t Graph_fy44[59] = {
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
   graph = new TGraph(59,Graph_fx44,Graph_fy44);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph44 = new TH1F("Graph_Graph44","Graph",100,0,104.4);
   Graph_Graph44->SetMinimum(1.308098);
   Graph_Graph44->SetMaximum(6.202963);
   Graph_Graph44->SetDirectory(0);
   Graph_Graph44->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph44->SetLineColor(ci);
   Graph_Graph44->GetXaxis()->SetLabelFont(42);
   Graph_Graph44->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph44->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph44->GetXaxis()->SetTitleFont(42);
   Graph_Graph44->GetYaxis()->SetLabelFont(42);
   Graph_Graph44->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph44->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph44->GetYaxis()->SetTitleFont(42);
   Graph_Graph44->GetZaxis()->SetLabelFont(42);
   Graph_Graph44->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph44->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph44->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph44);
   
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
