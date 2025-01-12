// Copyright (c) 2017 Computer Vision Center (CVC) at the Universitat Autonoma
// de Barcelona (UAB).
//
// This work is licensed under the terms of the MIT license.
// For a copy, see <https://opensource.org/licenses/MIT>.

#include "Carla.h"
#include "Carla/Game/CarlaGameInstance.h"
#include "Carla/Settings/CarlaSettings.h"



UCarlaGameInstance::UCarlaGameInstance() :
	CarlaSettings(CreateDefaultSubobject<UCarlaSettings>(TEXT("CarlaSettings"))),
	CarlaEngine(),
	Recorder(CreateDefaultSubobject<ACarlaRecorder>(TEXT("Recorder"))),
	GenerationParameters(),
	CurrentMapLayer(static_cast<int32>(carla::rpc::MapLayer::All)),
	_MapPath()
{
  CarlaEngine.SetRecorder(Recorder);
  check(CarlaSettings != nullptr);
  CarlaSettings->LoadSettings();
  CarlaSettings->LogSettings();
}