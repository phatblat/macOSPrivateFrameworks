//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IPAColorTransform : NSObject
{
    struct ColorSyncTransform *_transform;
}

+ (id)transformWithSourceProfile:(id)arg1 proofingProfile:(id)arg2 destinationProfile:(id)arg3;
+ (id)transformWithSourceProfile:(id)arg1 destinationProfile:(id)arg2;
- (id)lookupTableDataWithGridSize:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithColorSyncTransform:(struct ColorSyncTransform *)arg1;

@end

