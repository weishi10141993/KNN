void k50()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Mon Mar 13 16:54:48 2017) by ROOT version6.06/02
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",264,94,1237,784);
   Canvas_1->Range(-16.625,0.9099007,112.625,6.566398);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetGridx();
   Canvas_1->SetGridy();
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("Mode 14 log(rate)vs 0.900000 efficiency cut");
   
   Double_t Graph_fx37[59] = {
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
   Double_t k50[59] = {
   5.795057,
   5.482469,
   5.111854,
   4.765445,
   4.434553,
   4.224455,
   4.065318,
   3.90725,
   3.773274,
   3.681332,
   3.583085,
   3.485863,
   3.402605,
   3.344785,
   3.270446,
   3.193403,
   3.119586,
   3.104828,
   3.044148,
   3.006038,
   2.956168,
   2.920645,
   2.864511,
   2.821514,
   2.812913,
   2.765669,
   2.728354,
   2.651278,
   2.651278,
   2.614897,
   2.577492,
   2.577492,
   2.542825,
   2.50515,
   2.50515,
   2.469822,
   2.471292,
   2.471292,
   2.432969,
   2.403121,
   2.372912,
   2.348305,
   2.350248,
   2.303196,
   2.354108,
   2.33646,
   2.303196,
   2.324282,
   2.33646,
   2.303196,
   2.271842,
   2.184691,
   1.90309,
   1.875061,
   1.875061,
   1.778151,
   1.78533,
   1.69897,
   1.681241};
   TGraph *graph = new TGraph(59,Graph_fx37,Graph_fy37);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerColor(2);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph37 = new TH1F("Graph_Graph37","Graph",100,0,104.4);
   Graph_Graph37->SetMinimum(1.26986);
   Graph_Graph37->SetMaximum(6.206439);
   Graph_Graph37->SetDirectory(0);
   Graph_Graph37->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph37->SetLineColor(ci);
   Graph_Graph37->GetXaxis()->SetLabelFont(42);
   Graph_Graph37->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph37->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph37->GetXaxis()->SetTitleFont(42);
   Graph_Graph37->GetYaxis()->SetLabelFont(42);
   Graph_Graph37->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph37->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph37->GetYaxis()->SetTitleFont(42);
   Graph_Graph37->GetZaxis()->SetLabelFont(42);
   Graph_Graph37->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph37->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph37->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph37);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx38[59] = {
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
   Double_t Graph_fy38[59] = {
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
   graph = new TGraph(59,Graph_fx38,Graph_fy38);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph38 = new TH1F("Graph_Graph38","Graph",100,0,104.4);
   Graph_Graph38->SetMinimum(1.308098);
   Graph_Graph38->SetMaximum(6.202963);
   Graph_Graph38->SetDirectory(0);
   Graph_Graph38->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph38->SetLineColor(ci);
   Graph_Graph38->GetXaxis()->SetLabelFont(42);
   Graph_Graph38->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph38->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph38->GetXaxis()->SetTitleFont(42);
   Graph_Graph38->GetYaxis()->SetLabelFont(42);
   Graph_Graph38->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph38->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph38->GetYaxis()->SetTitleFont(42);
   Graph_Graph38->GetZaxis()->SetLabelFont(42);
   Graph_Graph38->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph38->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph38->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph38);
   
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
