//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XCTAutomationSupport/XCTElementSetCodableTransformer.h>

#import "XCTCapabilitiesProviding.h"

@class NSString;

@interface XCTElementDisclosedChildRowsTransformer : XCTElementSetCodableTransformer <XCTCapabilitiesProviding>
{
    BOOL _stopsOnFirstMatch;
    NSString *_transformationDescription;
}

+ (void)provideCapabilitiesToBuilder:(id)arg1;
- (void)setStopsOnFirstMatch:(BOOL)arg1;
- (BOOL)stopsOnFirstMatch;
- (void)setTransformationDescription:(id)arg1;
- (id)transformationDescription;
- (void).cxx_destruct;
- (id)requiredKeyPathsOrError:(id *)arg1;
- (BOOL)supportsAttributeKeyPathAnalysis;
- (BOOL)supportsRemoteEvaluation;
- (BOOL)canBeRemotelyEvaluatedWithCapabilities:(id)arg1;
- (id)iteratorForInput:(id)arg1;
- (id)transform:(id)arg1 relatedElements:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

