//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface PHALibraryChangeBuffer : NSObject
{
    NSMutableDictionary *_assetIdentifierToFlagsMap;
    NSMutableSet *_representedAssetJobScenarios;
    NSMutableArray *_momentChanges;
    NSMutableArray *_personChanges;
}

@property(retain) NSMutableArray *personChanges; // @synthesize personChanges=_personChanges;
@property(retain) NSMutableArray *momentChanges; // @synthesize momentChanges=_momentChanges;
@property(retain) NSMutableSet *representedAssetJobScenarios; // @synthesize representedAssetJobScenarios=_representedAssetJobScenarios;
@property(retain) NSMutableDictionary *assetIdentifierToFlagsMap; // @synthesize assetIdentifierToFlagsMap=_assetIdentifierToFlagsMap;
- (void).cxx_destruct;
@property(readonly) unsigned long long uniqueChangeObjectCount;
- (id)changedAssetIdentifiers;
- (BOOL)hasChanges;
- (BOOL)hasAssetChanges;
- (BOOL)hasPersonChanges;
- (void)addPersonChange:(id)arg1;
- (BOOL)hasMomentChanges;
- (void)addMomentChange:(id)arg1;
- (BOOL)representsUserForegroundJobScenario;
- (void)mergeRepresentedJobScenario:(unsigned long long)arg1;
- (void)mergeFlags:(int)arg1 forAssetWithIdentifier:(id)arg2;
- (void)drain;
- (id)snapshotAndDrain;
- (id)init;

@end

