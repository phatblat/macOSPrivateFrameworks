//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FxPlugGroup : NSObject
{
    struct FxPlugGroupPriv *_priv;
}

+ (id)fxPlugGroupWithDescriptor:(id)arg1;
- (unsigned int)count;
- (id)fxPlugDescriptorAtIndex:(int)arg1;
- (void)addFxPlugDescriptor:(id)arg1;
- (id)descriptor;
- (void)dealloc;
- (id)initWithDescriptor:(id)arg1;

@end
