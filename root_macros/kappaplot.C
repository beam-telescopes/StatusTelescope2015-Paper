{
  //=========Macro generated from canvas: kappa/kappa
  //=========  (Wed Apr  8 19:34:32 2015) by ROOT version5.34/01
  TCanvas *kappa = new TCanvas("kappa", "kappa",1100,1100);
  /*kappa->Range(0,0,1,1);
  kappa->SetFillColor(0);
  kappa->SetBorderMode(0);
  kappa->SetBorderSize(2);
  kappa->SetFrameBorderMode(0);
  kappa->SetRightMargin(0.05);
  kappa->SetLeftMargin(0.15);*/
  kappa->SetTickx(1);
  kappa->SetTicky(1);


  TMultiGraph *mg = new TMultiGraph();


  TGraphErrors *gre = new TGraphErrors(5);
  gre->SetName("Graph");
  gre->SetTitle("");
  gre->SetMarkerStyle(20);
  gre->SetMarkerSize(1.3);

  gre->SetPoint(0, 2, 0.86);
  gre->SetPointError(0, 2*0.05, 0.012);
  gre->SetPoint(1, 3, 0.875);
  gre->SetPointError(1, 3*0.05, 0.012);
  gre->SetPoint(2, 4, 0.865);
  gre->SetPointError(2, 4*0.05, 0.012);
  gre->SetPoint(3, 5, 0.865);
  gre->SetPointError(3, 5*0.05, 0.012);
  gre->SetPoint(4, 6, 0.855);
  gre->SetPointError(4, 6*0.05, 0.012);

  mg->Add(gre,"p");

  TGraphErrors *gre2 = new TGraphErrors(5);
  gre2->SetName("Graph");
  gre2->SetTitle("");
  gre2->SetMarkerStyle(20);
  gre2->SetMarkerSize(2.);
  gre2->SetLineWidth(2);
  gre2->SetLineStyle(1);
  
  mg->Draw("ap");
  mg->SetMinimum(0.);
  mg->SetMaximum(1.2);
  mg->GetXaxis()->SetLimits(0,7);

  mg->GetXaxis()->SetTitle("beam momentum [GeV]");
  //mg->GetXaxis()->SetNoExponent();
  mg->GetYaxis()->SetTitle("#kappa");
  mg->GetXaxis()->SetTitleOffset(1.14);
  mg->GetYaxis()->SetTitleOffset(1.34);

  TF1* f1 = new TF1("f1","[0]", 1.65, 6.35);
  f1->SetParameter(0,0.86);
  f1->SetLineStyle(2);
  f1->SetLineWidth(2);

  f1->Draw("same");

  TLegend *leg = new TLegend(0.25,0.29,0.55,0.42,NULL,"brNDC");
  leg->SetBorderSize(0);
  leg->SetTextSize(0.03);
  leg->SetFillStyle(1001);
  leg->SetShadowColor(0);
  leg->SetLineColor(0);
  leg->SetFillColor(kWhite);
  leg->AddEntry(gre,"#kappa for #sigma_{int} (150 mm) = #sigma_{int} (20 mm)","p");
  leg->AddEntry(gre2,"Highland","l");
  leg->AddEntry(f1,"const. fit","l");
  leg->Draw();
  
 TLine *line = new TLine(0.6,1,6.4,1);
   line->SetLineWidth(2);
   line->SetLineStyle(1);
   line->Draw();
  

  TLatex *   tex = new TLatex(4.65,1.03,"Highland");
   tex->SetLineWidth(2);
   //tex->Draw();

  kappa->Modified();
  kappa->cd();


}
