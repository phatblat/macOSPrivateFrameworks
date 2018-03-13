//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ESDContainer, ESDObject, ESDRoot, NSMutableArray, NSMutableDictionary, OITSUNoCopyDictionary, PBOfficeArtReaderState, PBOutlineBulletDictionary, PBSlideState, PDPresentation, PDSlideBase;

__attribute__((visibility("hidden")))
@interface PBPresentationReaderState : NSObject
{
    struct PptBinaryReader *mPptBinaryReader;
    PDPresentation *mTgtPresentation;
    ESDRoot *mDocumentRoot;
    ESDContainer *mSrcSlideListHolder;
    ChVector_fe49fc78 *mCurrentSlideTextBlockStartIndexVector;
    unsigned int mSrcSlideId;
    NSMutableArray *mSlideIndexes;
    OITSUNoCopyDictionary *mSlideMasterToMasterStyles;
    struct __CFDictionary *mHyperlinkMap;
    PBOfficeArtReaderState *mOfficeArtState;
    NSMutableArray *mFontEntities;
    PDSlideBase *mTgtSlide;
    BOOL mHasCharacterPropertyBulletIndex;
    unsigned int mBulletIndex;
    PBOutlineBulletDictionary *mPlaceholderBulletStyles;
    PBOutlineBulletDictionary *mPlaceholderMacCharStyles;
    ESDObject *mCurrentBulletStyle;
    ESDObject *mCurrentMacCharStyle;
    ChVector_b45fc7a7 *mSrcDocMasterStyleInfoVector;
    ChVector_b45fc7a7 *mSrcCurrentMasterStyleInfoVector;
    PBSlideState *mSlideState;
    id <TCCancelDelegate> mCancel;
    BOOL mHasSlideNumberPlaceholder;
    NSMutableDictionary *mTargetShapeToSourceTextBoxContainerHolderMap;
}

@property BOOL hasSlideNumberPlaceholder; // @synthesize hasSlideNumberPlaceholder=mHasSlideNumberPlaceholder;
@property(retain, nonatomic) id <TCCancelDelegate> cancelDelegate; // @synthesize cancelDelegate=mCancel;
@property ESDContainer *sourceSlideListHolder; // @synthesize sourceSlideListHolder=mSrcSlideListHolder;
- (void)setSourceTextBoxContainerHolder:(id)arg1 forTargetShape:(id)arg2;
- (id)sourceTextBoxContainerHolderForTargetShape:(id)arg1;
- (id)hyperlinkInfoWithId:(unsigned int)arg1 createIfAbsent:(BOOL)arg2;
- (BOOL)isCancelled;
- (void)setSourceSlideId:(unsigned int)arg1;
- (ChVector_fe49fc78 *)currentSlideTextBlockStartIndexVector;
- (struct PBReaderMasterStyleInfo *)currentSourceMasterStyleInfoOfType:(int)arg1;
- (struct PBReaderMasterStyleInfo *)docSourceMasterStyleInfoOfType:(int)arg1;
- (void)setCurrentSourceMasterStyleInfoVector:(ChVector_b45fc7a7 *)arg1;
- (BOOL)hasCurrentSourceMasterStyleInfoVector;
- (void)resetSlideState;
- (id)slideState;
- (id)masterStyles:(id)arg1;
- (void)setMasterStyles:(id)arg1 slideMaster:(id)arg2;
- (void)setCurrentBulletStyle:(id)arg1 macCharStyle:(id)arg2;
- (void)setCurrentTextType:(int)arg1 placeholderIndex:(unsigned int)arg2;
- (id)currentMacCharStyle;
- (id)currentBulletStyle;
- (void)setPlaceholderMacCharStyles:(id)arg1;
- (void)setPlaceholderBulletStyles:(id)arg1;
- (void)setBulletIndex:(unsigned int)arg1;
- (unsigned int)bulletIndex;
- (void)setHasCharacterPropertyBulletIndex:(BOOL)arg1;
- (BOOL)hasCharacterPropertyBulletIndex;
- (void)setTgtSlide:(id)arg1;
- (id)tgtSlide;
- (id)fontEntityAtIndex:(unsigned long long)arg1;
- (void)addFontEntity:(id)arg1 charSet:(int)arg2 type:(int)arg3 family:(int)arg4;
- (unsigned long long)fontEntityCount;
- (id)officeArtState;
- (id)slideIndexesRef;
- (unsigned long long)getSlideIndexAt:(unsigned long long)arg1;
- (void)addSlideIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSlideIndexes;
- (id)tgtPresentation;
- (void)setDocumentRoot:(id)arg1;
- (id)documentRoot;
- (struct PptBinaryReader *)reader;
- (void)dealloc;
- (id)initWithReader:(struct PptBinaryReader *)arg1 tgtPresentation:(id)arg2;

@end

