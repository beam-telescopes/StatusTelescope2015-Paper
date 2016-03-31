{
  //=========Macro generated from canvas: kappa/kappa
  //=========  (Wed Apr  8 19:34:32 2015) by ROOT version5.34/01
  TCanvas *kappa = new TCanvas("kappa", "kappa",800,800);
  kappa->Range(0,0,1,1);
  kappa->SetFillColor(0);
  kappa->SetBorderMode(0);
  kappa->SetBorderSize(2);
  kappa->SetFrameBorderMode(0);
  kappa->SetRightMargin(0.05);
  kappa->SetLeftMargin(0.15);
  kappa->SetTickx(1);
  kappa->SetTicky(1);

  gROOT->SetStyle("Plain");

  TMultiGraph *mg = new TMultiGraph();


  TGraphErrors *gre = new TGraphErrors(5);
  gre->SetName("Graph");
  gre->SetTitle("");
  gre->SetMarkerStyle(24);
  gre->SetMarkerSize(1.3);
  
  // biased
  gre->SetPoint(0, 6, 0.755);
  gre->SetPointError(0, 6*0.05, 0.041);
  gre->SetPoint(1, 5, 0.751);
  gre->SetPointError(1, 5*0.05, 0.035);
  gre->SetPoint(2, 4, 0.751);
  gre->SetPointError(2, 4*0.05, 0.03);
  gre->SetPoint(3, 3, 0.755);
  gre->SetPointError(3, 3*0.05, 0.025);
  gre->SetPoint(4, 2, 0.751);
  gre->SetPointError(4, 2*0.05, 0.023);

  mg->Add(gre,"p");

  TGraphErrors *gre2 = new TGraphErrors(5);
  gre2->SetName("Graph");
  gre2->SetTitle("");
  gre2->SetMarkerStyle(20);
  gre2->SetMarkerSize(1.3);
  
  // unbiased
  gre2->SetPoint(0, 6, 0.937);
  gre2->SetPointError(0, 6*0.05, 0.0235);
  gre2->SetPoint(1, 5, 0.914);
  gre2->SetPointError(1, 5*0.05, 0.0206);
  gre2->SetPoint(2, 4, 0.903);
  gre2->SetPointError(2, 4*0.05, 0.0156);
  gre2->SetPoint(3, 3, 0.895);
  gre2->SetPointError(3, 3*0.05, 0.0141);
  gre2->SetPoint(4, 2, 0.872);
  gre2->SetPointError(4, 2*0.05, 0.0119);

  mg->Add(gre2,"p");

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
  f1->SetParameter(0,0.7525); // uncert 0.0111
  f1->SetLineStyle(2);
  f1->SetLineWidth(2);

  f1->Draw("same");

  TF1* f2 = new TF1("f2","[0]+x*[1]", 1.65, 6.35);
  f2->SetParameter(0,0.8447); // uncert 0.0111
  f2->SetParameter(1,1.497e-2); // uncert 0.0111
  f2->SetLineStyle(9);
  f2->SetLineWidth(2);

  f2->Draw("same");

  TLegend *leg = new TLegend(0.25,0.24,0.55,0.48,NULL,"brNDC");
  leg->SetBorderSize(0);
  leg->SetTextSize(0.03);
  leg->SetFillStyle(1001);
  leg->SetShadowColor(0);
  leg->SetLineColor(0);
  leg->SetFillColor(kWhite);
  leg->SetHeader("#kappa for #xi_{n} = 6");
  leg->AddEntry(gre2,"unbiased tracks","p");
  leg->AddEntry(gre, "biased tracks","p");
  leg->AddEntry(f1,"const. fit: c = 0.753 #pm 0.013","l");
  leg->AddEntry(f2,"linear fit: y_{0} = 0.845 #pm 0.020,","l");
  leg->AddEntry(f2,"                 m = 1.5e-2 #pm 0.5e-2","");
  leg->Draw();
  

  TLatex *   tex = new TLatex(4.65,1.03,"Highland");
   tex->SetLineWidth(2);
   //tex->Draw();

  kappa->Modified();
  kappa->cd();


}
