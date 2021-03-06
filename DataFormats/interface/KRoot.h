//- Copyright (c) 2010 - All Rights Reserved
//-  * Fred Stober <stober@cern.ch>
//-  * Joram Berger <joram.berger@cern.ch>

#ifndef KAPPA_ROOT_H
#define KAPPA_ROOT_H

#include <Math/PtEtaPhiM4D.h>
#include <Math/LorentzVector.h>
#include <Math/Point3D.h>
#include <Math/MatrixRepresentationsStatic.h>

typedef ROOT::Math::PtEtaPhiM4D<float> RMFLV_Store;
typedef ROOT::Math::LorentzVector<RMFLV_Store> RMFLV;

typedef ROOT::Math::PxPyPzE4D<float> CartesianRMFLV_Store;
typedef ROOT::Math::LorentzVector<CartesianRMFLV_Store> CartesianRMFLV;

typedef ROOT::Math::PtEtaPhiM4D<double> RMDLV_Store;
typedef ROOT::Math::LorentzVector<RMDLV_Store> RMDLV;

typedef ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float> > RMPoint;

typedef ROOT::Math::SMatrix<double, 3, 3, ROOT::Math::MatRepSym<double, 3> > SMatrixSym3D;

#ifdef KAPPA_STANDALONE_DICT
namespace ROOT
{
	namespace Math
	{
		template<unsigned int D>
		struct SymMatrixOffsets
		{
		protected:
			static RowOffsets<D> offsets;
		};
	}
}
#endif

#endif
