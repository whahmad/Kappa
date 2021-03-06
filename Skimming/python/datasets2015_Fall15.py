queries = {
	"Fall15_Data" : {
		"data" : True,
		"scenario" : "16Dec2015v1",
		"energy" : "13"
	},
	"Fall15_DYJets": {
		"process" : "^DY([0-9])?JetsTo(LL|TauTau)",
		"campaign" : "RunIIFall15MiniAODv2",
		"energy" : "13"
	},
	"Fall15_Dibosons": {
		"process" : "(W|Z|V)(W|Z|V)(Jets)?(To)?",
		"campaign" : "RunIIFall15MiniAODv2",
		"energy" : "13"
	},
	"Fall15_SUSY_Sync": {
		"process" : "SUSYGluGluToHToTauTau_M160$",
		"campaign" : "RunIIFall15MiniAODv2",
		"energy" : "13"
	},
	"Fall15_SUSY": {
		"process" : "SUSY",
		"campaign" : "RunIIFall15MiniAODv2",
		"energy" : "13"
	},
	"Fall15_SM_Higgs": {
		"process" : "(GluGlu|VBF|Wplus|Wminus|Z)HToTauTau",
		"campaign" : "RunIIFall15MiniAODv2",
		"energy" : "13"
	},
	"Fall15_TTJets": {
		"process" : "^TTJets|^Tbar|^T_tW|^TT|(^ST.*)$",
		"campaign" : "RunIIFall15MiniAODv2",
		"energy" : "13"
	},
	"Fall15_WJets": {
		"process" : "(^W(\d)Jets|^WJets)ToLNu",
		"campaign" : "RunIIFall15MiniAODv2",
		"energy" : "13"
	},
	"Fall15_EWK": {
		"process" : "^EWK(WMinus|WPlus|Z)2Jets",
		"campaign" : "RunIIFall15MiniAODv2",
		"energy" : "13"
	},
        "Fall15_embedded": {
                "data" : True,
                "embedded" : True,
                "process" : "Embedding2015D",
                "energy" : "13"
        }
}
