void rate_ratio_k_75_190_zoom_in()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Mon Mar 13 22:16:58 2017) by ROOT version6.06/02
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",264,94,1237,784);
   Canvas_1->Range(-1.115001,0.898696,55.755,1.011304);
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
   
   Double_t Graph_fx65[59] = {
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
   24.99992,
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
   Double_t Graph_fy65[59] = {
   1,
   1.003686,
   0.9990184,
   0.9936957,
   0.9887151,
   0.992581,
   0.9982099,
   0.997379,
   0.9958444,
   0.9928078,
   0.9861947,
   0.9987782,
   0.9835687,
   0.9885613,
   0.9913917,
   0.9845882,
   0.9735261,
   0.9864054,
   0.9714168,
   0.983617,
   0.9686073,
   0.9654134,
   0.958287,
   0.9707621,
   0.970984,
   0.9735732,
   0.9648365,
   0.9654553,
   0.9618091,
   0.9539973,
   0.9478421,
   0.9579163,
   0.9593336,
   0.9467363,
   0.9593336,
   0.9548575,
   0.9587951,
   0.9669902,
   0.9422829,
   0.9528663,
   0.9404804,
   0.9479453,
   0.9503516,
   0.9450743,
   0.9594606,
   0.9502856,
   0.9585081,
   0.9620866,
   0.9673917,
   0.9923415,
   0.9898478,
   1.012159,
   1.027688,
   1.016523,
   1.027806,
   1.003877,
   1.021246,
   0.9950857,
   0.9950857};
   TGraph *graph = new TGraph(59,Graph_fx65,Graph_fy65);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph65 = new TH1F("Graph_Graph65","Graph",100,0,104.4);
   Graph_Graph65->SetMinimum(0.9317479);
   Graph_Graph65->SetMaximum(1.036539);
   Graph_Graph65->SetDirectory(0);
   Graph_Graph65->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph65->SetLineColor(ci);
   Graph_Graph65->GetXaxis()->SetLabelFont(42);
   Graph_Graph65->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph65->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph65->GetXaxis()->SetTitleFont(42);
   Graph_Graph65->GetYaxis()->SetLabelFont(42);
   Graph_Graph65->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph65->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph65->GetYaxis()->SetTitleFont(42);
   Graph_Graph65->GetZaxis()->SetLabelFont(42);
   Graph_Graph65->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph65->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph65->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph65);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx66[59] = {
   1.021749,
   2.036499,
   2.976083,
   3.990833,
   4.967999,
   5.982749,
   6.997499,
   7.974666,
   8.989416,
   9.966583,
   10.98133,
   11.99608,
   12.97325,
   13.988,
   14.96517,
   15.97992,
   16.99467,
   17.97183,
   18.98658,
   19.96375,
   20.9785,
   21.99325,
   22.97042,
   23.98517,
   24.99992,
   25.97708,
   26.99183,
   27.969,
   28.98375,
   29.9985,
   30.97567,
   31.99042,
   32.96758,
   33.98233,
   34.99708,
   35.97425,
   36.989,
   37.96617,
   38.98092,
   39.99567,
   40.97283,
   41.98758,
   42.96475,
   43.9795,
   44.99425,
   45.97142,
   46.98617,
   47.96333,
   48.97808,
   49.99283,
   54.99142,
   59.99,
   64.98858,
   69.98717,
   74.98575,
   79.98433,
   84.98292,
   89.9815,
   94.98009};
   Double_t Graph_fy66[59] = {
   1.000072,
   1.003816,
   0.999352,
   0.99388,
   0.988984,
   0.992728,
   0.9982,
   0.997048,
   0.995032,
   0.992584,
   0.984808,
   0.997192,
   0.981064,
   0.98812,
   0.989848,
   0.981064,
   0.972856,
   0.985672,
   0.971992,
   0.983368,
   0.959608,
   0.966232,
   0.9586,
   0.968968,
   0.973864,
   0.978904,
   0.964648,
   0.963784,
   0.9622,
   0.955144,
   0.947944,
   0.958024,
   0.96076,
   0.945208,
   0.968824,
   0.962776,
   0.962776,
   0.970984,
   0.962488,
   0.950824,
   0.950536,
   0.947224,
   0.957448,
   0.936136,
   0.95788,
   0.95788,
   0.951976,
   0.952984,
   0.963928,
   0.9874,
   1.00756,
   1.015048,
   1.027576,
   1.019656,
   1.007272,
   0.996184,
   1.02124,
   1.004824,
   1.004824};
   graph = new TGraph(59,Graph_fx66,Graph_fy66);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetLineColor(2);
   graph->SetMarkerColor(2);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph66 = new TH1F("Graph_Graph66","Graph",100,0,104.4);
   Graph_Graph66->SetMinimum(0.9268697);
   Graph_Graph66->SetMaximum(1.036853);
   Graph_Graph66->SetDirectory(0);
   Graph_Graph66->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph66->SetLineColor(ci);
   Graph_Graph66->GetXaxis()->SetLabelFont(42);
   Graph_Graph66->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph66->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph66->GetXaxis()->SetTitleFont(42);
   Graph_Graph66->GetYaxis()->SetLabelFont(42);
   Graph_Graph66->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph66->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph66->GetYaxis()->SetTitleFont(42);
   Graph_Graph66->GetZaxis()->SetLabelFont(42);
   Graph_Graph66->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph66->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph66->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph66);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx67[59] = {
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
   31.99042,
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
   Double_t Graph_fy67[59] = {
   1,
   1.004298,
   0.9993521,
   0.9942153,
   0.9898073,
   0.9934568,
   0.9988835,
   0.9964076,
   0.9946629,
   0.9979522,
   0.984779,
   0.9998742,
   0.9898624,
   0.9872896,
   0.9850874,
   0.9796484,
   0.9695291,
   0.983448,
   0.9723868,
   0.9834619,
   0.9692936,
   0.9676313,
   0.9625369,
   0.9614572,
   0.9623574,
   0.9638585,
   0.9587207,
   0.9560282,
   0.9573927,
   0.9539973,
   0.9517555,
   0.966232,
   0.9532181,
   0.9534655,
   0.9661523,
   0.9653377,
   0.9653377,
   0.9751987,
   0.9669902,
   0.9549642,
   0.9570139,
   0.9641367,
   0.9641367,
   0.9485654,
   0.9704932,
   0.9674099,
   0.9684831,
   0.9656406,
   0.9848243,
   0.991362,
   0.9921506,
   0.9984282,
   1.019726,
   1.006748,
   1.010809,
   0.99606,
   1.008718,
   0.984961,
   0.984961};
   graph = new TGraph(59,Graph_fx67,Graph_fy67);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetLineColor(3);
   graph->SetMarkerColor(3);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph67 = new TH1F("Graph_Graph67","Graph",100,0,104.4);
   Graph_Graph67->SetMinimum(0.9414494);
   Graph_Graph67->SetMaximum(1.026842);
   Graph_Graph67->SetDirectory(0);
   Graph_Graph67->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph67->SetLineColor(ci);
   Graph_Graph67->GetXaxis()->SetLabelFont(42);
   Graph_Graph67->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph67->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph67->GetXaxis()->SetTitleFont(42);
   Graph_Graph67->GetYaxis()->SetLabelFont(42);
   Graph_Graph67->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph67->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph67->GetYaxis()->SetTitleFont(42);
   Graph_Graph67->GetZaxis()->SetLabelFont(42);
   Graph_Graph67->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph67->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph67->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph67);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx68[59] = {
   1.021749,
   2.036499,
   2.976083,
   3.990833,
   4.967999,
   5.982749,
   6.997499,
   7.974666,
   8.989416,
   9.966583,
   10.98133,
   11.99608,
   12.97325,
   13.988,
   14.96517,
   15.97992,
   16.99467,
   17.97183,
   18.98658,
   19.96375,
   20.9785,
   21.99325,
   22.97042,
   23.98517,
   24.99992,
   25.97708,
   26.99183,
   27.969,
   28.98375,
   29.9985,
   30.97567,
   31.99042,
   32.96758,
   33.98233,
   34.99708,
   35.97425,
   36.989,
   37.96617,
   38.98092,
   39.99567,
   40.97283,
   41.98758,
   42.96475,
   43.9795,
   44.99425,
   45.97142,
   46.98617,
   47.96333,
   48.97808,
   49.99283,
   54.99142,
   59.99,
   64.98858,
   69.98717,
   74.98575,
   79.98433,
   84.98292,
   89.9815,
   94.98009};
   Double_t Graph_fy68[59] = {
   1.000072,
   1.004536,
   0.99964,
   0.994312,
   0.990136,
   0.993736,
   0.998344,
   0.996616,
   0.994744,
   0.994312,
   0.984664,
   0.999496,
   0.988696,
   0.987832,
   0.986392,
   0.980488,
   0.969544,
   0.982216,
   0.971272,
   0.981064,
   0.971848,
   0.965944,
   0.958312,
   0.969832,
   0.964648,
   0.964792,
   0.957448,
   0.954712,
   0.956008,
   0.94348,
   0.952264,
   0.962344,
   0.956584,
   0.956584,
   0.969256,
   0.961048,
   0.961048,
   0.973144,
   0.964216,
   0.955,
   0.957016,
   0.957448,
   0.957448,
   0.932392,
   0.968248,
   0.95788,
   0.951976,
   0.949096,
   0.97516,
   0.981352,
   1.000072,
   1.00324,
   1.024984,
   1.00684,
   1.003672,
   0.983944,
   1.008856,
   1.009576,
   1.009576};
   graph = new TGraph(59,Graph_fx68,Graph_fy68);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetLineColor(4);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph68 = new TH1F("Graph_Graph68","Graph",100,0,104.4);
   Graph_Graph68->SetMinimum(0.9230091);
   Graph_Graph68->SetMaximum(1.034342);
   Graph_Graph68->SetDirectory(0);
   Graph_Graph68->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph68->SetLineColor(ci);
   Graph_Graph68->GetXaxis()->SetLabelFont(42);
   Graph_Graph68->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph68->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph68->GetXaxis()->SetTitleFont(42);
   Graph_Graph68->GetYaxis()->SetLabelFont(42);
   Graph_Graph68->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph68->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph68->GetYaxis()->SetTitleFont(42);
   Graph_Graph68->GetZaxis()->SetLabelFont(42);
   Graph_Graph68->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph68->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph68->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph68);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx69[59] = {
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
   29.9985,
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
   Double_t Graph_fy69[59] = {
   1,
   1.004586,
   0.9996534,
   0.9943335,
   0.9901404,
   0.9937348,
   0.9985242,
   0.9962682,
   0.9941272,
   0.9933189,
   0.9850767,
   1.000376,
   0.9899641,
   0.9877362,
   0.9871436,
   0.9798418,
   0.9691905,
   0.9818848,
   0.9697386,
   0.9788924,
   0.967918,
   0.9643941,
   0.9575671,
   0.9644432,
   0.9662643,
   0.9721399,
   0.9537171,
   0.9421172,
   0.9481714,
   0.934552,
   0.9387887,
   0.9561271,
   0.9428292,
   0.9509098,
   0.9635626,
   0.958238,
   0.9565563,
   0.9664284,
   0.9486495,
   0.9478699,
   0.9519216,
   0.9495534,
   0.9495534,
   0.9303826,
   0.9602719,
   0.9450743,
   0.9499185,
   0.94319,
   0.9620866,
   0.981276,
   0.9815664,
   1.012159,
   1.027688,
   1.006748,
   0.9962861,
   0.9709723,
   0.9955239,
   0.9744144,
   0.9797425};
   graph = new TGraph(59,Graph_fx69,Graph_fy69);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetLineColor(5);
   graph->SetMarkerColor(5);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph69 = new TH1F("Graph_Graph69","Graph",100,0,104.4);
   Graph_Graph69->SetMinimum(0.9206521);
   Graph_Graph69->SetMaximum(1.037418);
   Graph_Graph69->SetDirectory(0);
   Graph_Graph69->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph69->SetLineColor(ci);
   Graph_Graph69->GetXaxis()->SetLabelFont(42);
   Graph_Graph69->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph69->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph69->GetXaxis()->SetTitleFont(42);
   Graph_Graph69->GetYaxis()->SetLabelFont(42);
   Graph_Graph69->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph69->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph69->GetYaxis()->SetTitleFont(42);
   Graph_Graph69->GetZaxis()->SetLabelFont(42);
   Graph_Graph69->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph69->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph69->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph69);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx70[59] = {
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
   24.99992,
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
   Double_t Graph_fy70[59] = {
   1,
   1.004812,
   0.9998732,
   0.994415,
   0.9904056,
   0.9944811,
   0.9988007,
   0.9970884,
   0.9992037,
   0.9972272,
   0.9859327,
   1.000376,
   0.9896086,
   0.9888142,
   0.9855647,
   0.9795515,
   0.9712088,
   0.9814005,
   0.9647252,
   0.9769584,
   0.9631755,
   0.9568385,
   0.9587655,
   0.9622773,
   0.95644,
   0.9647672,
   0.9520127,
   0.950536,
   0.9489606,
   0.9387995,
   0.945179,
   0.955225,
   0.9508038,
   0.9472635,
   0.9609321,
   0.9587951,
   0.9587951,
   0.9730483,
   0.9601242,
   0.9514535,
   0.947435,
   0.9413633,
   0.9573792,
   0.9174828,
   0.9485654,
   0.9441909,
   0.9409028,
   0.9339984,
   0.9547629,
   0.9717132,
   0.9827714,
   1.009186,
   1.032846,
   1.028956,
   1.017753,
   0.9796267,
   0.9955239,
   0.9519028,
   0.9577215};
   graph = new TGraph(59,Graph_fx70,Graph_fy70);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetLineColor(6);
   graph->SetMarkerColor(6);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph70 = new TH1F("Graph_Graph70","Graph",100,0,104.4);
   Graph_Graph70->SetMinimum(0.9059464);
   Graph_Graph70->SetMaximum(1.044382);
   Graph_Graph70->SetDirectory(0);
   Graph_Graph70->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph70->SetLineColor(ci);
   Graph_Graph70->GetXaxis()->SetLabelFont(42);
   Graph_Graph70->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph70->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph70->GetXaxis()->SetTitleFont(42);
   Graph_Graph70->GetYaxis()->SetLabelFont(42);
   Graph_Graph70->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph70->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph70->GetYaxis()->SetTitleFont(42);
   Graph_Graph70->GetZaxis()->SetLabelFont(42);
   Graph_Graph70->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph70->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph70->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph70);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx71[59] = {
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
   22.97042,
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
   Double_t Graph_fy71[59] = {
   1,
   1.004917,
   0.9999185,
   0.9945453,
   0.9904591,
   0.9947145,
   0.9988376,
   0.996825,
   0.9991656,
   0.9964452,
   0.9846797,
   0.999958,
   0.9886901,
   0.9893184,
   0.9872222,
   0.9813788,
   0.9702032,
   0.9795685,
   0.965887,
   0.978732,
   0.9635321,
   0.9564072,
   0.952264,
   0.9620044,
   0.9583484,
   0.9632496,
   0.9533774,
   0.9509082,
   0.9528491,
   0.9379578,
   0.9465163,
   0.9565764,
   0.9503168,
   0.9467363,
   0.9712149,
   0.9604548,
   0.9604548,
   0.9725068,
   0.9553872,
   0.9584055,
   0.9533918,
   0.9446853,
   0.9495534,
   0.9185089,
   0.9553489,
   0.9387956,
   0.9499185,
   0.935043,
   0.957544,
   0.9728,
   0.9827714,
   1.013629,
   1.042827,
   1.022821,
   1.024501,
   0.9879825,
   1.004397,
   0.9459476,
   0.9950857};
   graph = new TGraph(59,Graph_fx71,Graph_fy71);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetLineColor(7);
   graph->SetMarkerColor(7);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph71 = new TH1F("Graph_Graph71","Graph",100,0,104.4);
   Graph_Graph71->SetMinimum(0.906077);
   Graph_Graph71->SetMaximum(1.055259);
   Graph_Graph71->SetDirectory(0);
   Graph_Graph71->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph71->SetLineColor(ci);
   Graph_Graph71->GetXaxis()->SetLabelFont(42);
   Graph_Graph71->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph71->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph71->GetXaxis()->SetTitleFont(42);
   Graph_Graph71->GetYaxis()->SetLabelFont(42);
   Graph_Graph71->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph71->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph71->GetYaxis()->SetTitleFont(42);
   Graph_Graph71->GetZaxis()->SetLabelFont(42);
   Graph_Graph71->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph71->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph71->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph71);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx72[59] = {
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
   35.97425,
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
   Double_t Graph_fy72[59] = {
   1,
   1.005032,
   0.999888,
   0.9945774,
   0.9907534,
   0.9950311,
   0.999434,
   0.9965609,
   0.9995647,
   0.9966022,
   0.9847461,
   1.000084,
   0.9883824,
   0.9883715,
   0.9894776,
   0.9796484,
   0.9699791,
   0.9760829,
   0.964141,
   0.9721739,
   0.9653025,
   0.956191,
   0.9486414,
   0.9614572,
   0.9606522,
   0.9620246,
   0.9530374,
   0.9475265,
   0.9520791,
   0.9469802,
   0.9442816,
   0.954318,
   0.9448596,
   0.9483138,
   0.9656377,
   0.950248,
   0.9502414,
   0.9612881,
   0.9435755,
   0.9456835,
   0.9519216,
   0.9479453,
   0.9487512,
   0.9215523,
   0.9586457,
   0.9459537,
   0.9518627,
   0.9490689,
   0.9629818,
   0.9760233,
   0.9827714,
   1.012159,
   1.030281,
   1.025909,
   1.014306,
   0.9879825,
   1.012964,
   0.9744144,
   0.9744144};
   graph = new TGraph(59,Graph_fx72,Graph_fy72);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetLineColor(8);
   graph->SetMarkerColor(8);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph72 = new TH1F("Graph_Graph72","Graph",100,0,104.4);
   Graph_Graph72->SetMinimum(0.9106794);
   Graph_Graph72->SetMaximum(1.041154);
   Graph_Graph72->SetDirectory(0);
   Graph_Graph72->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph72->SetLineColor(ci);
   Graph_Graph72->GetXaxis()->SetLabelFont(42);
   Graph_Graph72->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph72->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph72->GetXaxis()->SetTitleFont(42);
   Graph_Graph72->GetYaxis()->SetLabelFont(42);
   Graph_Graph72->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph72->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph72->GetYaxis()->SetTitleFont(42);
   Graph_Graph72->GetZaxis()->SetLabelFont(42);
   Graph_Graph72->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph72->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph72->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph72);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx73[59] = {
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
   30.97567,
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
   Double_t Graph_fy73[59] = {
   1,
   1.005131,
   0.9999611,
   0.9945957,
   0.9908369,
   0.994864,
   0.9991865,
   0.9972546,
   0.9992037,
   0.9968889,
   0.9845472,
   1.000125,
   0.9886388,
   0.9887509,
   0.9893232,
   0.9778956,
   0.9674857,
   0.9759568,
   0.9598289,
   0.9736758,
   0.964243,
   0.9557577,
   0.9494059,
   0.9611829,
   0.9629218,
   0.9610994,
   0.9492463,
   0.945231,
   0.9469802,
   0.9387995,
   0.935128,
   0.9482953,
   0.9412895,
   0.9429955,
   0.9619891,
   0.9514074,
   0.9514074,
   0.9635921,
   0.9429302,
   0.9528663,
   0.9496927,
   0.9519378,
   0.9527255,
   0.9351052,
   0.9610791,
   0.9476992,
   0.9528271,
   0.951938,
   0.9647588,
   0.9883927,
   0.9988978,
   1.027781,
   1.045256,
   1.022821,
   1.010809,
   0.9879825,
   1.012964,
   0.9335998,
   1.023235};
   graph = new TGraph(59,Graph_fx73,Graph_fy73);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetLineColor(9);
   graph->SetMarkerColor(9);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph73 = new TH1F("Graph_Graph73","Graph",100,0,104.4);
   Graph_Graph73->SetMinimum(0.9224341);
   Graph_Graph73->SetMaximum(1.056422);
   Graph_Graph73->SetDirectory(0);
   Graph_Graph73->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph73->SetLineColor(ci);
   Graph_Graph73->GetXaxis()->SetLabelFont(42);
   Graph_Graph73->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph73->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph73->GetXaxis()->SetTitleFont(42);
   Graph_Graph73->GetYaxis()->SetLabelFont(42);
   Graph_Graph73->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph73->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph73->GetYaxis()->SetTitleFont(42);
   Graph_Graph73->GetZaxis()->SetLabelFont(42);
   Graph_Graph73->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph73->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph73->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph73);
   
   multigraph->Add(graph,"");
   multigraph->Draw("apl");
   multigraph->GetXaxis()->SetTitle("GEN pT[GeV]");
   multigraph->GetXaxis()->SetRange(9,52);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.035);
   multigraph->GetXaxis()->SetTitleSize(0.035);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("log(KNN rate)/log(EMTF rate)");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.035);
   multigraph->GetYaxis()->SetTitleSize(0.035);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0.1460993,0.1803069,0.3411348,0.5971867,NULL,"brNDC");
   leg->SetBorderSize(1);

   ci = 1208;
   color = new TColor(ci, 0, 0, 0, " ", 0);
   leg->SetLineColor(ci);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);

   ci = 1207;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   leg->SetFillColor(ci);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph","k=75","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","k=85","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","k=120","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","k=130","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","k=140","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(5);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","k=160","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(6);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","k=170","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(7);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(7);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","k=180","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(8);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(8);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","k=190","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(9);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(9);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
