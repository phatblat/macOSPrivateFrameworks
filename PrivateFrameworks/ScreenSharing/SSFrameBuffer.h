//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSMutableArray, SSScreenConfiguration, SSScreenInfo;

@interface SSFrameBuffer : NSObject
{
    struct SSSize mSize;
    double mPerceivedSessionScalingFactor;
    unsigned long long mBitsPerComponent;
    unsigned long long mBitsPerPixel;
    unsigned long long mBytesPerPixel;
    unsigned long long mBytesPerRow;
    BOOL mShouldInterpolate;
    BOOL mHasCursor;
    NSData *mBuffer;
    unsigned int mBitmapInfo;
    struct CGColorSpace *mColorSpace;
    struct _opaque_pthread_mutex_t mInUseMutex;
    struct _opaque_pthread_cond_t {
        long long __sig;
        char __opaque[40];
    } mInUseCondition;
    unsigned long long mInUseCount;
    NSMutableArray *mObservers;
    struct _opaque_pthread_mutex_t mObserversMutex;
    SSScreenConfiguration *mScreenConfiguration;
    SSScreenInfo *mSelectedScreen;
    double mContentsScale;
    NSArray *mScreensToDraw;
    void *mReservedForInstanceVariables;
}

@property(copy) SSScreenInfo *selectedScreen; // @synthesize selectedScreen=mSelectedScreen;
@property(copy) SSScreenConfiguration *screenConfiguration; // @synthesize screenConfiguration=mScreenConfiguration;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 onThread:(id)arg2;
- (BOOL)hasCursor;
- (BOOL)getDestinationRect:(struct CGRect *)arg1 forScreen:(id)arg2 withSourceRect:(struct SSRect)arg3 checkIntersection:(BOOL)arg4;
- (BOOL)getSourceRect:(struct SSRect *)arg1 forScreen:(id)arg2 withDestinationRect:(struct CGRect)arg3;
- (struct SSPoint)sourcePointForScreen:(id)arg1 withDestinationPoint:(struct CGPoint)arg2;
- (double)_localScalingForScreen:(id)arg1;
- (struct CGImage *)newCGImageFromRect:(struct SSRect)arg1;
- (struct CGImage *)newCGImage;
- (struct CGImage *)copyImage:(struct CGImage *)arg1;
- (void)sizeChangedOnThread:(id)arg1;
- (void)sizeWillChangeOnThread:(id)arg1;
- (int)setFormatWithSize:(struct SSSize)arg1 screenConfiguration:(id)arg2 selectedScreen:(id)arg3 localScalingFactor:(double)arg4 contentsScale:(double)arg5 withBitsPerComponent:(unsigned long long)arg6 withBitsPerPixel:(unsigned long long)arg7 withBytesPerRow:(unsigned long long)arg8 withBitmapInfo:(unsigned int)arg9 shouldInterpolate:(BOOL)arg10 hasCursor:(BOOL)arg11 withConnection:(void *)arg12;
- (void)notifyObserversSizeWillChange:(id)arg1;
@property double perceivedScalingFactor;
@property(readonly) double contentsScale;
- (struct SSSize)size;
@property(readonly) NSArray *screensToDraw;
@property(readonly) BOOL needsCoordinateTranslations;
@property(readonly) BOOL showingMultipleDisplays;
- (void)rectChangedOnThread:(id)arg1;
- (void)exclusiveUnlock;
- (const void *)exclusiveLock;
- (void)noteRectangleChange:(struct SSRect)arg1;
- (void)unlock;
- (void)lock;
- (void)dealloc;
- (id)init;

@end

