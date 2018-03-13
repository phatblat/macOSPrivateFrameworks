//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CHQueryDelegate.h"
#import "NSCopying.h"

@class CHRecognitionSession, NSArray, NSMapTable, NSMutableArray, NSMutableOrderedSet, NSOrderedSet, NSString, NSUUID, PKVectorTimestamp, PKVisualizationManager;

@interface PKDrawing : NSObject <CHQueryDelegate, NSCopying>
{
    long long _orientation;
    struct CGRect _bounds;
    NSMutableOrderedSet *_strokes;
    NSMutableArray *_visibleStrokes;
    BOOL _recognitionEnabled;
    NSArray *_forcedRecognitionLocales;
    NSUUID *_uuid;
    NSUUID *_replicaUUID;
    PKVectorTimestamp *_version;
    CHRecognitionSession *_recognitionSession;
    NSMapTable *_ongoingQueries;
    PKVisualizationManager *_visualizationManager;
    struct _PKStrokeID _orientationVersion;
    struct _PKStrokeID _boundsVersion;
    struct CGRect _strokeBounds;
}

+ (id)_enabledLocales;
+ (struct CGSize)defaultSize;
+ (struct CGSize)defaultPixelSize;
+ (struct CGAffineTransform)orientationTransform:(long long)arg1 size:(struct CGSize)arg2;
+ (void)sortStrokes:(id)arg1;
+ (id)drawingWithData:(id)arg1;
@property(retain, nonatomic) PKVisualizationManager *visualizationManager; // @synthesize visualizationManager=_visualizationManager;
@property(retain, nonatomic) NSMapTable *ongoingQueries; // @synthesize ongoingQueries=_ongoingQueries;
@property(retain, nonatomic) CHRecognitionSession *recognitionSession; // @synthesize recognitionSession=_recognitionSession;
@property(nonatomic) struct _PKStrokeID boundsVersion; // @synthesize boundsVersion=_boundsVersion;
@property(nonatomic) struct _PKStrokeID orientationVersion; // @synthesize orientationVersion=_orientationVersion;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) PKVectorTimestamp *version; // @synthesize version=_version;
@property(readonly, nonatomic) NSOrderedSet *strokes; // @synthesize strokes=_strokes;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic, setter=_setUUID:) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (void)didMergeWithDrawing:(id)arg1;
- (void)willMergeWithDrawing:(id)arg1;
- (id)strokeIdentifierFromData:(id)arg1;
- (id)dataRepresentationForStrokeIdentifier:(id)arg1;
- (id)strokeProviderVersionFromData:(id)arg1;
- (id)dataRepresentationForStrokeProviderVersion:(id)arg1;
- (id)strokeProviderSnapshot;
@property(readonly, copy) NSString *description;
- (void)queryDidUpdateResult:(id)arg1;
- (void)performSearchQuery:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)indexableContent;
- (void)cancelOngoingRecognitionRequests;
- (void)setNeedsRecognitionUpdate;
- (id)strokeForIdentifier:(id)arg1;
- (void)_updateRecognitionSession;
- (void)_teardownRecognitionObjects;
- (void)setForcedRecognitionLocales:(id)arg1;
- (id)forcedRecognitionLocales;
- (void)setRecognitionEnabled:(BOOL)arg1;
- (BOOL)recognitionEnabled;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)CHDrawing;
- (id)strokesIntersectedByPoint:(struct CGPoint)arg1 prevPoint:(struct CGPoint)arg2 minThreshold:(double)arg3 transform:(struct CGAffineTransform)arg4;
- (id)strokesIntersectedByPoint:(struct CGPoint)arg1 prevPoint:(struct CGPoint)arg2;
- (struct CGAffineTransform)orientationTransform;
- (unsigned long long)mergeWithDrawing:(id)arg1;
- (id)setStroke:(id)arg1 hidden:(BOOL)arg2 ink:(id)arg3 transform:(struct CGAffineTransform)arg4;
- (id)setStroke:(id)arg1 hidden:(BOOL)arg2 transform:(struct CGAffineTransform)arg3;
- (id)setStroke:(id)arg1 hidden:(BOOL)arg2 ink:(id)arg3;
- (id)setStroke:(id)arg1 hidden:(BOOL)arg2;
- (id)copyAndAddStroke:(id)arg1 transform:(struct CGAffineTransform)arg2;
- (id)addNewGeneratedStroke:(id)arg1;
- (void)addNewStroke:(id)arg1;
- (id)visibleStrokeForInsertingStroke:(id)arg1 transform:(struct CGAffineTransform)arg2;
- (id)visibleStrokeForInsertingStroke:(id)arg1;
- (void)setStrokeIDForInsertion:(id)arg1;
- (id)insertNewTestStroke;
- (struct _PKStrokeID)strokeVersionForUpdatedStroke:(id)arg1;
- (struct _PKStrokeID)strokeIDForNewStroke;
- (struct _PKStrokeID)newStrokeIDGreaterThan:(struct _PKStrokeID)arg1;
- (void)sortStrokes;
- (BOOL)setTransientOrientation:(long long)arg1;
@property(readonly, nonatomic) BOOL canChangeTransientOrientation;
- (void)takeOrientationFrom:(id)arg1;
- (void)invalidateStrokeBounds;
@property(readonly, nonatomic) struct CGRect strokeBounds; // @synthesize strokeBounds=_strokeBounds;
- (struct CGRect)calculateStrokeBounds;
@property(readonly, nonatomic) NSMutableArray *visibleStrokes;
- (id)mutableStrokes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeTransiently;
- (id)serialize;
- (void)dealloc;
- (id)initWithStrokes:(id)arg1 fromDrawing:(id)arg2;
- (id)initWithDrawing:(id)arg1;
- (id)init;
@property(readonly, nonatomic) NSUUID *replicaUUID; // @synthesize replicaUUID=_replicaUUID;
- (id)serializeWithPathData:(BOOL)arg1 toVersion:(unsigned int *)arg2;
- (id)serializeWithPathData:(BOOL)arg1;
- (unsigned int)saveToArchive:(Drawing_9931f320 *)arg1 withPathData:(BOOL)arg2;
- (id)initWithLegacyArchive:(const struct Drawing *)arg1 version:(unsigned int)arg2;
- (id)initWithArchive:(const Drawing_9931f320 *)arg1 version:(unsigned int)arg2;
- (id)initWithLegacyData:(id)arg1 version:(unsigned int)arg2;
- (id)initWithData:(id)arg1 version:(unsigned int)arg2;
- (id)initWithData:(id)arg1 andReplicaID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

