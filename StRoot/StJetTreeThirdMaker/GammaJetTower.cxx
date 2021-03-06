#include "GammaJetTower.h"

//Contains the Member Functions for the TRACK Class                             

ClassImp(GammaJetTower);

//_____________________________________________________________________         
GammaJetTower::GammaJetTower():TObject()
			      ,TwrId(-999)
			      ,TwrEng ( -999.)
			      ,TwrEta (-999.)
			      ,TwrPhi( -999.)
			      ,TwrADC (-999.)
			      ,TwrPed (-999999.)
			      ,TwrRMS (-999999.)
			      ,TwrMatchIdnex(-999)
			      ,NoOfmatchedTrk(-999)
			      ,TwrMatchP(-999.)
			      ,TwrPx(-999.)
			      ,TwrPy(-999.)
			      , TwrPz(-999.)
			      , fNAssocTracks(0)
			       //			      , fMatchedTracks(1)
{

  // modified [Derek, 07.21.2017]
  for (int i = 0; i < 10; i++) {
    fMatchedTracksArray_[i]       = -9.;
    fMatchedTracksArray_P[i]      = -9.;
    fMatchedTracksArray_nSigPi[i] = -999.;
    fMatchedTracksArray_nSigK[i]  = -999.;
    fMatchedTracksArray_nSigP[i]  = -999.;
    fMatchedTracksArray_nSigE[i]  = -999.;
    fMatchedTracksArray_dcag[i]   = -9.;
    fMatchedTracksArray_eta[i]    = -9.;
    fMatchedTracksArray_pT[i]     = -9.;
    fMatchedTracksArray_nFit[i]   = -9;
    fMatchedTracksArray_nPos[i]   = -9;
  }

}

//_____________________________________________________________________         
GammaJetTower::~GammaJetTower(){
  
  //GammaJetTower Destructor                                                            
  //  TwrMatchP.clear();
  fNAssocTracks = 0;
  //  fMatchedTracks.Set(1);
  //  fMatchedTracks.Reset(-1);
}
//______________
void GammaJetTower::Clear(Option_t */*Option*/)
{
  TwrId = -999;
  TwrEng = -999.;
  TwrEta = -999.;
  TwrPhi = -999.;
  TwrADC = -999.;
  TwrPed = -999.;
  TwrRMS = -999.;
  TwrMatchIdnex = -999;
  NoOfmatchedTrk = -999;
  TwrMatchP = -999.;
  TwrPx =-999.;
  TwrPy =-999.;
  TwrPz =-999.;
  fNAssocTracks = 0;

  // modified [Derek, 07.21.2017]
  for (int i = 0; i < 10; i++) {
    fMatchedTracksArray_[i]       = -9.;
    fMatchedTracksArray_P[i]      = -9.;
    fMatchedTracksArray_nSigPi[i] = -999.;
    fMatchedTracksArray_nSigK[i]  = -999.;
    fMatchedTracksArray_nSigP[i]  = -999.;
    fMatchedTracksArray_nSigE[i]  = -999.;
    fMatchedTracksArray_dcag[i]   = -9.;
    fMatchedTracksArray_eta[i]    = -9.;
    fMatchedTracksArray_pT[i]     = -9.;
    fMatchedTracksArray_nFit[i]   = -9;
    fMatchedTracksArray_nPos[i]   = -9;
  }

}
//_____________________________________________________________________         
GammaJetTower::GammaJetTower(GammaJetTower  &towerarray)
  :TObject(towerarray)
  ,TwrId(towerarray.TwrId)
  ,TwrEng(towerarray.TwrEng)
  ,TwrEta(towerarray.TwrEta)
  ,TwrPhi(towerarray.TwrPhi)
  ,TwrADC(towerarray.TwrADC)
  ,TwrPed(towerarray.TwrPed)
  ,TwrRMS(towerarray.TwrRMS)
  ,TwrMatchIdnex(towerarray.TwrMatchIdnex)
  ,NoOfmatchedTrk(towerarray.NoOfmatchedTrk)
  ,TwrMatchP(towerarray.TwrMatchP)
  ,TwrPx(towerarray.TwrPx)
  ,TwrPy(towerarray.TwrPy)
  , TwrPz(towerarray.TwrPz)
  , fNAssocTracks(towerarray.fNAssocTracks)
   //  ,fMatchedTracksArray_(towerarray.fMatchedTracksArray_)
 {
  
   //   fMatchedTracks.Copy(towerarray.fMatchedTracks);
}

//_____________________________________________________________________         
void GammaJetTower::PrintTower(){

  
}

//____________________________
void GammaJetTower::AddMatchedTrack(Int_t idx)
{
  /*
  //
  // Add new index
  // Resize the array if necessary
  //
  if (fNAssocTracks < fMatchedTracks.GetSize())
    {
      fMatchedTracks[fNAssocTracks++] = idx;      
    }
  else
    {
      //Int_t newsize = fMatchedTracks.GetSize() * 2;
      //since the N of matched tracks should drop steeply we can be modest
      //Int_t newsize = fMatchedTracks.GetSize() + 2;
      Int_t newsize = fMatchedTracks.GetSize() + 1;
      //      __DEBUG(3, Form("Resizing indexes array from %d to %d", fMatchedTracks.GetSize(), newsize));
      
      fMatchedTracks.Set(newsize);
      AddMatchedTrack(idx);
    }
  */
}
