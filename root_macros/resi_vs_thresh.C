{
  //=========Macro generated from canvas: threshold/threshold
  //=========  (Wed Apr  8 19:34:32 2015) by ROOT version5.34/01
  TCanvas *threshold = new TCanvas("threshold", "threshold",1100,1100);
  threshold->Range(0,0,1,1);
  threshold->SetFillColor(0);
  threshold->SetBorderMode(0);
  threshold->SetBorderSize(2);
  threshold->SetFrameBorderMode(0);
  threshold->SetRightMargin(0.05);
  threshold->SetLeftMargin(0.15);


  TMultiGraph *mg = new TMultiGraph();


  TGraphErrors *gre = new TGraphErrors(10);
  gre->SetName("Graph");
  gre->SetTitle("");
  gre->SetMarkerStyle(20);
  gre->SetMarkerSize(2.5);
  gre->SetPoint(0,2.85,3.7);
  gre->SetPointError(0,0,0.03164364);
  gre->SetPoint(1,3.85,3.498774);
  gre->SetPointError(1,0,0.02137293);
  gre->SetPoint(2,4.85,3.4527);
  gre->SetPointError(2,0,0.02119353);
  gre->SetPoint(3,5.85,3.415567);
  gre->SetPointError(3,0,0.02104701);
  gre->SetPoint(4,6.85,3.483179);
  gre->SetPointError(4,0,0.02131251);
  gre->SetPoint(5,7.85,3.637027);
  gre->SetPointError(5,0,0.02189557);
  gre->SetPoint(6,8.85,3.763613);
  gre->SetPointError(6,0,0.02235396);
  gre->SetPoint(7,9.85,3.955743);
  gre->SetPointError(7,0,0.02301427);
  gre->SetPoint(8,10.85,4.049027);
  gre->SetPointError(8,0,0.02332001);
  gre->SetPoint(9,11.85,4.141604);
  gre->SetPointError(9,0,0.02361417);

  //gre->Draw("p");
  mg->Add(gre,"p");


  TGraphErrors *gre2 = new TGraphErrors(10);
  gre2->SetName("Graph");
  gre2->SetTitle("p =    3 GeV, #Delta_{z} = 150 mm");
  gre2->SetLineColor(2);
  gre2->SetMarkerColor(2);
  gre2->SetMarkerStyle(21);
  gre2->SetMarkerSize(2.5);
  gre2->SetPoint(0,2.9,10);
  gre2->SetPointError(0,0,0.03282863);
  gre2->SetPoint(1,3.9,3.529879);
  gre2->SetPointError(1,0,0.02625616);
  gre2->SetPoint(2,4.9,3.461151);
  gre2->SetPointError(2,0,0.0260292);
  gre2->SetPoint(3,5.9,3.468273);
  gre2->SetPointError(3,0,0.02605308);
  gre2->SetPoint(4,6.9,3.51149);
  gre2->SetPointError(4,0,0.02619619);
  gre2->SetPoint(5,7.9,3.69094);
  gre2->SetPointError(5,0,0.02675861);
  gre2->SetPoint(6,8.9,3.853154);
  gre2->SetPointError(6,0,0.02722559);
  gre2->SetPoint(7,9.9,3.987611);
  gre2->SetPointError(7,0,0.02758521);
  gre2->SetPoint(8,10.9,4.085177);
  gre2->SetPointError(8,0,0.02783161);
  gre2->SetPoint(9,11.9,4.171907);
  gre2->SetPointError(9,0,0.02804092);

  //gre2->Draw("p");
  mg->Add(gre2,"p");

  TGraphErrors *gre3 = new TGraphErrors(10);
  gre3->SetName("Graph");
  gre3->SetTitle("p = 4.4 GeV, #Delta_{z} = 150 mm");
  gre3->SetLineColor(3);
  gre3->SetMarkerColor(3);
  gre3->SetMarkerStyle(22);
  gre3->SetMarkerSize(2.5);
  gre3->SetPoint(0,2.95,3.680775);
  gre3->SetPointError(0,0,0.02982401);
  gre3->SetPoint(1,3.95,3.572823);
  gre3->SetPointError(1,0,0.02959033);
  gre3->SetPoint(2,4.95,3.516918);
  gre3->SetPointError(2,0,0.02946267);
  gre3->SetPoint(3,5.95,3.530031);
  gre3->SetPointError(3,0,0.02949304);
  gre3->SetPoint(4,6.95,3.608283);
  gre3->SetPointError(4,0,0.0296689);
  gre3->SetPoint(5,7.95,3.741101);
  gre3->SetPointError(5,0,0.02994759);
  gre3->SetPoint(6,8.95,3.847225);
  gre3->SetPointError(6,0,0.03015359);
  gre3->SetPoint(7,9.95,3.976391);
  gre3->SetPointError(7,0,0.03038606);
  gre3->SetPoint(8,10.95,4.126221);
  gre3->SetPointError(8,0,0.03063282);
  gre3->SetPoint(9,11.95,4.221098);
  gre3->SetPointError(9,0,0.03077742);

  //gre3->Draw("p");
  mg->Add(gre3,"p");

  TGraphErrors *gre4 = new TGraphErrors(10);
  gre4->SetName("Graph");
  gre4->SetTitle("p =    5 GeV, #Delta_{z} = 150 mm");
  gre4->SetLineColor(4);
  gre4->SetMarkerColor(4);
  gre4->SetMarkerStyle(23);
  gre4->SetMarkerSize(2.5);
  gre4->SetPoint(0,3,3.604185);
  gre4->SetPointError(0,0,0.03005157);
  gre4->SetPoint(1,4,3.545683);
  gre4->SetPointError(1,0,0.02992961);
  gre4->SetPoint(2,5,3.487727);
  gre4->SetPointError(2,0,0.02980389);
  gre4->SetPoint(3,6,3.444235);
  gre4->SetPointError(3,0,0.02970617);
  gre4->SetPoint(4,7,3.562855);
  gre4->SetPointError(4,0,0.02996592);
  gre4->SetPoint(5,8,3.708615);
  gre4->SetPointError(5,0,0.0302576);
  gre4->SetPoint(6,9,3.847435);
  gre4->SetPointError(6,0,0.03050993);
  gre4->SetPoint(7,10,3.965194);
  gre4->SetPointError(7,0,0.03070637);
  gre4->SetPoint(8,11,4.050356);
  gre4->SetPointError(8,0,0.03083919);
  gre4->SetPoint(9,12,4.116577);
  gre4->SetPointError(9,0,0.03093743);

  //gre->Draw("p");
  mg->Add(gre4,"p");

  TGraphErrors *gre5 = new TGraphErrors(10);
  gre5->SetName("Graph");
  gre5->SetTitle("p =    2 GeV, #Delta_{z} =   20 mm");
  gre5->SetMarkerStyle(24);
  gre5->SetMarkerSize(2.5);
  gre5->SetPoint(0,3.05,5.00818);
  gre5->SetPointError(0,0,0.03373868);
  gre5->SetPoint(1,4.05,3.539333);
  gre5->SetPointError(1,0,0.0333345);
  gre5->SetPoint(2,5.05,3.492814);
  gre5->SetPointError(2,0,0.03332275);
  gre5->SetPoint(3,6.05,3.490106);
  gre5->SetPointError(3,0,0.03332206);
  gre5->SetPoint(4,7.05,3.562287);
  gre5->SetPointError(4,0,0.0333403);
  gre5->SetPoint(5,8.05,3.703664);
  gre5->SetPointError(5,0,0.03337601);
  gre5->SetPoint(6,9.05,3.866262);
  gre5->SetPointError(6,0,0.0334175);
  gre5->SetPoint(7,10.05,4.478661);
  gre5->SetPointError(7,0,0.05379054);
  gre5->SetPoint(8,11.05,4.189538);
  gre5->SetPointError(8,0,0.03350291);
  gre5->SetPoint(9,12.05,4.271582);
  gre5->SetPointError(9,0,0.03352534);
  gre5->RemovePoint(0);
  gre5->RemovePoint(6);

  //gre5->Draw("p");
  mg->Add(gre5,"p");

  TGraphErrors *gre6 = new TGraphErrors(10);
  gre6->SetName("Graph");
  gre6->SetTitle("p =    3 GeV, #Delta_{z} =   20 mm");
  gre6->SetLineColor(2);
  gre6->SetMarkerColor(2);
  gre6->SetMarkerStyle(25);
  gre6->SetMarkerSize(2.5);
  gre6->SetPoint(0,3.1,3.588319);
  gre6->SetPointError(0,0,0.0338521);
  gre6->SetPoint(1,4.1,3.526837);
  gre6->SetPointError(1,0,0.03382404);
  gre6->SetPoint(2,5.1,3.469078);
  gre6->SetPointError(2,0,0.03379774);
  gre6->SetPoint(3,6.1,3.445178);
  gre6->SetPointError(3,0,0.03378686);
  gre6->SetPoint(4,7.1,3.546302);
  gre6->SetPointError(4,0,0.03383293);
  gre6->SetPoint(5,8.1,3.716316);
  gre6->SetPointError(5,0,0.03391055);
  gre6->SetPoint(6,9.1,3.88694);
  gre6->SetPointError(6,0,0.03398809);
  gre6->SetPoint(7,10.1,4.020974);
  gre6->SetPointError(7,0,0.03404837);
  gre6->SetPoint(8,11.1,4.180144);
  gre6->SetPointError(8,0,0.03411886);
  gre6->SetPoint(9,12.1,10);
  gre6->SetPointError(9,0,0.03548144);

  //gre->Draw("p");
  mg->Add(gre6,"p");

  TGraphErrors *gre7 = new TGraphErrors(10);
  gre7->SetName("Graph");
  gre7->SetTitle("p =    5 GeV, #Delta_{z} =   20 mm");
  gre7->SetLineColor(4);
  gre7->SetMarkerColor(4);
  gre7->SetMarkerStyle(32);
  gre7->SetMarkerSize(2.5);
  gre7->SetPoint(0,3.15,3.489275);
  gre7->SetPointError(0,0,0.0347301);
  gre7->SetPoint(1,4.15,3.457493);
  gre7->SetPointError(1,0,0.03471388);
  gre7->SetPoint(2,5.15,3.405482);
  gre7->SetPointError(2,0,0.03468683);
  gre7->SetPoint(3,6.15,3.420506);
  gre7->SetPointError(3,0,0.03469471);
  gre7->SetPoint(4,7.15,3.503661);
  gre7->SetPointError(4,0,0.03473738);
  gre7->SetPoint(5,8.15,3.620426);
  gre7->SetPointError(5,0,0.03479459);
  gre7->SetPoint(6,9.15,3.819684);
  gre7->SetPointError(6,0,0.03488535);
  gre7->SetPoint(7,10.15,3.949644);
  gre7->SetPointError(7,0,0.03494014);
  gre7->SetPoint(8,11.15,4.092266);
  gre7->SetPointError(8,0,0.03499649);
  gre7->SetPoint(9,12.15,4.187727);
  gre7->SetPointError(9,0,0.03503217);

  //gre7->Draw("p");
  mg->Add(gre7,"p");

  mg->Draw("al");
  mg->SetMinimum(3);
  mg->SetMaximum(5);
  mg->GetXaxis()->SetLimits(0,14);

  mg->GetXaxis()->SetTitle("Mimosa threshold [#sigma_{noise}]");
  mg->GetXaxis()->SetNoExponent();
  mg->GetYaxis()->SetTitle("#sigma_{M26} [#mum]");
  mg->GetXaxis()->SetTitleOffset(1.14);
  mg->GetYaxis()->SetTitleOffset(1.44);



  TLegend *leg = new TLegend(0.20,0.50,0.5,0.85,NULL,"brNDC");
  leg->SetBorderSize(0);
  leg->SetTextSize(0.03);
  leg->SetFillStyle(4000);
  leg->SetShadowColor(0);
  leg->SetLineColor(0);
  leg->SetFillColor(kWhite);
  entry=leg->AddEntry("NULL","#Delta_{z} = 20 mm","h");
  entry=leg->AddEntry(gre5,"p =    2 GeV","p");
  entry=leg->AddEntry(gre6,"p =    3 GeV","p");
  entry=leg->AddEntry(gre7,"p =    5 GeV","p");
  entry=leg->AddEntry("NULL","","");
  entry=leg->AddEntry("NULL","#Delta_{z} = 150 mm","h");
  entry=leg->AddEntry(gre ,"p =    2 GeV","p");
  entry=leg->AddEntry(gre2,"p =    3 GeV","p");
  entry=leg->AddEntry(gre3,"p =  4.4 GeV","p");
  entry=leg->AddEntry(gre4,"p =    5 GeV","p");
  leg->Draw();


  threshold->Modified();
  threshold->cd();
}
