{
//=========Macro generated from canvas: smilie/smilie
//=========  (Thu Apr  9 14:11:31 2015) by ROOT version5.34/01
   TCanvas *smilie = new TCanvas("smilie", "smilie",0,20,1920,1145);
   smilie->Range(-225,2.75,1275,15.25);
   smilie->SetFillColor(0);
   smilie->SetBorderMode(0);
   smilie->SetBorderSize(2);
   smilie->SetRightMargin(0.3);
   smilie->SetFrameBorderMode(0);
   smilie->SetFrameBorderMode(0);
   
   TH1D *h_axis__1 = new TH1D("h_axis__1","Intrinsic Resolution Calculation - #Delta_{z} = 150 mm",1,-75,825);
   h_axis__1->SetMinimum(4);
   h_axis__1->SetMaximum(14);
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
   gre->SetPoint(0,0,11.53439);
   gre->SetPointError(0,2.5,0.4697776);
   gre->SetPoint(1,150,5.918947);
   gre->SetPointError(1,2.5,0.1592033);
   gre->SetPoint(2,300,5.821091);
   gre->SetPointError(2,2.5,0.1705179);
   gre->SetPoint(3,450,5.821091);
   gre->SetPointError(3,2.5,0.1705179);
   gre->SetPoint(4,600,5.918947);
   gre->SetPointError(4,2.5,0.1592033);
   gre->SetPoint(5,750,11.53439);
   gre->SetPointError(5,2.5,0.4697776);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,-78,828);
   Graph_Graph1->SetMinimum(5.015214);
   Graph_Graph1->SetMaximum(12.63952);
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
   gre->SetPoint(0,0,11.53439);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,150,5.918947);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,300,5.821091);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,450,5.821091);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,600,5.918947);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,750,11.53439);
   gre->SetPointError(5,0,0);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0,825);
   Graph_Graph2->SetMinimum(5.249762);
   Graph_Graph2->SetMaximum(12.10572);
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
   gre->SetPoint(0,0,12.12585);
   gre->SetPointError(0,2.5,0.04134164);
   gre->SetPoint(1,150,5.815572);
   gre->SetPointError(1,2.5,0.02023871);
   gre->SetPoint(2,300,5.816308);
   gre->SetPointError(2,2.5,0.0203127);
   gre->SetPoint(3,450,5.68517);
   gre->SetPointError(3,2.5,0.01916383);
   gre->SetPoint(4,600,5.908709);
   gre->SetPointError(4,2.5,0.02009219);
   gre->SetPoint(5,750,12.3498);
   gre->SetPointError(5,2.5,0.0414135);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,-78,828);
   Graph_Graph3->SetMinimum(4.993485);
   Graph_Graph3->SetMaximum(13.06374);
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
   gre->SetPoint(0,0,12.01209);
   gre->SetPointError(0,2.5,0.04042964);
   gre->SetPoint(1,150,5.715829);
   gre->SetPointError(1,2.5,0.01942187);
   gre->SetPoint(2,300,5.771635);
   gre->SetPointError(2,2.5,0.01986309);
   gre->SetPoint(3,450,5.688525);
   gre->SetPointError(3,2.5,0.01922173);
   gre->SetPoint(4,600,5.82132);
   gre->SetPointError(4,2.5,0.02026625);
   gre->SetPoint(5,750,12.20303);
   gre->SetPointError(5,2.5,0.04104527);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Graph",100,-78,828);
   Graph_Graph4->SetMinimum(5.011826);
   Graph_Graph4->SetMaximum(12.90155);
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
   graph->SetPoint(0,0,9.930786124);
   graph->SetPoint(1,150,4.733994075);
   graph->SetPoint(2,300,4.508371264);
   graph->SetPoint(3,450,4.508371264);
   graph->SetPoint(4,600,4.733994075);
   graph->SetPoint(5,750,9.930786124);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,0,825);
   Graph_Graph1->SetMinimum(3.96613);
   Graph_Graph1->SetMaximum(10.47303);
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
   graph->SetPoint(0,0,11.01150648);
   graph->SetPoint(1,150,5.525929578);
   graph->SetPoint(2,300,5.391407607);
   graph->SetPoint(3,450,5.391407607);
   graph->SetPoint(4,600,5.525929578);
   graph->SetPoint(5,750,11.01150648);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0,825);
   Graph_Graph2->SetMinimum(4.829398);
   Graph_Graph2->SetMaximum(11.57352);
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
   graph->SetPoint(0,0,12.20978587);
   graph->SetPoint(1,150,6.435213534);
   graph->SetPoint(2,300,6.377662955);
   graph->SetPoint(3,450,6.377662955);
   graph->SetPoint(4,600,6.435213534);
   graph->SetPoint(5,750,12.20978587);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,0,825);
   Graph_Graph3->SetMinimum(5.794451);
   Graph_Graph3->SetMaximum(12.793);
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
   graph->SetPoint(0,0,13.45995201);
   graph->SetPoint(1,150,7.414499639);
   graph->SetPoint(2,300,7.411494099);
   graph->SetPoint(3,450,7.411494099);
   graph->SetPoint(4,600,7.414499639);
   graph->SetPoint(5,750,13.45995201);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Graph",100,0,825);
   Graph_Graph4->SetMinimum(6.806648);
   Graph_Graph4->SetMaximum(14.0648);
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
   TLegendEntry *entry=leg->AddEntry("Graph","#sigma_{M26} = (3.44 #pm 0.03) #mum","l");
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
   TText *text = pt->AddText("Intrinsic Resolution Calculation - #Delta_{z} = 150 mm");
   pt->Draw();
   smilie->Modified();
   smilie->cd();
   smilie->SetSelected(smilie);
}
