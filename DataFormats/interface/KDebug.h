/* This file is autogenerated by classes.UP. Do not edit!

    Copyright (c) 2010 - 2015, All Rights Reserved
    The authors are listed in the AUTHORS file.

    ../interface/KDebug.h
*/

#ifndef KAPPA_DEBUG_H
#define KAPPA_DEBUG_H

#include <iostream>
#include "Kappa.h"

std::ostream &operator<<(std::ostream &os, const KLV &lv);
std::ostream &operator<<(std::ostream &os, const KBeamSpot &bs);
std::ostream &operator<<(std::ostream &os, const KBasicMET &met);
std::ostream &operator<<(std::ostream &os, const KMET &met);
std::ostream &operator<<(std::ostream &os, const KTrackSummary &s);
std::ostream &operator<<(std::ostream &os, const KTrackPair &s);
std::ostream &operator<<(std::ostream &os, const KTrack &trk);
std::ostream &operator<<(std::ostream &os, const KParticle &p);
std::ostream &operator<<(std::ostream &os, const KGenParticle &p);
std::ostream &operator<<(std::ostream &os, const KGenPhoton &p);
std::ostream &operator<<(std::ostream &os, const KElectron &e);
std::ostream &operator<<(std::ostream &os, const KCaloJet &jet);
std::ostream &operator<<(std::ostream &os, const KBasicJet &jet);
std::ostream &operator<<(std::ostream &os, const KJet &jet);
std::ostream &operator<<(std::ostream &os, const KLepton &lep);
std::ostream &operator<<(std::ostream &os, const KBasicTau &tau);
std::ostream &operator<<(std::ostream &os, const KTau &tau);
std::ostream &operator<<(std::ostream &os, const KExtendedTau &tau);
std::ostream &operator<<(std::ostream &os, const KGenTau &tau);
std::ostream &operator<<(std::ostream &os, const KGenJet &jet);
std::ostream &operator<<(std::ostream &os, const KVertex &vertex);
std::ostream &operator<<(std::ostream &os, const KVertexSummary &vs);
std::ostream &operator<<(std::ostream &os, const KTaupairVerticesMap &pvs);
std::ostream &operator<<(std::ostream &os, const KTriggerObjects &to);
std::ostream &operator<<(std::ostream &os, const KPileupDensity &pu);
std::ostream &operator<<(std::ostream &os, const KHit &hit);
std::ostream &operator<<(std::ostream &os, const KPFCandidate &cand);
std::ostream &operator<<(std::ostream &os, const KFilterSummary &filter);
std::ostream &operator<<(std::ostream &os, const KHCALNoiseSummary &noise);
std::ostream &operator<<(std::ostream &os, const KL1Muon &mu);
std::ostream &operator<<(std::ostream &os, const KMuon &mu);
std::ostream &operator<<(std::ostream &os, const KMuonTriggerCandidate &cand);
std::ostream &operator<<(std::ostream &os, const KProvenance &p);
std::ostream &operator<<(std::ostream &os, const KLumiInfo &info);
std::ostream &operator<<(std::ostream &os, const KGenLumiInfo &info);
std::ostream &operator<<(std::ostream &os, const KDataLumiInfo &info);
std::ostream &operator<<(std::ostream &os, const KEventInfo &i);
std::ostream &operator<<(std::ostream &os, const KTauMetadata &m);
std::ostream &operator<<(std::ostream &os, const KMuonMetadata &m);
std::ostream &operator<<(std::ostream &os, const KElectronMetadata &m);
std::ostream &operator<<(std::ostream &os, const KJetMetadata &m);
std::ostream &operator<<(std::ostream &os, const KTriggerObjectMetadata &m);
std::ostream &operator<<(std::ostream &os, const KFilterMetadata &m);
std::ostream &operator<<(std::ostream &os, const KGenEventInfo &i);
std::ostream &displayHLT(std::ostream &os, const KLumiInfo &metaLumi, const KEventInfo &metaEvent);
std::ostream &displayTO(std::ostream &os, const size_t hltIdx, const KTriggerObjects *trgObj);

#include "KDebug.hxx"

#endif
