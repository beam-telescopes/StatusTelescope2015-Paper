{
  //=========Macro generated from canvas: m26fitter/m26fitter
  //=========  (Fri Apr 24 11:31:19 2015) by ROOT version5.34/01
  TCanvas *m26fitter = new TCanvas("m26fitter", "m26fitter",1920,20,1100,1100);
  gStyle->SetOptStat(0);
  m26fitter->Range(0,0,1,1);
  m26fitter->SetFillColor(0);
  m26fitter->SetBorderMode(0);
  m26fitter->SetBorderSize(2);
  m26fitter->SetFrameBorderMode(0);



  TH1D *DUTshiftY__8 = new TH1D("DUTshiftY__8"," Measured - fitted Y",400,-600,600);  
  DUTshiftY__8->SetTitle("");
  DUTshiftY__8->SetLineWidth(2);
  DUTshiftY__8->SetBinContent(37,1);
  DUTshiftY__8->SetBinContent(67,1);
  DUTshiftY__8->SetBinContent(123,1);
  DUTshiftY__8->SetBinContent(139,1);
  DUTshiftY__8->SetBinContent(158,1);
  DUTshiftY__8->SetBinContent(164,1);
  DUTshiftY__8->SetBinContent(167,1);
  DUTshiftY__8->SetBinContent(168,1);
  DUTshiftY__8->SetBinContent(170,1);
  DUTshiftY__8->SetBinContent(173,3);
  DUTshiftY__8->SetBinContent(174,1);
  DUTshiftY__8->SetBinContent(175,2);
  DUTshiftY__8->SetBinContent(177,1);
  DUTshiftY__8->SetBinContent(178,1);
  DUTshiftY__8->SetBinContent(179,2);
  DUTshiftY__8->SetBinContent(180,1);
  DUTshiftY__8->SetBinContent(181,1);
  DUTshiftY__8->SetBinContent(182,1);
  DUTshiftY__8->SetBinContent(183,2);
  DUTshiftY__8->SetBinContent(184,3);
  DUTshiftY__8->SetBinContent(185,3);
  DUTshiftY__8->SetBinContent(186,6);
  DUTshiftY__8->SetBinContent(187,7);
  DUTshiftY__8->SetBinContent(188,9);
  DUTshiftY__8->SetBinContent(189,10);
  DUTshiftY__8->SetBinContent(190,12);
  DUTshiftY__8->SetBinContent(191,24);
  DUTshiftY__8->SetBinContent(192,20);
  DUTshiftY__8->SetBinContent(193,25);
  DUTshiftY__8->SetBinContent(194,41);
  DUTshiftY__8->SetBinContent(195,73);
  DUTshiftY__8->SetBinContent(196,150);
  DUTshiftY__8->SetBinContent(197,431);
  DUTshiftY__8->SetBinContent(198,1694);
  DUTshiftY__8->SetBinContent(199,5084);
  DUTshiftY__8->SetBinContent(200,8785);
  DUTshiftY__8->SetBinContent(201,8655);
  DUTshiftY__8->SetBinContent(202,4879);
  DUTshiftY__8->SetBinContent(203,1624);
  DUTshiftY__8->SetBinContent(204,447);
  DUTshiftY__8->SetBinContent(205,151);
  DUTshiftY__8->SetBinContent(206,89);
  DUTshiftY__8->SetBinContent(207,54);
  DUTshiftY__8->SetBinContent(208,36);
  DUTshiftY__8->SetBinContent(209,24);
  DUTshiftY__8->SetBinContent(210,22);
  DUTshiftY__8->SetBinContent(211,16);
  DUTshiftY__8->SetBinContent(212,8);
  DUTshiftY__8->SetBinContent(213,15);
  DUTshiftY__8->SetBinContent(214,7);
  DUTshiftY__8->SetBinContent(215,11);
  DUTshiftY__8->SetBinContent(216,4);
  DUTshiftY__8->SetBinContent(217,4);
  DUTshiftY__8->SetBinContent(218,3);
  DUTshiftY__8->SetBinContent(219,2);
  DUTshiftY__8->SetBinContent(220,2);
  DUTshiftY__8->SetBinContent(221,5);
  DUTshiftY__8->SetBinContent(223,3);
  DUTshiftY__8->SetBinContent(224,4);
  DUTshiftY__8->SetBinContent(225,2);
  DUTshiftY__8->SetBinContent(226,2);
  DUTshiftY__8->SetBinContent(229,1);
  DUTshiftY__8->SetBinContent(231,2);
  DUTshiftY__8->SetBinContent(234,1);
  DUTshiftY__8->SetBinContent(236,1);
  DUTshiftY__8->SetBinContent(245,1);
  DUTshiftY__8->SetBinContent(247,1);
  DUTshiftY__8->SetBinContent(249,1);
  DUTshiftY__8->SetBinContent(266,1);
  DUTshiftY__8->SetBinContent(304,1);
  DUTshiftY__8->SetBinContent(332,1);
  DUTshiftY__8->SetEntries(32481);  
  DUTshiftY__8->SetMinimum(0);
  DUTshiftY__8->SetMaximum(10000);
  TGaxis::SetMaxDigits(3);

  TF1 *f2 = new TF1("f2","gaus",-8.241702,8.137831);
  //f2->SetFillColor(19);
  f2->SetFillStyle(0);
  f2->SetLineWidth(3);
  f2->SetChisquare(0.6672328);
  f2->SetNDF(3);
  f2->SetLineColor(2);  
  /*f2->GetXaxis()->SetLabelFont(42);
    f2->GetXaxis()->SetLabelSize(0.035);
    f2->GetXaxis()->SetTitleSize(0.035);
    f2->GetXaxis()->SetTitleFont(42);
    f2->GetYaxis()->SetLabelFont(42);
    f2->GetYaxis()->SetLabelSize(0.035);
    f2->GetYaxis()->SetTitleSize(0.035);
    f2->GetYaxis()->SetTitleFont(42);*/
  f2->SetParameter(0,9556.603);
  f2->SetParError(0,72.54931);
  //f2->SetParLimits(0,0,0);
  f2->SetParameter(1,-6.248412e-02);
  f2->SetParError(1,2.483312e-02);
  //f2->SetParLimits(1,0,0);
  f2->SetParameter(2,3.934582);
  f2->SetParError(2,2.281785e-02);
  //f2->SetParLimits(2,0,0.03730533);
  DUTshiftY__8->GetListOfFunctions()->Add(f2);

  /*ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
    ptstats->SetName("stats");
    ptstats->SetBorderSize(1);
    ptstats->SetFillColor(0);
    ptstats->SetTextAlign(12);
    ptstats->SetTextFont(42);
    text = ptstats->AddText("DUTshiftY");
    text->SetTextSize(0.0368);
    text = ptstats->AddText("Entries = 32481  ");
    text = ptstats->AddText("Mean  = -1.712e-06");
    text = ptstats->AddText("RMS   = 0.005346");
    ptstats->SetOptStat(1111);
    ptstats->SetOptFit(0);
    ptstats->Draw();
    DUTshiftY__8->GetListOfFunctions()->Add(ptstats);
    ptstats->SetParent(DUTshiftY__8);*/
  DUTshiftY__8->GetXaxis()->SetTitle("residual in y [#mum]");
  DUTshiftY__8->GetXaxis()->SetRange(187,214);
  DUTshiftY__8->GetYaxis()->SetTitle("entries");  
  DUTshiftY__8->GetXaxis()->SetTitleOffset(1.14);
  DUTshiftY__8->GetYaxis()->SetTitleOffset(1.14);
  DUTshiftY__8->SetFillColor(1);
  DUTshiftY__8->SetFillStyle(3005);


  DUTshiftY__8->Draw("");



  TLegend *leg = new TLegend(0.15,0.65,0.45,0.87,NULL,"brNDC");
  leg->SetBorderSize(0);
  leg->SetTextSize(0.03);
  leg->SetFillStyle(1001);
  leg->SetShadowColor(0);
  leg->SetLineColor(0);
  leg->SetFillColor(kWhite);
  entry=leg->AddEntry("NULL","plane 3","h");
  //entry=leg->AddEntry("NULL","direction x","h");
  entry=leg->AddEntry( DUTshiftY__8,"residual in y","f");
  entry=leg->AddEntry(f2,"fit","l");
  //entry=leg->AddEntry("NULL","mean = -0.0160 #pm 0.0356","h");
  entry=leg->AddEntry("NULL","#sigma = 3.93 #pm 0.04","h");

  leg->Draw();
}
