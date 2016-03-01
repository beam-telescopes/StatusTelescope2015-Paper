{
  //=========Macro generated from canvas: m26fitter/m26fitter
  //=========  (Fri Apr 24 11:31:19 2015) by ROOT version5.34/01
  TCanvas *m26fitter = new TCanvas("m26fitter", "m26fitter",1920,20,1100, 1100);
  gStyle->SetOptStat(0);
  m26fitter->Range(0,0,1,1);
  m26fitter->SetFillColor(0);
  m26fitter->SetBorderMode(0);
  m26fitter->SetBorderSize(2);
  m26fitter->SetFrameBorderMode(0);
  //gStyle->SetOptFit(1111);
  m26fitter->SetRightMargin(0.05);
  m26fitter->SetLeftMargin(0.15);

  TH1D *gblrx0 = new TH1D("gblrx0","GBL x resid at plane 0",125,-25,25);
   gblrx0->SetBinContent(41,1);
   gblrx0->SetBinContent(42,6);
   gblrx0->SetBinContent(43,6);
   gblrx0->SetBinContent(44,19);
   gblrx0->SetBinContent(45,29);
   gblrx0->SetBinContent(46,63);
   gblrx0->SetBinContent(47,138);
   gblrx0->SetBinContent(48,197);
   gblrx0->SetBinContent(49,336);
   gblrx0->SetBinContent(50,519);
   gblrx0->SetBinContent(51,849);
   gblrx0->SetBinContent(52,1100);
   gblrx0->SetBinContent(53,1818);
   gblrx0->SetBinContent(54,2271);
   gblrx0->SetBinContent(55,3077);
   gblrx0->SetBinContent(56,4120);
   gblrx0->SetBinContent(57,4809);
   gblrx0->SetBinContent(58,6226);
   gblrx0->SetBinContent(59,6787);
   gblrx0->SetBinContent(60,7712);
   gblrx0->SetBinContent(61,8693);
   gblrx0->SetBinContent(62,8630);
   gblrx0->SetBinContent(63,9481);
   gblrx0->SetBinContent(64,8739);
   gblrx0->SetBinContent(65,8775);
   gblrx0->SetBinContent(66,7911);
   gblrx0->SetBinContent(67,6660);
   gblrx0->SetBinContent(68,6056);
   gblrx0->SetBinContent(69,4651);
   gblrx0->SetBinContent(70,3960);
   gblrx0->SetBinContent(71,3159);
   gblrx0->SetBinContent(72,2207);
   gblrx0->SetBinContent(73,1839);
   gblrx0->SetBinContent(74,1139);
   gblrx0->SetBinContent(75,828);
   gblrx0->SetBinContent(76,530);
   gblrx0->SetBinContent(77,284);
   gblrx0->SetBinContent(78,208);
   gblrx0->SetBinContent(79,119);
   gblrx0->SetBinContent(80,59);
   gblrx0->SetBinContent(81,29);
   gblrx0->SetBinContent(82,17);
   gblrx0->SetBinContent(83,4);
   gblrx0->SetBinContent(84,2);
   gblrx0->SetBinContent(85,1);
   gblrx0->SetEntries(124064);


  gblrx0->SetTitle("");
  gblrx0->SetLineWidth(2);

  //TH1D *DUTshiftX__1 = new TH1D("DUTshiftX__1"," Measured - fitted X",400,-600,600);
  gblrx0->SetMinimum(0);
  gblrx0->SetMaximum(1e4);
  TGaxis::SetMaxDigits(3);

  TF1 *f2 = new TF1("f2","gaus",-4.6,4.6);
  //f2->SetFillColor(19);
  f2->SetFillStyle(0);
  f2->SetLineWidth(3);
  f2->SetChisquare(141.6);
  f2->SetNDF(20);
  f2->SetLineColor(2);
  /*f2->GetXaxis()->SetLabelFont(42);
    f2->GetXaxis()->SetLabelSize(0.035);
    f2->GetXaxis()->SetTitleSize(0.035);
    f2->GetXaxis()->SetTitleFont(42);
    f2->GetYaxis()->SetLabelFont(42);
    f2->GetYaxis()->SetLabelSize(0.035);
    f2->GetYaxis()->SetTitleSize(0.035);
    f2->GetYaxis()->SetTitleFont(42);*/
  /*f2->SetParameter(0,1.49015e+03);
  f2->SetParError(0,1.15709e+01);
  //f2->SetParLimits(0,0,0);
  f2->SetParameter(1,8.65040e-02);
  f2->SetParError(1,2.08564e-02);
  //f2->SetParLimits(1,0,0);
  f2->SetParameter(2,3.15321e+00);
  f2->SetParError(2,1.95784e-02);*/
   f2->SetParameter(0,9091.533);
   f2->SetParError(0,34.32856);
   f2->SetParLimits(0,0,0);
   f2->SetParameter(1,-0.00787172);
   f2->SetParError(1,0.006969583);
   f2->SetParLimits(1,0,0);
   f2->SetParameter(2,2.174964);
   f2->SetParError(2,0.006492782);
   f2->SetParLimits(2,0,21.7189);
  //f2->SetParLimits(2,0,0.05097552);
  gblrx0->GetListOfFunctions()->Add(f2);

  /*TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
    ptstats->SetName("stats");
    ptstats->SetBorderSize(1);
    ptstats->SetFillColor(0);
    ptstats->SetTextAlign(12);
    ptstats->SetTextFont(42);
    TText *text = ptstats->AddText("DUTshiftX");
    text->SetTextSize(0.0368);
    text = ptstats->AddText("Entries = 32552  ");
    text = ptstats->AddText("Mean  = 1.787e-05");
    text = ptstats->AddText("RMS   = 0.007368");
    ptstats->SetOptStat(1111);
    ptstats->SetOptFit(0);
    ptstats->Draw();
    DUTshiftX__1->GetListOfFunctions()->Add(ptstats);
    ptstats->SetParent(DUTshiftX__1);*/
  gblrx0->GetXaxis()->SetTitle("residual in x [#mum]");
  gblrx0->GetXaxis()->SetRange(25,100);
  gblrx0->GetYaxis()->SetTitle("entries");
  gblrx0->GetXaxis()->SetTitleOffset(1.14);
  gblrx0->GetYaxis()->SetTitleOffset(1.14);
  gblrx0->SetFillColor(1);
  gblrx0->SetFillStyle(3005);

  gblrx0->Draw("");


  TLegend *leg = new TLegend(0.22,0.65,0.52,0.87,NULL,"brNDC");
  leg->SetBorderSize(0);
  leg->SetTextSize(0.03);
  leg->SetFillStyle(0);
  leg->SetShadowColor(0);
  leg->SetLineColor(0);
  leg->SetFillColor(kWhite);
  entry=leg->AddEntry("NULL","plane 0","h");
  //entry=leg->AddEntry("NULL","direction x","h");
  entry=leg->AddEntry( gblrx0,"residual in x","f");
  entry=leg->AddEntry(f2,"fit","l");
  //entry=leg->AddEntry("NULL","mean = -0.0160 #pm 0.0356","h");
  entry=leg->AddEntry("NULL","#sigma = 2.17 #pm 0.01","h");
  entry=leg->AddEntry("NULL","#chi^{2} /ndf = 7.0","h");

  leg->Draw();

}
