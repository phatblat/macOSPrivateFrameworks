//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CHDrawing, NSCharacterSet;

@interface CHClassifiableDrawing : NSObject
{
    BOOL _expandCodePoints;
    BOOL _firstPointIsSubstrokeCut;
    BOOL _lastPointIsSubstrokeCut;
    CHDrawing *_drawing;
    NSCharacterSet *_characterSet;
    unsigned long long _maxCandidateCount;
    struct CGRect _normalizationContext;
}

@property(readonly, nonatomic) unsigned long long maxCandidateCount; // @synthesize maxCandidateCount=_maxCandidateCount;
@property(readonly, nonatomic) BOOL lastPointIsSubstrokeCut; // @synthesize lastPointIsSubstrokeCut=_lastPointIsSubstrokeCut;
@property(readonly, nonatomic) BOOL firstPointIsSubstrokeCut; // @synthesize firstPointIsSubstrokeCut=_firstPointIsSubstrokeCut;
@property(readonly, nonatomic) struct CGRect normalizationContext; // @synthesize normalizationContext=_normalizationContext;
@property(readonly, nonatomic) BOOL expandCodePoints; // @synthesize expandCodePoints=_expandCodePoints;
@property(readonly, retain, nonatomic) NSCharacterSet *characterSet; // @synthesize characterSet=_characterSet;
@property(readonly, retain, nonatomic) CHDrawing *drawing; // @synthesize drawing=_drawing;
- (void)dealloc;
- (id)initWithDrawing:(id)arg1 characterSet:(id)arg2 expandCodePoints:(BOOL)arg3 normalizationContext:(struct CGRect)arg4 firstPointIsSubstrokeCut:(BOOL)arg5 lastPointIsSubstrokeCut:(BOOL)arg6 maxCandidateCount:(unsigned long long)arg7;

@end

