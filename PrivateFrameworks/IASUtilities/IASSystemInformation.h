//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IASSystemInformation : NSObject
{
}

+ (BOOL)setNVRAMKeyWithValue:(id)arg1 key:(id)arg2 error:(id *)arg3;
+ (id)getNvramDataForKey:(id)arg1;
+ (id)nvramStringForKey:(id)arg1;
+ (id)getBootSessionUUID:(id *)arg1;
+ (id)localVisibleUsers;
+ (id)machineBoardID;
+ (BOOL)runningFromInstallMedia;
+ (BOOL)hasAppleIPAddress;
+ (BOOL)isRunningOnACPower;
+ (BOOL)machineHasBattery;

@end

