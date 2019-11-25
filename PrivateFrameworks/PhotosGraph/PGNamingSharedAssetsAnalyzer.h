//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PGNamingAnalyzer.h"

@class NSString, PGGraphNamingProcessor;

@interface PGNamingSharedAssetsAnalyzer : NSObject <PGNamingAnalyzer>
{
    PGGraphNamingProcessor *_processor;
}

@property(readonly, nonatomic) __weak PGGraphNamingProcessor *processor; // @synthesize processor=_processor;
- (void).cxx_destruct;
- (id)name;
- (void)findSharedAssetMatchesFromSharingRecords:(id)arg1 personLocalIdentifiersByAssetUUID:(id)arg2 graph:(id)arg3 withProgressBlock:(CDUnknownBlockType)arg4;
- (void)runAnalysisWithProgressBlock:(CDUnknownBlockType)arg1;
- (id)initWithNamingProcessor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

