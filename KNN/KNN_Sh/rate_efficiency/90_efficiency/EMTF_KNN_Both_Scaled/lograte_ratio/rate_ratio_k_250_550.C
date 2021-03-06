void rate_ratio_k_250_550()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Mon Mar 13 21:41:53 2017) by ROOT version6.06/02
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",264,94,1237,784);
   Canvas_1->Range(-14.2985,0.88625,112.3665,1.12375);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetGridx();
   Canvas_1->SetGridy();
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx51[59] = {
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
   22.96858,
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
   Double_t Graph_fy51[59] = {
   1,
   1.00586,
   1.00052,
   0.9949961,
   0.9915517,
   0.9958504,
   1.000472,
   0.9970329,
   1.000396,
   0.9983905,
   0.9868149,
   0.9995801,
   0.9893542,
   0.9888771,
   0.9897858,
   0.9773063,
   0.9691905,
   0.9822472,
   0.9647252,
   0.9703167,
   0.9658294,
   0.9631618,
   0.9476215,
   0.9592479,
   0.9603659,
   0.9601686,
   0.9413749,
   0.936515,
   0.9345453,
   0.9279414,
   0.9286995,
   0.9385703,
   0.9344455,
   0.9335409,
   0.9549945,
   0.9368508,
   0.9448919,
   0.9529681,
   0.9448583,
   0.9381895,
   0.9372984,
   0.940523,
   0.9471362,
   0.9332313,
   0.9578274,
   0.9351052,
   0.9528271,
   0.9500304,
   0.957544,
   0.9883927,
   1,
   1.027781,
   1.057029,
   1.054746,
   1.043677,
   1.003877,
   1.029261,
   1.031963,
   1.031963};
   TGraph *graph = new TGraph(59,Graph_fx51,Graph_fy51);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetLineColor(5);
   graph->SetMarkerColor(5);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph_Graph4751 = new TH1F("Graph_Graph_Graph4751","Graph",100,0,104.4);
   Graph_Graph_Graph4751->SetMinimum(0.9150326);
   Graph_Graph_Graph4751->SetMaximum(1.069938);
   Graph_Graph_Graph4751->SetDirectory(0);
   Graph_Graph_Graph4751->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph4751->SetLineColor(ci);
   Graph_Graph_Graph4751->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph4751->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph4751->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph4751->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph4751->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph4751->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph4751->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph4751->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph4751->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph4751->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph4751->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph4751->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph4751);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx52[59] = {
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
   17.9975,
   19,
   20,
   21,
   22,
   22.96858,
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
   Double_t Graph_fy52[59] = {
   1,
   1.006652,
   1.001212,
   0.9957429,
   0.9923202,
   0.9979406,
   1.002483,
   0.9975721,
   1.001371,
   0.9988525,
   0.9875616,
   1.004972,
   0.9954218,
   0.9970115,
   1.000142,
   0.9844017,
   0.9746159,
   0.988702,
   0.9712777,
   0.9726763,
   0.9663544,
   0.966224,
   0.9572123,
   0.9641741,
   0.9626398,
   0.96079,
   0.9533774,
   0.9389405,
   0.9387995,
   0.9288378,
   0.9311598,
   0.9501724,
   0.9423177,
   0.941366,
   0.9630399,
   0.9502414,
   0.9559918,
   0.9669902,
   0.9583634,
   0.9449487,
   0.9489433,
   0.9438608,
   0.9511466,
   0.9235529,
   0.961883,
   0.9468285,
   0.9649187,
   0.9318909,
   0.9638724,
   0.9781421,
   0.9875178,
   1.019408,
   1.059313,
   1.054746,
   1.040586,
   1.029405,
   1.058958,
   1.014196,
   1.031963};
   graph = new TGraph(59,Graph_fx52,Graph_fy52);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetLineColor(6);
   graph->SetMarkerColor(6);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph_Graph4852 = new TH1F("Graph_Graph_Graph4852","Graph",100,0,104.4);
   Graph_Graph_Graph4852->SetMinimum(0.9099769);
   Graph_Graph_Graph4852->SetMaximum(1.072889);
   Graph_Graph_Graph4852->SetDirectory(0);
   Graph_Graph_Graph4852->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph4852->SetLineColor(ci);
   Graph_Graph_Graph4852->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph4852->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph4852->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph4852->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph4852->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph4852->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph4852->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph4852->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph4852->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph4852->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph4852->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph4852->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph4852);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx53[59] = {
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
   23.9595,
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
   Double_t Graph_fy53[59] = {
   1,
   1.005384,
   1.004577,
   0.9962782,
   0.9935089,
   1.004575,
   1.004562,
   1.00378,
   1.007035,
   1.004652,
   0.9917899,
   1.005775,
   0.9952761,
   0.9976029,
   1.000356,
   0.9922933,
   0.985161,
   0.9956872,
   0.9760661,
   0.9848511,
   0.9735098,
   0.9761816,
   0.9627694,
   0.9677621,
   0.9626398,
   0.9626381,
   0.9550672,
   0.9377326,
   0.9437586,
   0.9205792,
   0.9321335,
   0.9439911,
   0.9428292,
   0.9451432,
   0.9625152,
   0.9484769,
   0.9571188,
   0.9681081,
   0.9607072,
   0.9663953,
   0.9687948,
   0.9748531,
   0.9789632,
   0.9397061,
   0.9893278,
   0.9712557,
   0.9762561,
   0.951938,
   0.9733908,
   0.9952501,
   1.011725,
   1.043567,
   1.059313,
   1.075523,
   1.055657,
   1.029405,
   1.033173,
   1.004821,
   1.027637};
   graph = new TGraph(59,Graph_fx53,Graph_fy53);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetLineColor(7);
   graph->SetMarkerColor(7);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph_Graph4953 = new TH1F("Graph_Graph_Graph4953","Graph",100,0,104.4);
   Graph_Graph_Graph4953->SetMinimum(0.9050848);
   Graph_Graph_Graph4953->SetMaximum(1.091017);
   Graph_Graph_Graph4953->SetDirectory(0);
   Graph_Graph_Graph4953->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph4953->SetLineColor(ci);
   Graph_Graph_Graph4953->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph4953->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph4953->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph4953->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph4953->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph4953->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph4953->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph4953->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph4953->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph4953->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph4953->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph4953->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph4953);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx54[59] = {
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
   23.9595,
   25,
   26,
   27,
   27.969,
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
   Double_t Graph_fy54[59] = {
   1,
   1.00599,
   1.005184,
   1.00044,
   0.9980166,
   1.005956,
   1.005949,
   1.00554,
   1.007035,
   1.004823,
   0.9926303,
   1.010719,
   0.9959067,
   1.001783,
   1.003792,
   0.991852,
   0.984557,
   0.9946981,
   0.9776711,
   0.9848511,
   0.9703167,
   0.9738985,
   0.969361,
   0.9755946,
   0.9700737,
   0.972715,
   0.9616476,
   0.9498593,
   0.9558925,
   0.9332462,
   0.9354957,
   0.9574707,
   0.9478588,
   0.9483138,
   0.9619891,
   0.9537155,
   0.9642649,
   0.9751987,
   0.9725068,
   0.9637726,
   0.9674497,
   0.9769201,
   0.977604,
   0.9476992,
   0.9879475,
   0.9697274,
   0.9900894,
   0.9647588,
   0.9871835,
   1.016172,
   1.020816,
   1.061731,
   1.089109,
   1.070497,
   1.083222,
   1.06176,
   1.06586,
   1.048565,
   1.085851};
   graph = new TGraph(59,Graph_fx54,Graph_fy54);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetLineColor(8);
   graph->SetMarkerColor(8);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph_Graph5054 = new TH1F("Graph_Graph_Graph5054","Graph",100,0,104.4);
   Graph_Graph_Graph5054->SetMinimum(0.9176599);
   Graph_Graph_Graph5054->SetMaximum(1.104695);
   Graph_Graph_Graph5054->SetDirectory(0);
   Graph_Graph_Graph5054->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph5054->SetLineColor(ci);
   Graph_Graph_Graph5054->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph5054->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph5054->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph5054->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph5054->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph5054->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph5054->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph5054->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph5054->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph5054->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph5054->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph5054->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph5054);
   
   multigraph->Add(graph,"");
   multigraph->Draw("apl");
   multigraph->GetXaxis()->SetTitle("GEN pT[GeV]");
   multigraph->GetXaxis()->SetRange(3,100);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.035);
   multigraph->GetXaxis()->SetTitleSize(0.035);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("log(KNN rate)/log(EMTF rate)");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.035);
   multigraph->GetYaxis()->SetTitleSize(0.035);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0.2765957,0.6598465,0.6560284,0.870844,NULL,"brNDC");
   leg->SetBorderSize(1);

   ci = 1204;
   color = new TColor(ci, 0, 0, 0, " ", 0);
   leg->SetLineColor(ci);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);

   ci = 1203;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   leg->SetFillColor(ci);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph","k=250","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(5);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","k=350","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(6);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","k=450","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(7);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(7);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","k=550","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(8);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(8);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
