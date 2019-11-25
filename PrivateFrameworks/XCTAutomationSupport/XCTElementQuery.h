//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "XCTCapabilitiesProviding.h"

@class NSArray, NSDictionary, NSString, XCAccessibilityElement, XCElementSnapshot, XCTTimeoutControls;

@interface XCTElementQuery : NSObject <NSSecureCoding, XCTCapabilitiesProviding>
{
    BOOL _isMacOS;
    BOOL _suppressAttributeKeyPathAnalysis;
    BOOL _useLegacyElementType;
    XCAccessibilityElement *_rootElement;
    unsigned long long _options;
    XCTTimeoutControls *_timeoutControls;
    id <XCTElementSnapshotProvider> _snapshotProvider;
    id <XCTElementSnapshotAttributeDataSource> _elementSnapshotAttributeDataSource;
    XCElementSnapshot *_rootElementSnapshot;
    CDUnknownBlockType _evaluationContext;
    NSArray *_transformers;
}

+ (id)_firstMatchTransformerSubarraysFromArray:(id)arg1 trailingMatchAllTransformers:(id *)arg2;
+ (void)provideCapabilitiesToBuilder:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property BOOL useLegacyElementType; // @synthesize useLegacyElementType=_useLegacyElementType;
@property(readonly, copy) NSArray *transformers; // @synthesize transformers=_transformers;
@property(copy, nonatomic) CDUnknownBlockType evaluationContext; // @synthesize evaluationContext=_evaluationContext;
@property(retain) XCElementSnapshot *rootElementSnapshot; // @synthesize rootElementSnapshot=_rootElementSnapshot;
@property BOOL suppressAttributeKeyPathAnalysis; // @synthesize suppressAttributeKeyPathAnalysis=_suppressAttributeKeyPathAnalysis;
@property __weak id <XCTElementSnapshotAttributeDataSource> elementSnapshotAttributeDataSource; // @synthesize elementSnapshotAttributeDataSource=_elementSnapshotAttributeDataSource;
@property(retain) id <XCTElementSnapshotProvider> snapshotProvider; // @synthesize snapshotProvider=_snapshotProvider;
@property(retain) XCTTimeoutControls *timeoutControls; // @synthesize timeoutControls=_timeoutControls;
@property(readonly) BOOL isMacOS; // @synthesize isMacOS=_isMacOS;
@property(readonly) unsigned long long options; // @synthesize options=_options;
@property(readonly, copy) XCAccessibilityElement *rootElement; // @synthesize rootElement=_rootElement;
- (void).cxx_destruct;
- (id)_allMatchingSnapshotsForInput:(id)arg1 transformers:(id)arg2 relatedElements:(id *)arg3 noMatchesMessage:(id *)arg4 error:(id *)arg5;
- (id)_firstMatchingSnapshotForInput:(id)arg1 transformers:(id)arg2 relatedElements:(id *)arg3 noMatchesMessage:(id *)arg4 error:(id *)arg5;
- (id)_firstMatchingSnapshotForInput:(id)arg1 transformersSubarrays:(id)arg2 relatedElements:(id *)arg3 noMatchesMessage:(id *)arg4 error:(id *)arg5;
- (id)matchingSnapshotsInSnapshotTree:(id)arg1 relatedElements:(id *)arg2 noMatchesMessage:(id *)arg3 error:(id *)arg4;
- (id)matchingSnapshotsWithRelatedElements:(id *)arg1 noMatchesMessage:(id *)arg2 error:(id *)arg3;
- (id)_snapshotForElement:(id)arg1 error:(id *)arg2;
- (id)_rootElementSnapshot:(id *)arg1;
@property(readonly, copy) NSDictionary *snapshotParameters;
@property(readonly, copy) NSArray *snapshotAttributes;
- (BOOL)hasTransformerWithStopsOnFirstMatch;
@property(readonly) BOOL supportsAttributeKeyPathAnalysis;
- (BOOL)canBeRemotelyEvaluatedWithCapabilities:(id)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) BOOL supportsRemoteEvaluation;
- (id)initWithRootElement:(id)arg1 transformers:(id)arg2 options:(unsigned long long)arg3 isMacOS:(BOOL)arg4 timeoutControls:(id)arg5;
- (id)initWithRootElement:(id)arg1 transformers:(id)arg2 options:(unsigned long long)arg3 isMacOS:(BOOL)arg4;
- (id)initWithRootElement:(id)arg1 transformers:(id)arg2 options:(unsigned long long)arg3;
- (id)initWithRootElement:(id)arg1 transformers:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

