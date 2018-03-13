//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface SSScreenInfo : NSObject <NSCopying>
{
    struct CGRect mFrame;
    struct CGRect mDestinationFrame;
    unsigned long long mIdentifier;
    unsigned long long mIndex;
    unsigned long long mFlags;
    BOOL mIsGlobalScreen;
    double mUIResolution;
    struct SSRect mScaledFrame;
    void *mReservedForInstanceVariables;
}

@property struct CGRect destinationFrame; // @synthesize destinationFrame=mDestinationFrame;
@property struct SSRect scaledFrame; // @synthesize scaledFrame=mScaledFrame;
@property double UIResolution; // @synthesize UIResolution=mUIResolution;
@property BOOL isGlobalScreen; // @synthesize isGlobalScreen=mIsGlobalScreen;
@property unsigned long long flags; // @synthesize flags=mFlags;
@property unsigned long long index; // @synthesize index=mIndex;
@property unsigned long long identifier; // @synthesize identifier=mIdentifier;
@property struct CGRect frame; // @synthesize frame=mFrame;
- (id)description;
- (id)screenInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

