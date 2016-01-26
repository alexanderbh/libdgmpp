#pragma once
#include "Facility.h"
#include "Schematic.h"
#include "ProductionCycle.h"

namespace dgmpp {
	class IndustryFacility: public Facility {
	public:
		enum: TypeID {
			GROUP_ID = 1028
		};
		IndustryFacility(TypeID typeID, const std::string& typeName, double capacity, std::shared_ptr<Planet> const& owner = std::shared_ptr<Planet>(nullptr), int64_t identifier = 0);
		virtual TypeID getGroupID() const {return GROUP_ID;};
		
		std::shared_ptr<Schematic> setSchematic(TypeID schematicID);
		std::shared_ptr<Schematic> getSchematic() const {return schematic_;};
		
		virtual double getLaunchTime() const {return launchTime_;};
		virtual double getCycleTime() const;
		int32_t getQuantityPerCycle() const;
		void setLaunchTime(double launchTime);
		
		virtual uint32_t getFreeStorage(const Commodity& commodity) const;
		
		std::shared_ptr<const ProductionCycle> getCycle(double timeStamp) const;
		Commodity getOutput() const;
		virtual bool routed() const;

		virtual void update(double time);

	protected:
		virtual double getNextUpdateTime() const;
		virtual double getCycleEndTime() const;
		void finishCycle(double cycleTime);
		void startCycle(double cycleTime);
		virtual int priority() const {return -getOutput().getTier();};
	private:
		double launchTime_;
		double nextUpdateTime_;
		std::shared_ptr<Schematic> schematic_;
		
		std::shared_ptr<ProductionCycle> productionCycle_;

	};
}