//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class PXExtendedTraitCollection;

@interface PXBarSpec : NSObject <NSCopying>
{
    PXExtendedTraitCollection *_extendedTraitCollection;
}

@property(readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection; // @synthesize extendedTraitCollection=_extendedTraitCollection;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)sortedBarItemsByPlacement:(id)arg1;
- (id)initWithExtendedTraitCollection:(id)arg1;
- (id)init;

@end

