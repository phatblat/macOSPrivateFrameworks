//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISCompositorRecipe.h"

@interface ISiOSAppRecipe : NSObject <ISCompositorRecipe>
{
    BOOL _shouldDrawBorder;
    unsigned long long _options;
}

@property BOOL shouldDrawBorder; // @synthesize shouldDrawBorder=_shouldDrawBorder;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property BOOL shouldApplyMask;
- (id)layerTreeForSize:(struct CGSize)arg1 scale:(double)arg2;

@end
