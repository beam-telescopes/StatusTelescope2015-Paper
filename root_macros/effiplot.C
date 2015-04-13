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
  gre->SetPoint(0,2.85,0.9855432);
  gre->SetPointError(0,0,0.000204209);
  gre->SetPoint(1,3.85,0.9846916);
  gre->SetPointError(1,0,0.0001981928);
  gre->SetPoint(2,4.85,0.9840538);
  gre->SetPointError(2,0,0.0002047463);
  gre->SetPoint(3,5.85,0.9814982);
  gre->SetPointError(3,0,0.0002384884);
  gre->SetPoint(4,6.85,0.9759061);
  gre->SetPointError(4,0,0.0002983202);
  gre->SetPoint(5,7.85,0.9659416);
  gre->SetPointError(5,0,0.0003684104);
  gre->SetPoint(6,8.85,0.9504613);
  gre->SetPointError(6,0,0.0005195972);
  gre->SetPoint(7,9.85,0.9228123);
  gre->SetPointError(7,0,0.0006280617);
  gre->SetPoint(8,10.85,0.8919528);
  gre->SetPointError(8,0,0.0008129179);
  gre->SetPoint(9,11.85,0.8572566);
  gre->SetPointError(9,0,0.001022646);

  //gre->Draw("p");
  mg->Add(gre,"p");


  TGraphErrors *gre2 = new TGraphErrors(10);
  gre2->SetName("Graph");
  gre2->SetTitle("p =    3 GeV, #Delta_{z} = 150 mm");
  gre2->SetLineColor(2);
  gre2->SetMarkerColor(2);
  gre2->SetMarkerStyle(21);
  gre2->SetMarkerSize(2.5);
  gre2->SetPoint(0,2.9,0.9874821);
  gre2->SetPointError(0,0,0.0001884731);
  gre2->SetPoint(1,3.9,0.9869593);
  gre2->SetPointError(1,0,0.000184651);
  gre2->SetPoint(2,4.9,0.9859183);
  gre2->SetPointError(2,0,0.0001940913);
  gre2->SetPoint(3,5.9,0.9842441);
  gre2->SetPointError(3,0,0.0002257681);
  gre2->SetPoint(4,6.9,0.9794025);
  gre2->SetPointError(4,0,0.0002666991);
  gre2->SetPoint(5,7.9,0.9680668);
  gre2->SetPointError(5,0,0.0003614806);
  gre2->SetPoint(6,8.9,0.9508046);
  gre2->SetPointError(6,0,0.0004739136);
  gre2->SetPoint(7,9.9,0.9259169);
  gre2->SetPointError(7,0,0.0006088735);
  gre2->SetPoint(8,10.9,0.8947432);
  gre2->SetPointError(8,0,0.0007732132);
  gre2->SetPoint(9,11.9,0.8598935);
  gre2->SetPointError(9,0,0.00098909);

  //gre2->Draw("p");
  mg->Add(gre2,"p");

  TGraphErrors *gre3 = new TGraphErrors(10);
  gre3->SetName("Graph");
  gre3->SetTitle("p = 4.4 GeV, #Delta_{z} = 150 mm");
  gre3->SetLineColor(3);
  gre3->SetMarkerColor(3);
  gre3->SetMarkerStyle(22);
  gre3->SetMarkerSize(2.5);
  gre3->SetPoint(0,2.95,0.9905398);
  gre3->SetPointError(0,0,0.0001466581);
  gre3->SetPoint(1,3.95,0.9903248);
  gre3->SetPointError(1,0,0.0001523583);
  gre3->SetPoint(2,4.95,0.9897169);
  gre3->SetPointError(2,0,0.0001656427);
  gre3->SetPoint(3,5.95,0.9875865);
  gre3->SetPointError(3,0,0.0001947691);
  gre3->SetPoint(4,6.95,0.9821202);
  gre3->SetPointError(4,0,0.0002484079);
  gre3->SetPoint(5,7.95,0.9718451);
  gre3->SetPointError(5,0,0.0003279538);
  gre3->SetPoint(6,8.95,0.959854);
  gre3->SetPointError(6,0,0.0003989192);
  gre3->SetPoint(7,9.95,0.9353384);
  gre3->SetPointError(7,0,0.000538586);
  gre3->SetPoint(8,10.95,0.897719);
  gre3->SetPointError(8,0,0.0007209027);
  gre3->SetPoint(9,11.95,0.8632433);
  gre3->SetPointError(9,0,0.0009031738);

  //gre3->Draw("p");
  mg->Add(gre3,"p");

  TGraphErrors *gre4 = new TGraphErrors(10);
  gre4->SetName("Graph");
  gre4->SetTitle("p =    5 GeV, #Delta_{z} = 150 mm");
  gre4->SetLineColor(4);
  gre4->SetMarkerColor(4);
  gre4->SetMarkerStyle(23);
  gre4->SetMarkerSize(2.5);
  gre4->SetPoint(0,3,0.99562);
  gre4->SetPointError(0,0,0.0001880595);
  gre4->SetPoint(1,4,0.9949328);
  gre4->SetPointError(1,0,0.0002022552);
  gre4->SetPoint(2,5,0.9940184);
  gre4->SetPointError(2,0,0.0002255496);
  gre4->SetPoint(3,6,0.9916783);
  gre4->SetPointError(3,0,0.0002734264);
  gre4->SetPoint(4,7,0.9850256);
  gre4->SetPointError(4,0,0.0003811562);
  gre4->SetPoint(5,8,0.9736333);
  gre4->SetPointError(5,0,0.0005144248);
  gre4->SetPoint(6,9,0.9545725);
  gre4->SetPointError(6,0,0.0007007838);
  gre4->SetPoint(7,10,0.9271724);
  gre4->SetPointError(7,0,0.0009439049);
  gre4->SetPoint(8,11,0.8943825);
  gre4->SetPointError(8,0,0.00257807);
  gre4->SetPoint(9,12,0.8590892);
  gre4->SetPointError(9,0,0.003218326);

  //gre->Draw("p");
  mg->Add(gre4,"p");

  TGraphErrors *gre5 = new TGraphErrors(10);
  gre5->SetName("Graph");
  gre5->SetTitle("p =    2 GeV, #Delta_{z} =   20 mm");
  gre5->SetMarkerStyle(24);
  gre5->SetMarkerSize(2.5);
  gre5->SetPoint(0,3.05,0.9917317);
  gre5->SetPointError(0,0,0.0003854672);
  gre5->SetPoint(1,4.05,0.9910168);
  gre5->SetPointError(1,0,0.0003718312);
  gre5->SetPoint(2,5.05,0.9905789);
  gre5->SetPointError(2,0,0.0004106149);
  gre5->SetPoint(3,6.05,0.9885476);
  gre5->SetPointError(3,0,0.0005239168);
  gre5->SetPoint(4,7.05,0.9845564);
  gre5->SetPointError(4,0,0.0008352127);
  gre5->SetPoint(5,8.05,0.9713894);
  gre5->SetPointError(5,0,0.0008033998);
  gre5->SetPoint(6,9.05,0.9536199);
  gre5->SetPointError(6,0,0.001078032);
  gre5->SetPoint(7,10.05,0.9279287);
  gre5->SetPointError(7,0,0.001377478);
  gre5->SetPoint(8,11.05,0.9072199);
  gre5->SetPointError(8,0,0.002015735);
  gre5->SetPoint(9,12.05,0.8614628);
  gre5->SetPointError(9,0,0.002719551);

  //gre5->Draw("p");
  mg->Add(gre5,"p");

  TGraphErrors *gre6 = new TGraphErrors(10);
  gre6->SetName("Graph");
  gre6->SetTitle("p =    3 GeV, #Delta_{z} =   20 mm");
  gre6->SetLineColor(2);
  gre6->SetMarkerColor(2);
  gre6->SetMarkerStyle(25);
  gre6->SetMarkerSize(2.5);
  gre6->SetPoint(0,3.1,0.9922634);
  gre6->SetPointError(0,0,0.0003618823);
  gre6->SetPoint(1,4.1,0.9913875);
  gre6->SetPointError(1,0,0.0003508282);
  gre6->SetPoint(2,5.1,0.991025);
  gre6->SetPointError(2,0,0.0003706493);
  gre6->SetPoint(3,6.1,0.9888482);
  gre6->SetPointError(3,0,0.0004561296);
  gre6->SetPoint(4,7.1,0.9832894);
  gre6->SetPointError(4,0,0.0006061171);
  gre6->SetPoint(5,8.1,0.9734782);
  gre6->SetPointError(5,0,0.0008474597);
  gre6->SetPoint(6,9.1,0.9540432);
  gre6->SetPointError(6,0,0.001018694);
  gre6->SetPoint(7,10.1,0.9303157);
  gre6->SetPointError(7,0,0.001476251);
  gre6->SetPoint(8,11.1,0.8995031);
  gre6->SetPointError(8,0,0.001948375);
  gre6->SetPoint(9,12.1,0);
  gre6->SetPointError(9,0,0);

  //gre->Draw("p");
  mg->Add(gre6,"p");

  TGraphErrors *gre7 = new TGraphErrors(10);
  gre7->SetName("Graph");
  gre7->SetTitle("p =    5 GeV, #Delta_{z} =   20 mm");
  gre7->SetLineColor(4);
  gre7->SetMarkerColor(4);
  gre7->SetMarkerStyle(32);
  gre7->SetMarkerSize(2.5);
  gre7->SetPoint(0,3.15,0.9935067);
  gre7->SetPointError(0,0,0.0003856959);
  gre7->SetPoint(1,4.15,0.9934168);
  gre7->SetPointError(1,0,0.0004146786);
  gre7->SetPoint(2,5.15,0.9930445);
  gre7->SetPointError(2,0,0.0004265101);
  gre7->SetPoint(3,6.15,0.9906111);
  gre7->SetPointError(3,0,0.0005008632);
  gre7->SetPoint(4,7.15,0.9852444);
  gre7->SetPointError(4,0,0.0006566814);
  gre7->SetPoint(5,8.15,0.9745338);
  gre7->SetPointError(5,0,0.0009299943);
  gre7->SetPoint(6,9.15,0.9564319);
  gre7->SetPointError(6,0,0.001231195);
  gre7->SetPoint(7,10.15,0.9321798);
  gre7->SetPointError(7,0,0.001612877);
  gre7->SetPoint(8,11.15,0.902885);
  gre7->SetPointError(8,0,0.002110734);
  gre7->SetPoint(9,12.15,0.8661737);
  gre7->SetPointError(9,0,0.002703284);

  //gre7->Draw("p");
  mg->Add(gre7,"p");

  mg->Draw("al");
  mg->SetMinimum(0.85);
  mg->SetMaximum(1.01);
  mg->GetXaxis()->SetLimits(0,14);

  mg->GetXaxis()->SetTitle("Mimosa threshold [#sigma_{noise}]");
  mg->GetXaxis()->SetNoExponent();
  mg->GetYaxis()->SetTitle("Mimosa efficiency");
  mg->GetXaxis()->SetTitleOffset(1.14);
  mg->GetYaxis()->SetTitleOffset(1.74);



  TLegend *leg = new TLegend(0.25,0.30,0.55,0.65,NULL,"brNDC");
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
