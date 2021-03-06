void Mode_14_trigger_40GeV()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Thu Mar  2 22:12:33 2017) by ROOT version6.06/02
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",341,94,935,534);
   Canvas_1->Range(-16.625,-0.1303932,112.625,1.173539);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetGridx();
   Canvas_1->SetGridy();
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("Mode 14 trigger efficiency pT > 40.000000 GeV");
   
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
   0.000133363,
   4.176935e-05,
   0.0002193201,
   0.0002582052,
   0.0007493887,
   0.0009251144,
   0.0008703725,
   0.002351404,
   0.002087371,
   0.002755741,
   0.003951504,
   0.005339512,
   0.004317981,
   0.005921364,
   0.005331302,
   0.006639004,
   0.01059353,
   0.008480881,
   0.00957163,
   0.01410343,
   0.01427825,
   0.01879419,
   0.02945192,
   0.03167602,
   0.03693656,
   0.04707158,
   0.05774519,
   0.07773767,
   0.08707383,
   0.09795813,
   0.1345303,
   0.1455255,
   0.1622938,
   0.186839,
   0.2158169,
   0.2619543,
   0.2497653,
   0.2881009,
   0.3362098,
   0.3578562,
   0.3733242,
   0.427896,
   0.4451133,
   0.4892989,
   0.5153558,
   0.5174825,
   0.5541552,
   0.5438669,
   0.5757457,
   0.6506118,
   0.7111026,
   0.7575833,
   0.8993227,
   0.9146269,
   0.9272621,
   0.9463067,
   0.9472738,
   0.9581368,
   0.9565887};
   TGraph *graph = new TGraph(59,Graph_fx1,Graph_fy1);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerColor(2);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,0,104.4);
   Graph_Graph1->SetMinimum(0);
   Graph_Graph1->SetMaximum(1.053946);
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
   0.0001778173,
   6.265402e-05,
   0.000518393,
   0.001032821,
   0.002208724,
   0.003457007,
   0.005628409,
   0.008164598,
   0.01416431,
   0.02045929,
   0.02891783,
   0.03233931,
   0.03709035,
   0.0429891,
   0.05255141,
   0.06569848,
   0.07357423,
   0.08004761,
   0.1005806,
   0.1218939,
   0.1460909,
   0.1741719,
   0.2120148,
   0.2502005,
   0.2971619,
   0.3277657,
   0.3982585,
   0.4312876,
   0.4753495,
   0.5264926,
   0.5823575,
   0.6077502,
   0.6524209,
   0.6771445,
   0.726825,
   0.7626968,
   0.7589984,
   0.7899761,
   0.8157982,
   0.8288948,
   0.8528704,
   0.8642351,
   0.8707507,
   0.8892989,
   0.8895131,
   0.8939394,
   0.9058685,
   0.8977131,
   0.9010989,
   0.9223293,
   0.926335,
   0.9366101,
   0.9873768,
   0.9925373,
   0.9915624,
   0.9934737,
   0.9904134,
   0.9929245,
   0.9919951};
   graph = new TGraph(59,Graph_fx2,Graph_fy2);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0,104.4);
   Graph_Graph2->SetMinimum(0);
   Graph_Graph2->SetMaximum(1.092815);
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
   
   TPaveText *pt = new TPaveText(0.1722079,0.9363534,0.8277921,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("Mode 14 trigger efficiency pT > 40.000000 GeV");
   pt->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
