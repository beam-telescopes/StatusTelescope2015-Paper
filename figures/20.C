{
//=========Macro generated from canvas: smilie/smilie
//=========  (Thu Apr  9 14:26:03 2015) by ROOT version5.34/01
   TCanvas *smilie = new TCanvas("smilie", "smilie",0,20,1920,1145);
   smilie->Range(-30,1.25,170,8.75);
   smilie->SetFillColor(0);
   smilie->SetBorderMode(0);
   smilie->SetBorderSize(2);
   smilie->SetRightMargin(0.3);
   smilie->SetFrameBorderMode(0);
   smilie->SetFrameBorderMode(0);
   
   TH1D *h_axis__1 = new TH1D("h_axis__1","Intrinsic Resolution Calculation - #Delta_{z} = 20 mm",1,-10,110);
   h_axis__1->SetMinimum(2);
   h_axis__1->SetMaximum(8);
   h_axis__1->SetDirectory(0);
   h_axis__1->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   h_axis__1->SetLineColor(ci);
   h_axis__1->GetXaxis()->SetTitle("z in mm");
   h_axis__1->GetXaxis()->SetLabelFont(42);
   h_axis__1->GetXaxis()->SetLabelSize(0.035);
   h_axis__1->GetXaxis()->SetTitleSize(0.035);
   h_axis__1->GetXaxis()->SetTitleFont(42);
   h_axis__1->GetYaxis()->SetTitle("#sigma_{meas} in #mum");
   h_axis__1->GetYaxis()->SetLabelFont(42);
   h_axis__1->GetYaxis()->SetLabelSize(0.035);
   h_axis__1->GetYaxis()->SetTitleSize(0.035);
   h_axis__1->GetYaxis()->SetTitleFont(42);
   h_axis__1->GetZaxis()->SetLabelFont(42);
   h_axis__1->GetZaxis()->SetLabelSize(0.035);
   h_axis__1->GetZaxis()->SetTitleSize(0.035);
   h_axis__1->GetZaxis()->SetTitleFont(42);
   h_axis__1->Draw("hist");
   
   TGraphErrors *gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");

   ci = TColor::GetColor("#ffcc00");
   gre->SetFillColor(ci);
   gre->SetPoint(0,0,5.374777);
   gre->SetPointError(0,2.5,0.1559374);
   gre->SetPoint(1,20,4.125067);
   gre->SetPointError(1,2.5,0.1180862);
   gre->SetPoint(2,40,3.925042);
   gre->SetPointError(2,2.5,0.1101669);
   gre->SetPoint(3,60,3.925042);
   gre->SetPointError(3,2.5,0.1101669);
   gre->SetPoint(4,80,4.125067);
   gre->SetPointError(4,2.5,0.1180862);
   gre->SetPoint(5,100,5.374777);
   gre->SetPointError(5,2.5,0.1559374);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,-13,113);
   Graph_Graph1->SetMinimum(3.643291);
   Graph_Graph1->SetMaximum(5.702298);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

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
   gre->SetHistogram(Graph_Graph1);
   
   gre->Draw("le3 ");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(3);
   gre->SetPoint(0,0,5.374777);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,20,4.125067);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,40,3.925042);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,60,3.925042);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,80,4.125067);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,100,5.374777);
   gre->SetPointError(5,0,0);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0,110);
   Graph_Graph2->SetMinimum(3.780068);
   Graph_Graph2->SetMaximum(5.51975);
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
   gre->SetHistogram(Graph_Graph2);
   
   gre->Draw("l ");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(2.5);
   gre->SetPoint(0,0,5.542286);
   gre->SetPointError(0,2.5,0.0342696);
   gre->SetPoint(1,20,4.0092);
   gre->SetPointError(1,2.5,0.02372965);
   gre->SetPoint(2,40,3.90252);
   gre->SetPointError(2,2.5,0.02261493);
   gre->SetPoint(3,60,3.98954);
   gre->SetPointError(3,2.5,0.0233608);
   gre->SetPoint(4,80,4.01543);
   gre->SetPointError(4,2.5,0.02376225);
   gre->SetPoint(5,100,5.593077);
   gre->SetPointError(5,2.5,0.03437484);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,-13,113);
   Graph_Graph3->SetMinimum(3.705151);
   Graph_Graph3->SetMaximum(5.802207);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3->SetLineColor(ci);
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph3);
   
   gre->Draw("p ");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(22);
   gre->SetMarkerSize(2.5);
   gre->SetPoint(0,0,5.500301);
   gre->SetPointError(0,2.5,0.03302971);
   gre->SetPoint(1,20,3.966497);
   gre->SetPointError(1,2.5,0.02294315);
   gre->SetPoint(2,40,3.95945);
   gre->SetPointError(2,2.5,0.02320243);
   gre->SetPoint(3,60,3.934582);
   gre->SetPointError(3,2.5,0.02281785);
   gre->SetPoint(4,80,4.063437);
   gre->SetPointError(4,2.5,0.02425211);
   gre->SetPoint(5,100,5.525706);
   gre->SetPointError(5,2.5,0.03352693);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Graph",100,-13,113);
   Graph_Graph4->SetMinimum(3.747018);
   Graph_Graph4->SetMaximum(5.72398);
   Graph_Graph4->SetDirectory(0);
   Graph_Graph4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph4->SetLineColor(ci);
   Graph_Graph4->GetXaxis()->SetLabelFont(42);
   Graph_Graph4->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetXaxis()->SetTitleFont(42);
   Graph_Graph4->GetYaxis()->SetLabelFont(42);
   Graph_Graph4->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetYaxis()->SetTitleFont(42);
   Graph_Graph4->GetZaxis()->SetLabelFont(42);
   Graph_Graph4->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph4);
   
   gre->Draw("p ");
   
   TGraph *graph = new TGraph(6);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetPoint(0,0,3.496354442);
   graph->SetPoint(1,20,2.465272679);
   graph->SetPoint(2,40,2.40770386);
   graph->SetPoint(3,60,2.40770386);
   graph->SetPoint(4,80,2.465272679);
   graph->SetPoint(5,100,3.496354442);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,0,110);
   Graph_Graph1->SetMinimum(2.298839);
   Graph_Graph1->SetMaximum(3.605219);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

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
   
   graph->Draw("l ");
   
   graph = new TGraph(6);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(3);
   graph->SetPoint(0,0,4.809047967);
   graph->SetPoint(1,20,3.630817151);
   graph->SetPoint(2,40,3.473945733);
   graph->SetPoint(3,60,3.473945733);
   graph->SetPoint(4,80,3.630817151);
   graph->SetPoint(5,100,4.809047967);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0,110);
   Graph_Graph2->SetMinimum(3.340436);
   Graph_Graph2->SetMaximum(4.942558);
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
   
   graph->Draw("l ");
   
   graph = new TGraph(6);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(4);
   graph->SetPoint(0,0,6.164934872);
   graph->SetPoint(1,20,4.808339574);
   graph->SetPoint(2,40,4.549406878);
   graph->SetPoint(3,60,4.549406878);
   graph->SetPoint(4,80,4.808339574);
   graph->SetPoint(5,100,6.164934872);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,0,110);
   Graph_Graph3->SetMinimum(4.387854);
   Graph_Graph3->SetMaximum(6.326488);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3->SetLineColor(ci);
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph3);
   
   graph->Draw("l ");
   
   graph = new TGraph(6);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(5);
   graph->SetPoint(0,0,7.549734582);
   graph->SetPoint(1,20,5.991073599);
   graph->SetPoint(2,40,5.632927161);
   graph->SetPoint(3,60,5.632927161);
   graph->SetPoint(4,80,5.991073599);
   graph->SetPoint(5,100,7.549734582);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Graph",100,0,110);
   Graph_Graph4->SetMinimum(5.441246);
   Graph_Graph4->SetMaximum(7.741415);
   Graph_Graph4->SetDirectory(0);
   Graph_Graph4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph4->SetLineColor(ci);
   Graph_Graph4->GetXaxis()->SetLabelFont(42);
   Graph_Graph4->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetXaxis()->SetTitleFont(42);
   Graph_Graph4->GetYaxis()->SetLabelFont(42);
   Graph_Graph4->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetYaxis()->SetTitleFont(42);
   Graph_Graph4->GetZaxis()->SetLabelFont(42);
   Graph_Graph4->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph4);
   
   graph->Draw("l ");
   
   TLegend *leg = new TLegend(0.7,0.6,0.95,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.03);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("Graph","#sigma_{M26} = (3.42 #pm 0.03) #mum","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("NULL","Prediction for intrinsic resolution:","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph","#sigma_{M26} = 2.0 #mum","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph","#sigma_{M26} = 3.0 #mum","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(3);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph","#sigma_{M26} = 4.0 #mum","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(4);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph","#sigma_{M26} = 5.0 #mum","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(5);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   leg = new TLegend(0.7,0.1,0.95,0.3,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.03);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("NULL","DESY 5 GeV e^{-}","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("NULL","M26 threshold: 6","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph","x direction","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(2.5);
   entry=leg->AddEntry("Graph","y direction","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(2.5);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.15,0.9362587,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Intrinsic Resolution Calculation - #Delta_{z} = 20 mm");
   pt->Draw();
   smilie->Modified();
   smilie->cd();
   smilie->SetSelected(smilie);
}
