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

  TH1D *gblrx3 = new TH1D("gblrx3","GBL x resid at plane 3",125,-25,25);
  gblrx3->SetBinContent(35,2);
   gblrx3->SetBinContent(36,7);
   gblrx3->SetBinContent(37,7);
   gblrx3->SetBinContent(38,9);
   gblrx3->SetBinContent(39,15);
   gblrx3->SetBinContent(40,28);
   gblrx3->SetBinContent(41,30);
   gblrx3->SetBinContent(42,79);
   gblrx3->SetBinContent(43,108);
   gblrx3->SetBinContent(44,152);
   gblrx3->SetBinContent(45,222);
   gblrx3->SetBinContent(46,304);
   gblrx3->SetBinContent(47,446);
   gblrx3->SetBinContent(48,617);
   gblrx3->SetBinContent(49,951);
   gblrx3->SetBinContent(50,1122);
   gblrx3->SetBinContent(51,1471);
   gblrx3->SetBinContent(52,1947);
   gblrx3->SetBinContent(53,2454);
   gblrx3->SetBinContent(54,2900);
   gblrx3->SetBinContent(55,3492);
   gblrx3->SetBinContent(56,3975);
   gblrx3->SetBinContent(57,4658);
   gblrx3->SetBinContent(58,5204);
   gblrx3->SetBinContent(59,5531);
   gblrx3->SetBinContent(60,6221);
   gblrx3->SetBinContent(61,6654);
   gblrx3->SetBinContent(62,6638);
   gblrx3->SetBinContent(63,6904);
   gblrx3->SetBinContent(64,6822);
   gblrx3->SetBinContent(65,6652);
   gblrx3->SetBinContent(66,6441);
   gblrx3->SetBinContent(67,6233);
   gblrx3->SetBinContent(68,5721);
   gblrx3->SetBinContent(69,5228);
   gblrx3->SetBinContent(70,4510);
   gblrx3->SetBinContent(71,4131);
   gblrx3->SetBinContent(72,3508);
   gblrx3->SetBinContent(73,2872);
   gblrx3->SetBinContent(74,2396);
   gblrx3->SetBinContent(75,1921);
   gblrx3->SetBinContent(76,1478);
   gblrx3->SetBinContent(77,1169);
   gblrx3->SetBinContent(78,843);
   gblrx3->SetBinContent(79,669);
   gblrx3->SetBinContent(80,434);
   gblrx3->SetBinContent(81,312);
   gblrx3->SetBinContent(82,201);
   gblrx3->SetBinContent(83,152);
   gblrx3->SetBinContent(84,79);
   gblrx3->SetBinContent(85,56);
   gblrx3->SetBinContent(86,32);
   gblrx3->SetBinContent(87,18);
   gblrx3->SetBinContent(88,18);
   gblrx3->SetBinContent(89,7);
   gblrx3->SetBinContent(90,6);
   gblrx3->SetBinContent(91,5);
   gblrx3->SetBinContent(92,2);
   gblrx3->SetEntries(124064);



  gblrx3->SetTitle("");
  gblrx3->SetLineWidth(2);

  //TH1D *DUTshiftX__1 = new TH1D("DUTshiftX__1"," Measured - fitted X",400,-600,600);
  gblrx3->SetMinimum(0);
  gblrx3->SetMaximum(1e4);
  TGaxis::SetMaxDigits(3);

  TF1 *f2 = new TF1("f2","gaus",-4.6,4.6);
  //f2->SetFillColor(19);
  f2->SetFillStyle(0);
  f2->SetLineWidth(3);
  f2->SetChisquare(38.0);
  f2->SetNDF(26);
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
   f2->SetParameter(0,6914.815);
   f2->SetParError(0,26.25562);
   f2->SetParLimits(0,0,0);
   f2->SetParameter(1,0.1992144);
   f2->SetParError(1,0.009460369);
   f2->SetParLimits(1,0,0);
   f2->SetParameter(2,2.877051);
   f2->SetParError(2,0.009074017);
   f2->SetParLimits(2,0,21.7189);
  //f2->SetParLimits(2,0,0.05097552);
  gblrx3->GetListOfFunctions()->Add(f2);

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
  gblrx3->GetXaxis()->SetTitle("residual in x [#mum]");
  gblrx3->GetXaxis()->SetRange(25,100);
  gblrx3->GetYaxis()->SetTitle("entries");
  gblrx3->GetXaxis()->SetTitleOffset(1.14);
  gblrx3->GetYaxis()->SetTitleOffset(1.14);
  gblrx3->SetFillColor(1);
  gblrx3->SetFillStyle(3005);

  gblrx3->Draw("");


  TLegend *leg = new TLegend(0.22,0.65,0.52,0.87,NULL,"brNDC");
  leg->SetBorderSize(0);
  leg->SetTextSize(0.03);
  leg->SetFillStyle(0);
  leg->SetShadowColor(0);
  leg->SetLineColor(0);
  leg->SetFillColor(kWhite);
  entry=leg->AddEntry("NULL","plane 3","h");
  //entry=leg->AddEntry("NULL","direction x","h");
  entry=leg->AddEntry( gblrx3,"residual in x","f");
  entry=leg->AddEntry(f2,"fit","l");
  //entry=leg->AddEntry("NULL","mean = -0.0160 #pm 0.0356","h");
  entry=leg->AddEntry("NULL","#sigma = 2.88 #pm 0.01","h");
  entry=leg->AddEntry("NULL","#chi^{2} /ndf = 1.5","h");

  leg->Draw();

}
