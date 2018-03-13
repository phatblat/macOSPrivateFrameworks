//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NotesUI/TTZoomController.h>

@class NSHashTable;

@interface ICMZoomController : TTZoomController
{
    BOOL _onlyAcceptsCustomZooms;
    long long _localZoomFactorIndex;
    double _attachmentBrickZoomFactor;
    NSHashTable *_delegates;
    long long _savedZoomFactorIndex;
}

+ (double)checklistZoomFactor;
+ (double)attachmentBrickZoomFactor;
+ (double)noteListZoomFactor;
+ (double)globalZoomFactor;
+ (id)convertFontSizeArrayToMultipliersFromArray:(id)arg1;
+ (id)checklistZoomFactors;
+ (double)maxAttachmentBrickZoomFactor;
+ (id)attachmentBrickZoomFactors;
+ (id)noteListZoomFactors;
+ (id)localZoomFactors;
+ (id)globalZoomFactors;
+ (long long)globalZoomFactorIndex;
+ (void)setGlobalZoomFactorIndex:(long long)arg1;
@property(nonatomic) long long savedZoomFactorIndex; // @synthesize savedZoomFactorIndex=_savedZoomFactorIndex;
@property(retain, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
@property(nonatomic) BOOL onlyAcceptsCustomZooms; // @synthesize onlyAcceptsCustomZooms=_onlyAcceptsCustomZooms;
@property(nonatomic) double attachmentBrickZoomFactor; // @synthesize attachmentBrickZoomFactor=_attachmentBrickZoomFactor;
@property(nonatomic) long long localZoomFactorIndex; // @synthesize localZoomFactorIndex=_localZoomFactorIndex;
- (void).cxx_destruct;
- (void)removeDelegate:(id)arg1;
- (void)notifyDelegates;
- (void)addDelegate:(id)arg1;
- (void)applyZoomFactorIndex;
- (BOOL)zoomToCustomFactor:(double)arg1;
- (BOOL)zoomResetToGlobalDefault;
- (BOOL)zoomOut;
- (BOOL)zoomIn;
- (BOOL)canZoomOut;
- (BOOL)canZoomIn;
@property(readonly, nonatomic) double localZoomFactor;
- (id)init;

@end

