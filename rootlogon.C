// This is the file rootlogon.C
{
  printf("+-------------------------------+\n");
  printf("| Beginning new ROOT session... |\n");
  printf("+-------------------------------+\n");

  TStyle *myStyle = new TStyle("MyStyle","My Root Styles");

  // from ROOT plain style
  myStyle->SetCanvasBorderMode(0);
  myStyle->SetPadBorderMode(0);
  myStyle->SetPadColor(0);
  myStyle->SetCanvasColor(0);
  myStyle->SetTitleColor(1);
  myStyle->SetStatColor(0);

  // set axis label title font
  myStyle->SetNdivisions(510, "xyz");
  myStyle->SetLabelSize(0.04, "xyz");
  myStyle->SetLabelColor(1, "xyz");
  myStyle->SetLabelFont(62, "xyz");
  myStyle->SetLabelOffset(0.005, "xyz");
  myStyle->SetLabelSize(0.04, "xyz");
  myStyle->SetTickLength(0.03, "xyz");
  myStyle->SetAxisColor(1, "xyz");
  myStyle->SetTitleOffset(0.9, "x");
  myStyle->SetTitleOffset(1.2, "y");
  myStyle->SetTitleOffset(1., "z");
  myStyle->SetTitleSize(0.05, "xyz");
  myStyle->SetTitleColor(1, "xyz");
  myStyle->SetTitleFont(62, "xyz");

  myStyle->SetBarWidth(1);
  myStyle->SetBarOffset(0);
  myStyle->SetDrawBorder(1);
  myStyle->SetOptLogx(0);
  myStyle->SetOptLogy(0);
  myStyle->SetOptLogz(0);

  myStyle->SetOptDate(0);
  myStyle->SetOptStat(0);
  myStyle->SetOptTitle(1);
  myStyle->SetOptFit(1);
  myStyle->SetNumberContours(99);

  myStyle->GetAttDate()->SetTextFont(62);
  myStyle->GetAttDate()->SetTextSize(0.025);
  myStyle->GetAttDate()->SetTextAngle(0);
  myStyle->GetAttDate()->SetTextAlign(11);
  myStyle->GetAttDate()->SetTextColor(1);
  myStyle->SetDateX(0.01);
  myStyle->SetDateY(0.01);

  myStyle->SetEndErrorSize(2);
  myStyle->SetErrorX(0.5);
  myStyle->SetFuncColor(1);
  myStyle->SetFuncStyle(1);
  myStyle->SetFuncWidth(3);
  myStyle->SetGridColor(0);
  myStyle->SetGridStyle(3);
  myStyle->SetGridWidth(1);
  myStyle->SetLegendBorderSize(4);
  myStyle->SetHatchesLineWidth(1);
  myStyle->SetHatchesSpacing(1);
  myStyle->SetFrameFillColor(0);
  myStyle->SetFrameLineColor(1);
  myStyle->SetFrameFillStyle(1001);
  myStyle->SetFrameLineStyle(1);
  myStyle->SetFrameLineWidth(1);
  myStyle->SetFrameBorderSize(1);
  myStyle->SetFrameBorderMode(0);

  myStyle->SetHistFillColor(kBlue-8);
  myStyle->SetHistLineColor(1);
  myStyle->SetHistLineStyle(1);
  myStyle->SetHistLineWidth(2);
  myStyle->SetHistFillStyle(1001);
  myStyle->SetHistMinimumZero(kFALSE);

  myStyle->SetPaperSize(20, 20);
  myStyle->SetScreenFactor(0.8448);
  myStyle->SetStatColor(19);
  myStyle->SetStatTextColor(1);
  myStyle->SetStatBorderSize(2);
  myStyle->SetStatFont(62);
  myStyle->SetStatFontSize(0);
  myStyle->SetStatStyle(1001);
  myStyle->SetStatFormat("6.4g");
  myStyle->SetStatX(0.98);
  myStyle->SetStatY(0.995);
  myStyle->SetStatW(0.2);
  myStyle->SetStatH(0.16);
  myStyle->SetStripDecimals(kTRUE);
  myStyle->SetTitleAlign(23);
  myStyle->SetTitleFillColor(19);
  myStyle->SetTitleTextColor(1);
  myStyle->SetTitleBorderSize(2);
  myStyle->SetTitleFont(62);
  myStyle->SetTitleFontSize(0);
  myStyle->SetTitleStyle(1001);
  myStyle->SetTitleX(0.50);
  myStyle->SetTitleY(0.975);
  myStyle->SetTitleW(0);
  myStyle->SetTitleH(0);
  myStyle->SetLegoInnerR(0.5);

  myStyle->SetLineColor(1);
  myStyle->SetLineStyle(1);
  myStyle->SetLineWidth(1);
  myStyle->SetFillColor(3);
  myStyle->SetFillStyle(3001);
  myStyle->SetMarkerColor(1);
  myStyle->SetMarkerSize(1);
  myStyle->SetMarkerStyle(1);
  myStyle->SetTextAlign(11);
  myStyle->SetTextAngle(0);
  myStyle->SetTextColor(1);
  myStyle->SetTextFont(62);
  myStyle->SetTextSize(0.05);

  // default canvas positioning
  myStyle->SetCanvasDefX(50);
  myStyle->SetCanvasDefY(50);
  myStyle->SetCanvasDefH(800);
  myStyle->SetCanvasDefW(800);
  myStyle->SetCanvasPreferGL(kFALSE);
  myStyle->SetCanvasColor(0);
  myStyle->SetCanvasBorderSize(2);
  myStyle->SetCanvasBorderMode(0);

  myStyle->SetPadBottomMargin(0.1);
  myStyle->SetPadTopMargin(0.1);
  myStyle->SetPadLeftMargin(0.1);
  myStyle->SetPadRightMargin(0.1);
  myStyle->SetPadColor(19);
  myStyle->SetPadBorderSize(2);
  myStyle->SetPadBorderMode(1);
  myStyle->SetPadGridX(kFALSE);
  myStyle->SetPadGridY(kFALSE);
  myStyle->SetPadTickX(1);
  myStyle->SetPadTickY(1);

  myStyle->SetPalette(1);
  myStyle->SetLineColor(1);
  myStyle->SetLineStyle(1);
  myStyle->SetLineWidth(1);
  myStyle->SetFillColor(3);
  myStyle->SetFillStyle(1001);
  myStyle->SetMarkerColor(1);
  myStyle->SetMarkerSize(1);
  myStyle->SetMarkerStyle(1);
  myStyle->SetTextAlign(11);
  myStyle->SetTextAngle(0);
  myStyle->SetTextColor(1);
  myStyle->SetTextFont(62);
  myStyle->SetTextSize(0.05);

  // set style
  gROOT->SetStyle("MyStyle");
  gROOT->UseCurrentStyle();
  gROOT->ForceStyle(kTRUE);
}
