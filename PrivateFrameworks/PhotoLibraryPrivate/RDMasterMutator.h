//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RDMasterMutator : NSObject
{
}

+ (BOOL)_updateMaster:(id)arg1 isMissing:(BOOL)arg2 withReason:(unsigned short)arg3;
+ (BOOL)_checkMasterAvailableOnDisk:(id)arg1 error:(id *)arg2;
+ (id)_newMutableMaster:(id)arg1;
+ (BOOL)isMasterReallyAvailable:(id)arg1;

@end

