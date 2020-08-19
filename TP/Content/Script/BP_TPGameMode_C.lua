--[[ 
 DESCRIPTION

 @COMPANY **
 @AUTHOR **
 @DATE ${date} ${time}
--]]

require "UnLua"

local BP_TPGameMode_C = Class()

function BP_TPGameMode_C:Initialize(Initializer)
	print("BP_TPGameMode_C:Initialize")
end

function BP_TPGameMode_C:UserConstructionScript()
	print("BP_TPGameMode_C:UserConstructionScript")
end

function BP_TPGameMode_C:ReceiveBeginPlay()
	print("BP_TPGameMode_C:ReceiveBeginPlay")
end

function BP_TPGameMode_C:ReceiveEndPlay()
	print("BP_TPGameMode_C:ReceiveEndPlay")
end

 function BP_TPGameMode_C:ReceiveTick(DeltaSeconds)
 	print("BP_TPGameMode_C:ReceiveTick")
 end

function BP_TPGameMode_C:ReceiveAnyDamage(Damage, DamageType, InstigatedBy, DamageCauser)
 	print("BP_TPGameMode_C:ReceiveAnyDamage")
end

function BP_TPGameMode_C:ReceiveActorBeginOverlap(OtherActor)
 	print("BP_TPGameMode_C:ReceiveActorBeginOverlap")
end

function BP_TPGameMode_C:ReceiveActorEndOverlap(OtherActor)
 	print("BP_TPGameMode_C:ReceiveActorEndOverlap")
end

return BP_TPGameMode_C
