/* Copyright (c) 2010 - All Rights Reserved
 *   Armin Burgmeier <burgmeier@ekp.uni-karlsruhe.de>
 *   Fred Stober <stober@cern.ch>
 *   Joram Berger <joram.berger@cern.ch>
 *   Manuel Zeise <zeise@cern.ch>
 */

#ifndef KAPPA_PFMETPRODUCER_H
#define KAPPA_PFMETPRODUCER_H

#include "KBaseMultiProducer.h"
#include "../../DataFormats/interface/KBasic.h"
#include "../../DataFormats/interface/KDebug.h"
#include <DataFormats/METReco/interface/PFMET.h>

class KPFMETProducer : public KBaseMultiProducer<edm::View<reco::PFMET>, KDataPFMET>
{
public:
	KPFMETProducer(const edm::ParameterSet &cfg, TTree *_event_tree, TTree *_run_tree) :
		KBaseMultiProducer<edm::View<reco::PFMET>, KDataPFMET>(cfg, _event_tree, _run_tree, getLabel()) {}

	static const std::string getLabel() { return "PFMET"; }

protected:
	virtual void clearProduct(OutputType &output) { output.p4.SetCoordinates(0, 0, 0, 0); output.sumEt = -1; }
	virtual void fillProduct(const InputType &in, OutputType &out,
		const std::string &name, const edm::InputTag *tag, const edm::ParameterSet &pset)
	{
		if (in.size() == 1)
		{
			copyP4(in.at(0), out.p4);
			out.sumEt = in.at(0).sumEt();

			out.chargedEMEtFraction = in.at(0).ChargedEMEtFraction();
			out.chargedHadEtFraction = in.at(0).ChargedHadEtFraction();
			out.muonEtFraction = in.at(0).MuonEtFraction();
			out.neutralEMEtFraction = in.at(0).NeutralEMEtFraction();
			out.neutralHadEtFraction = in.at(0).NeutralHadEtFraction();
			out.type6EtFraction = in.at(0).Type6EtFraction();
			out.type7EtFraction = in.at(0).Type7EtFraction();

			TMatrixD mat = in.at(0).getSignificanceMatrix();
			if (mat(0,1) != mat(1,0))
				std::cout << "Matrix is not symmetric: " << mat(0,1) << " != " << mat(1,0) << std::endl;
			//assert(mat(0,1) == mat(1,0));
			out.significance(0,0) = mat(0,0);
			out.significance(0,1) = mat(0,1);
			if (out.significance(1,0) != mat(1,0))
				std::cout << "Significance matrix is not identical to input:"
					<< out.significance(1,0) << " != " << mat(1,0) << std::endl;
			out.significance(1,1) = mat(1,1);
		}
		else
			if (verbosity > 1)
				std::cout << "KPFMETProducer::fillProduct : Found " << in.size() << " PFMET objects!" << std::endl;
	}
};

#endif
