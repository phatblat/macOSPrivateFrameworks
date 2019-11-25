//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PGRelationshipAnalyzer.h"

@class NSString, PGGraphRelationshipProcessor;

@interface PGRelationshipWorkAnalyzer : NSObject <PGRelationshipAnalyzer>
{
    PGGraphRelationshipProcessor *_processor;
}

@property(readonly, nonatomic) __weak PGGraphRelationshipProcessor *processor; // @synthesize processor=_processor;
- (void).cxx_destruct;
- (void)runAnalysisWithProgressBlock:(CDUnknownBlockType)arg1;
- (id)initWithRelationshipProcessor:(id)arg1;
@property(readonly, nonatomic) NSString *name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

